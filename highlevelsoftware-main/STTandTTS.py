from WhisperSpeech2Text import Audio2Text
import sounddevice as sd
import numpy as np
from scipy.io.wavfile import write
from langchain_ollama import OllamaLLM
from langchain_core.prompts import ChatPromptTemplate
from rapidfuzz import process, fuzz
from TTS.api import TTS
from threading import Thread
from AudioRecorder_v3 import AudioRecorder
from TimeMeasurement import Timer


"""
Diese Klasse ermöglicht es mit dem Roboter zu Sprechen. Es nimmt zu Beginn die Stimme mit AudioRecorder_v3 auf.
Es fängt an mit der Aufnahme, wenn die Person anfängt zu reden und beendet die Aufnahme wenn die Person aufhört zu reden.
Diese Datei wird dann weiter gegeben an whisper um den Text und die Sprache zu entnehmen. 
Diese Informationen werden dann an Llama gegeben um eine Antwort zu generieren.
Er verwendet ebenfalls die Information current_emotion zum erstellen der Antwort. 
Diese wird ihm in der main.py über ein Event von dem EmotionalAgent übergeben.
Zum Schluss wird die Antwort durch ein TTS Model in Audio umgewandelt und direkt abgespielt.
Die Klasse wartet dann die Dauer der Audio ab, bevor es wieder anfängt zuzuhören.

Es ist gedacht die Klasse zu initialisieren und dann die run Funktion in einem eigenen Thread laufen zu lassen.
Man kann außerdem vordefinierte Antworten auf bestimmte Fragen erstellen.
"""
class AIConversation:
    def __init__(self, debug=False):


        # Modelle vorladen
        self.s2t_model = Audio2Text(allowed_languages=None)

        self.tts_models = {
            "de": "tts_models/de/thorsten/vits",
            "en": "tts_models/en/ljspeech/vits"
        }
        self.tts_instances = {
            lang: TTS(model_name=model_name, progress_bar=False, gpu=False)
            for lang, model_name in self.tts_models.items()
        }

        self.debug = debug

        self.timer = Timer()

        # LangChain Modell initialisieren
        self.llm_model = OllamaLLM(model="llama3.2")
        template = """
        You are a robot head with the ability to feel and express emotions.
        Your task is to communicate with the person in front of you in a way that reflects your current emotional state, infusing your responses with depth and personality.
        Respond naturally and authentically, focusing only on what you want to say. Avoid including additional information about how you want to express yourself or what you do with your voice or body to do so.
        This is important, because the text you provide will be transformed to audio via text to speech. 

        Your response should be casual and not formly. It should sound like talking to a normal person and not a lawyer or something like that.
        Also, if you are talking about your day, then don't make things up. Instead, use the conversation history.

        Here is the conversation history: {context}

        Your current emotions: {emotion}

        The user input: {question}

        The language of your response should be: {language}

        Answer: 
        """
        self.prompt = ChatPromptTemplate.from_template(template)
        self.chain = self.prompt | self.llm_model

        # Vordefinierte Antworten
        self.predefined_responses = {
            "Begrüße mich": self.say_hello,
            "Bewege die Augenbrauen": self.move_eyebrows
        }

        # Emotionen initialisieren
        self.current_emotion = "neutral"

        self.recorder = AudioRecorder()

    def say_hello(self):
        return "Hallo vom Roboter! Wie geht es dir?"

    def move_eyebrows(self):
        return "Die Augenbrauen wurden bewegt!"

    def play_tts(self, text, lang="de"):
        tts = self.tts_instances.get(lang, self.tts_instances["de"])
        tts_audio = np.array(tts.tts(text))
        sample_rate = 22050
        duration = len(tts_audio)/sample_rate

        write('output.wav', sample_rate, np.int16(tts_audio * 32767))

        def callback(outdata, frames, time, status):
            outdata[:] = tts_audio[:frames].reshape(-1, 1)  # Send audio to output
            tts_audio[:] = np.roll(tts_audio, -frames)  # Move data for looping
        self.timer.tac()

        with sd.OutputStream(samplerate=sample_rate, channels=1, callback=callback):
            print("Playing audio... Press Ctrl+C to stop.")
            sd.sleep(int(duration * 1000))  # Wait for the duration

    def find_best_match(self, user_input):
        best_match, score, _ = process.extractOne(user_input, self.predefined_responses.keys(), scorer=fuzz.ratio)
        return best_match if score >= 55 else None

    def update_emotion(self, emotion):
        self.current_emotion = emotion

    def handle_user_input(self, transcribed_text, context, detected_language):
        match = self.find_best_match(transcribed_text)
        language = detected_language if detected_language == 'en' else 'de'
        if match:
            response = self.predefined_responses[match]()
        else:
            response = self.chain.invoke({
                "context": context,
                "question": transcribed_text,
                "emotion": self.current_emotion,
                "language": language
            })
        return response

    def run(self):
        context = ""
        print("Welcome to the AI Chatbot! Speak now.")
        while True:
            try:
                audio_data = self.recorder.record()
                self.timer.tic()

                transcribed_text, _, detected_language = self.s2t_model.generateText(audio_data)
                print(f"You (transcribed): {transcribed_text} (Language: {detected_language})")

                response = self.handle_user_input(transcribed_text, context, detected_language)
                print("Bot:", response)
                self.play_tts(response, detected_language)
                context += f"\nUser: {transcribed_text}\nAI: {response}"

            except KeyboardInterrupt:
                print("\nGoodbye! Auf Wiedersehen!")
                self.text_to_speech("Goodbye! Auf Wiedersehen!", lang="de")
                break
            except Exception as e:
                print(f"Ein Fehler ist aufgetreten: {e}")

if __name__ == "__main__":
    ai_conversation = AIConversation(True)
    ai_thread = Thread(target=ai_conversation.run)
    ai_thread.start()
