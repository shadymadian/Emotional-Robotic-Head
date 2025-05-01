import ollama
import json
from events import Events

"""
Eine Klasse um einfacher Emotionen zu speichern und zu verarbeiten.
"""
class Emotions:
    def __init__(self, values = None):
        self.keys = ['angry', 'happy', 'sad', 'surprised', 'fear', 'neutral']
        self.values = [0, 0, 0, 0, 0, 1]
        if values is not None:
            self.update_values(values)
        
    def __str__(self):
        return str(self.get_emotions_as_dict())

    def __getitem__(self, index_item):
        if isinstance(index_item, str):
            index = self.keys.index(index_item)
        elif isinstance(index_item, int):
            index = index_item
        else:
            raise TypeError()
        
        return self.values[index]  

    """
    Provides the emotion values as a dict

    Returns:
    - dict: Emotion values and keys as a dict
    """
    def get_emotions_as_dict(self):
        return dict(zip(self.keys, self.values))

    """
    Updates the emotion values based on the provided input.

    Parameters:
    - data (dict or list): A dictionary or list containing emotion values.

    Returns:
    - bool: True if the update was successful, False if an error occurred.
    """
    def update_values(self, values)->bool:
        if isinstance(values, dict):
            if list(values.keys()) != self.keys:
                print(f"Keys are not matching for values in Emotions! Keeping last values.")
            if not all(isinstance(x, (int, float)) for x in values.values()):
                print("Only numeric values are allowed for emotion values! Keeping last values.")
            else:
                self.values = list(values.values())
                return True
        elif isinstance(values, type([])):
            if len(self.keys) != len(values):
                print(f"Wrong array size for Emotions value! Expected {len(self.keys)} values, received {len(values)}. Keeping last values.")
            elif not all(isinstance(x, (int, float)) for x in values):
                print("Only numeric values are allowed for emotion values! Keeping last values.")
            else:
                self.values = values
                return True
        else:
            print(f"Wrong type for Emotions values! Expected {type([])} or dict, received{type(values)}. Keeping last values.")

        return False

    def create_emotions_template_str(self):
        result = "{"
        first_iteration = True
        for emotion in self.keys:
            if first_iteration:
                first_iteration = False
                result += f'"{emotion}":<score>'
            else:
                result += f', "{emotion}":<score>'
        result += "}"
        return result
    
    def get_dominant_emotion(self):
        emotion = 'neutral'
        value = 0
        for i in range(len(self.values)):
            if value < self.values[i]:
                emotion = self.keys[i]

        return emotion


