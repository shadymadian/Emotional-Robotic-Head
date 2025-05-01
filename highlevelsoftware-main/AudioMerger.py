import torchaudio
import torch


"""
Die Klasse nimmt 2 .wav-Dateien und überlappt die zu einer neuen .wav-Datei. Wurde benutzt um Noise und Speech zu kombinieren zum testen von Noise Cancelling. 
"""
class AudioMerger:
    def __init__(self):
        pass

    def load_audio(self, path):
        """
        Lädt eine Audio-Datei und gibt sie als Tensor und die Sample-Rate zurück.
        
        Args:
            path (str): Pfad zur Audio-Datei.
        
        Returns:
            audio (Tensor): Audio-Daten als 1D-Tensor (Mono).
            sample_rate (int): Abtastrate der Audio-Datei.
        """
        audio, sample_rate = torchaudio.load(path)
        # Konvertiere Stereo zu Mono, falls nötig
        if len(audio.shape) > 1:
            audio = torch.mean(audio, dim=0)
        return audio, sample_rate

    def save_audio(self, path, audio, sample_rate):
        """
        Speichert die Audio-Daten in einer WAV-Datei.
        
        Args:
            path (str): Zielpfad der WAV-Datei.
            audio (Tensor): Audio-Daten als 1D-Tensor (Mono).
            sample_rate (int): Abtastrate der Audio-Datei.
        """
        torchaudio.save(path, audio.unsqueeze(0), sample_rate)

    def merge_audio(self, path1, path2, output_path, method='overlay'):
        """
        Überlagert zwei Audio-Dateien und speichert das Ergebnis.
        
        Args:
            path1 (str): Pfad zur ersten Audio-Datei.
            path2 (str): Pfad zur zweiten Audio-Datei.
            output_path (str): Pfad zur Ausgabe-WAV-Datei.
            method (str): Methode der Überlagerung ('overlay' oder 'add').
        """
        # Lade beide Audio-Dateien
        audio1, sr1 = self.load_audio(path1)
        audio2, sr2 = self.load_audio(path2)

        # Überprüfe, ob die Sample-Rates übereinstimmen
        if sr1 != sr2:
            raise ValueError("Die Sample-Rates der beiden Dateien müssen übereinstimmen!")

        # Passe die Längen an
        max_length = max(audio1.size(0), audio2.size(0))
        audio1_padded = torch.nn.functional.pad(audio1, (0, max_length - audio1.size(0)))
        audio2_padded = torch.nn.functional.pad(audio2, (0, max_length - audio2.size(0)))

        # Kombiniere die Audio-Daten
        if method == 'overlay':
            merged_audio = audio1_padded + audio2_padded
        elif method == 'add':
            merged_audio = (audio1_padded + audio2_padded) / 2  # Mittelwert
        else:
            raise ValueError("Ungültige Methode. Verfügbar: 'overlay', 'add'.")

        # Normiere das Ergebnis
        merged_audio = merged_audio / torch.max(torch.abs(merged_audio))

        # Speichere das Ergebnis
        self.save_audio(output_path, merged_audio, sr1)
        print(f"Gemischtes Audio wurde gespeichert unter: {output_path}")


# Beispiel für die Nutzung der Klasse
if __name__ == "__main__":
    merger = AudioMerger()

    input_audio1 = "Audio Files/noise.wav"  # Pfad zur ersten Datei
    input_audio2 = "Audio Files/voice.wav"  # Pfad zur zweiten Datei
    output_audio = "Audio Files/input.wav"  # Pfad zur Ausgabedatei

    merger.merge_audio(input_audio1, input_audio2, output_audio, method='overlay')
