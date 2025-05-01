from speechbrain.inference import SpectralMaskEnhancement
import torch
import torchaudio


"""
Diese Klasse wird in der aktuellen Version nicht verwendet. Wir haben gemerkt, dass Whisper viel besser ohne Funktioniert. 

Eine NoiseCancelling Klasse die durch AI versucht Störgeräusche zu entfernen/unterdrücken.
Es kann sowohl rohe Audiodaten, als auch wav.-Dateien verarbeiten.
"""
class NoiseCancelling:
    def __init__(self):
        self.noise_canceller = SpectralMaskEnhancement.from_hparams(
            source="speechbrain/metricgan-plus-voicebank", 
            savedir="tmpdir")

    def process_audio(self, audio_data):
        audio_tensor = torch.tensor(audio_data).unsqueeze(0)  # Add batch dimension

        # Apply noise cancellation
        enhanced_audio = self.noise_canceller.enhance_batch(audio_tensor, lengths=torch.tensor([1.0]))

        # Extract the enhanced audio and convert it back to numpy for further processing
        enhanced_audio_np = enhanced_audio.squeeze().detach().numpy()

        return enhanced_audio_np
    
    def process_audio_file(self, path, output_path):
        """
        Processes an audio file to remove noise.

        Args:
            path (str): Path to the input audio file.
            output_path (str): Path to save the processed (denoised) audio file.
        """
        # Load the audio file
        audio, sample_rate = torchaudio.load(path)
        
        # Ensure the audio tensor is properly shaped for processing
        if len(audio.shape) > 1:  # Convert stereo to mono if necessary
            audio = torch.mean(audio, dim=0).unsqueeze(0)

        # Apply noise cancellation
        enhanced_audio = self.noise_canceller.enhance_batch(audio, lengths=torch.tensor([1.0]))

        # Save the enhanced audio
        torchaudio.save(output_path, enhanced_audio.squeeze(1), sample_rate)

        print(f"Processed audio saved to {output_path}")

if __name__ == "__main__":
    # Create an instance of the class
    noise_canceller = NoiseCancelling()
    # Process an audio file
    input_audio_path = "input.wav"  # Replace with your input file path
    output_audio_path = "input_noiseless.wav"  # Replace with your desired output file path
    noise_canceller.process_audio_file(input_audio_path, output_audio_path)