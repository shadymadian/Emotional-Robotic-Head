import sounddevice as sd
from queue import Queue
import numpy as np
from scipy.io.wavfile import write
import time


"""
Eine Klasse die durch die record Funktion solange Audio aufnimmt, bis entweder der Sprecher zu lange nichts mehr gesagt hat, oder die max_record_time überschritten wurde. 
Ob der Sprecher gerade redet oder nicht, wird durch einen Threshold bestimmt. Dieser wird bei der ersten Aufnahme festgelegt anhand des Mittelwerts der ersten 0.5 Sekunden.
Danach wird der Wert nicht mehr aktualisiert. Die Threshold-bestimmung könnte man noch bisschen verbessern. 
Beim aufnehmen der Audio werden erst Daten gespeichert, wenn der Threshold überschritten wurde. 
Wenn also während der gesammten Zeit der Threshold nie überschritten wurde, dann wird einfach nur ein leeres np.array übergeben.

Wird von STTandTTS und main.py für Llama_emotions verwendet.
"""
class AudioRecorder:
    def __init__(self, max_record_time=None, file_path="input.wav"):
        self.queue = Queue()
        self.RATE = 16000
        self.BLOCK_DURATION = .5
        self.BLOCK_SIZE = int(self.RATE * self.BLOCK_DURATION)
        self.MIN_THRESHOLD = 0.05
        self.SILENCE_DURATION = 1.
        self.silence_threshold_init = False
        self.max_record_time = max_record_time
        self.FILE_PATH = file_path

    def record(self):
        """Nimmt Audio auf, bis der Benutzer aufhört zu sprechen oder die maximale Zeit überschritten wurde."""
        print("Sprich jetzt. Aufnahme gestartet ...")

        recording = True

        def callback(indata, frames, time, status):
            self.queue.put(indata.copy())

        with sd.InputStream(samplerate=self.RATE, channels=1, dtype='float32', callback=callback, blocksize=self.BLOCK_SIZE):
            audio_buffer = []
            silence_counter = 0
            initial_silence = True

            
            start_time = time.time()
                

            while recording:
                if self.max_record_time != None and time.time() >= start_time + self.max_record_time:
                    recording = False

                try:
                    data = self.queue.get()

                    if not self.silence_threshold_init:
                        self.silence_threshold = np.abs(data).mean() + self.MIN_THRESHOLD
                        self.silence_threshold_init = True
                        print(f"Threshold set to: {self.silence_threshold}")
                        continue

                    # Check for initial silence
                    if initial_silence and np.abs(data).mean() <= self.silence_threshold:
                        print("Waiting for input.")
                        continue
                    else:
                        initial_silence = False
                        audio_buffer.append(data)

                    # Check for ongoing silence
                    if np.abs(data).mean() < self.silence_threshold:
                        silence_counter += 1 / self.RATE * len(data)
                        if silence_counter > self.SILENCE_DURATION:
                            recording = False
                            audio_buffer.pop()
                    else:
                        silence_counter = 0
                except KeyboardInterrupt:
                    break
        if len(audio_buffer) != 0:            
            audio_data = np.concatenate(audio_buffer, axis=0)
            audio_data = self.audio_to_ndarray(audio_data)
            write(self.FILE_PATH, self.RATE, np.int16(audio_data * 32767))

            return audio_data
        else:
            return np.array([])
       
    
    def audio_to_ndarray(self, audio_data):
        if audio_data is None:
            print("No audio data to convert.")
            return None

        # Convert bytes to NumPy array
        audio_ndarray = np.frombuffer(audio_data, dtype=np.float32)
        print("Audio converted to ndarray.")
        return audio_ndarray
