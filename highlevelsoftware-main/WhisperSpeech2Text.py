import faster_whisper

"""
Nutzt faster_whisper zum extrahieren von Text aus Audio Daten. 
Man kann beim Initailisieren einstellen, ob er den Text im Terminal ausgeben soll und welche Sprachen erlaubt sind. 
Wenn eine Sprache nicht erlaubt ist, dann gibt er einen leeren String aus. 
Wenn None als erlaubte Sprache übergeben wird, dann ist jede Sprache erlaubt.

Wichtig!
Als Device ist gerade Cuda eingestellt bei faster_whisper. Falls man keine Nvidia Grafikkarte hat, dann muss man das auf cpu umstellen.

Wird von STTandTTS und main.py für Llama_emotions verwendet.
"""
class Audio2Text:
    def __init__(self, debug=False, allowed_languages=['de', 'en']):
        self.model = faster_whisper.WhisperModel("large", device='cuda', compute_type='auto')
        self.text_chunk = ""
        self.log_text = ""
        self.debug = debug
        self.allowed_languages = allowed_languages

    def generateText(self, audio_data):
        finished_chunk = ""
        segments, info = self.model.transcribe(audio_data)
        text = "".join(segment.text for segment in segments)
        text = text.strip()
        language = info.language

        if self.allowed_languages != None and not (language in self.allowed_languages):
            text = ''

        # Safe and print the data
        if len(text) > 0:
            self.text_chunk += text
        elif len(self.text_chunk) > 0:
            self.log_text += self.text_chunk
            finished_chunk = self.text_chunk
            self.text_chunk = ""

        if self.debug:
            print(f"Text[{language}]:{text}")

        return text, finished_chunk, language
