from AudioRecorder_v3 import AudioRecorder
from WhisperSpeech2Text import Audio2Text
from Llama_emotions import EmotionalAgent
from face_recognition_webcam import FaceEmotionRecognition
from STTandTTS import AIConversation
from threading import Thread
from BarChart import BarChart
from utils.socket_client import send_to_ros


# Instantiate the model for whisper
whisper = Audio2Text()
recorder = AudioRecorder(4, "input_for_emotion.wav")
emo_agent = EmotionalAgent()

"""
Die Visualisierung der Emotionen ist momentan auskommentiert, weil es aus irgend einem Grund nicht mehr richtig funktioniert.
"""
#barchart = BarChart(emo_agent.current_emotions.keys, emo_agent.current_emotions.values)
face_recognition = FaceEmotionRecognition()

ai_conversation = AIConversation()
ai_thread = Thread(target=ai_conversation.run)
ai_thread.daemon = True
ai_thread.start()

def process_audio_data():
    audio_data = recorder.record()
    text, finished_chunk, language = whisper.generateText(audio_data)
    print(f"Text[{language}]: {text}")
    text_chunk = whisper.text_chunk

    emo_agent.generate_emotions(text, text_chunk)
    print(f"Current emotions:{str(emo_agent.current_emotions)}")

"""
Die Visualisierung der Emotionen ist momentan auskommentiert, weil es aus irgend einem Grund nicht mehr richtig funktioniert.
"""
# emo_agent.on_emotions_changed.on_change += barchart.update_values

# Event subscriptions
emo_agent.on_dominant_emotion_update.on_change += ai_conversation.update_emotion
face_recognition.on_emotions_changed.on_change += emo_agent.set_face_emotion

# Main loop
while True:
    send_to_ros(emo_agent.current_emotions.get_dominant_emotion(), face_recognition.x, face_recognition.y, face_recognition.z)
    process_audio_data()