"""
Eine Klasse zum simulieren von Emotionen des Roboters. 
Zum erstellen der Emotionen braucht er die Gesichtsemotion von face_recognition_webcam, einen Text den er verarbeiten soll und einen Text Chunk für den Kontext.
Die Gesichtsemotion wird durch ein Event in der Main übergeben. Text und Text Chunk erhält man von WhisperSpeech2Text.
Falls der Text leer ist, dann wird die Emotion in Richtung default_emotion bewegt.
Andernfalls werden alle Informationen an Llama übergeben und der generiert uns ein Dict mit Emotionswerten.
Wir überprüfen dann, ob die Antwort das richtige Format hat und normalisieren sie. 
Danach lösen wir die dazugehörigen Events aus.
"""
class EmotionalAgent:
    def __init__(self, default_emotion_w = 0.25, update_emotion_w = 0.5):
        self.default_emotion = Emotions([0, 0, 0, 0, 0, 1])
        self.current_emotions = Emotions(self.default_emotion.values)
        self.default_emotion_w = default_emotion_w
        self.update_emotion_w = update_emotion_w

        self.on_emotions_changed = Events()
        self.on_dominant_emotion_update = Events()

        self.face_emotion = 'Neutral'

        e_temp = self.current_emotions.create_emotions_template_str()

        self.agent_task = {"role":"system",
                "content":f'''
                Your task is to simulate the emotions of a robot in response to varying inputs. This will involve interpreting emotional cues and generating appropriate emotional states that the robot can express through its movements, particularly eyebrow movements.

                You will receive four key inputs:

                Input Text: This is the primary text that you need to react to. It represents the current conversation or statement made by a speaker. Analyze the content carefully to gauge the underlying emotions or sentiments expressed.

                Input Chunk: This input contains previously spoken text. It serves as context, allowing you to understand the flow of the conversation and the emotional backdrop. Consider how the emotions conveyed in this chunk relate to the new input text to maintain continuity in emotional expression.

                Your Last Emotions: This contains the values representing the robot's current emotional state. These values provide a baseline for how the robot has been feeling before the latest input. Use these values to inform your response, ensuring that emotional transitions are believable and consistent.

                The emotion of the person in front of you: The emotion of the person in front of you that was recognized via face recognition.

                Emotional Output
                The emotions you provide will be represented through the robot's eyebrow movements, which will visually communicate its emotional state. It is crucial that the emotions you generate align well with the context provided by both the input text and the input chunk. Your emotional responses should fulfill the expectations of the speaker, enhancing the interaction's realism and effectiveness.

                If you find that you are uncertain about how to react to the input text, or if the context does not provide enough clarity, please revert to the last recorded emotional state and use those values.

                Output Requirements
                You must return your response strictly as a dictionary with the following keys:

                angry: Represents the intensity of anger, where a score of 0 indicates no anger, and a score of 1 indicates extreme anger.
                happy: Represents the intensity of happiness, with 0 meaning no happiness and 1 indicating maximum happiness.
                sad: Represents the intensity of sadness, where 0 means no sadness and 1 means extreme sadness.
                surprised: Represents the intensity of surprise, from 0 (no surprise) to 1 (extreme surprise).
                fear: Represents the intensity of fear, where 0 indicates no fear and 1 indicates extreme fear.
                neutral: Represents a neutral emotional state, where 0 means not neutral and 1 indicates complete neutrality.
                Each key must contain a numeric score between 0 and 1, signifying the intensity of the corresponding emotion.

                Important: Do not include any additional text, explanations, or deviations from this specified format. Your output should be clean and concise, focusing solely on the emotional scores.

                Output Format
                Your response should strictly adhere to the following JSON structure:

                {e_temp}
                Only respond in this format.
                '''}

    def _create_input(self, input_text, input_chunk)->dict:
        return {"role":"user", "content":f"input text:[{input_text}]; input chunk:[{input_chunk}]; your last emotions:{str(self.current_emotions)}; the emotion of the person in front of you:{self.face_emotion}"}
    
    def set_face_emotion(self, emotion):
        self.face_emotion = emotion

    # Generates emotions based on the input
    def _create_emotions_with_llama(self, input_text, input_chunk):
        prompt = [self.agent_task, self._create_input(input_text, input_chunk)]
        result = ollama.chat(
            model="llama3.2",
            messages=prompt
        )

        raw_result_text = result["message"]["content"]
        try:
            #search for start and end of dict
            substr_start = str.find(raw_result_text, '{')
            substr_end = str.find(raw_result_text, '}')
            # if there is no valid start and end of a dict, then return
            if substr_end == -1 or substr_start == -1:
                print("Error: no dict in result!")
                return -1
            # get dict
            substr = raw_result_text[substr_start:substr_end+1]
            # format the dict for next function
            result_text = str.replace(substr, "'", '"')

            # create dict from string
            new_emotions = json.loads(result_text)

            # check if dict has right keys
            if list(new_emotions.keys()) == self.current_emotions.keys:
                return new_emotions
            else:
                print("Dict has not the right keys!")
                return -1
        except Exception as ex:
            print(type(ex))
            print(ex.args)
            print(ex)
        print(f"AI response before error:{raw_result_text}")
        return -1
    
    def generate_emotions(self, input_text, input_chunk):
        # if the input is empty, then the emotions will transition into a default state
        if(len(input_text) == 0):
            new_emotions = self.current_emotions.get_emotions_as_dict()
            for key in new_emotions.keys():
                new_emotions[key] = round(self.current_emotions[key] + self.default_emotion_w * (self.default_emotion[key] - self.current_emotions[key]), 2)
            self.current_emotions.update_values(new_emotions)
        else:
            new_emotions = self._create_emotions_with_llama(input_text, input_chunk)
            if new_emotions == -1:
                return
            self.current_emotions.update_values(self._normalize_dict(new_emotions))
        # cast event for change in emotion values
        self.on_emotions_changed.on_change(self.current_emotions.values)
        self.on_dominant_emotion_update.on_change(self.current_emotions.get_dominant_emotion())

    # runs over the given dict and sets min value to 0 and max value to 1
    def _normalize_dict(self, dict)->dict:
        norm_dict = dict.copy()

        # calc norm factor
        min_emo_value = None
        max_emo_value = None
        
        # find min and max value
        for value in dict.values():
            if min_emo_value == None:
                min_emo_value = value
            if max_emo_value == None:
                max_emo_value = value
            
            if min_emo_value > value:
                min_emo_value = value
            elif max_emo_value < value:
                max_emo_value = value
        max_emo_value = max_emo_value - min_emo_value
        
        # calc. norm vector
        if max_emo_value != 0.0:
            # norm the new emotion values
            for key in dict.keys():
                norm_dict[key] = (dict[key] - min_emo_value)/max_emo_value

        return norm_dict
        