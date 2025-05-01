import matplotlib.pyplot as plt
import threading


"""
Diese Klasse wird in der aktuellen Version nicht verwendet.

Ein Klasse für einen Bar Chart zur vereinfachten Visualisierung. 
Momentan leider nicht funktionsfähig. 
Normalerweise würde aber bei der Initalisierung ein neue Thread erstellt werden, der alle 0.5 sekunden den Chart aktualisiert.
Über die update_values Funktion kann man die neuen Werte der Klasse mitteilen.
"""
class BarChart:
    def __init__(self, categories, values):
        self.categories = categories
        self.values = values
        self.interval = .5

        # Start the update thread
        self.thread = threading.Thread(target=self._update)
        self.thread.daemon = True
        self.thread.start()

    def _update(self):
        plt.ion()  # Enable interactive mode
        fig, ax = plt.subplots()
        
        while True:
            ax.clear()
            ax.set_ylim(0, 1)
            ax.bar(self.categories, self.values)
            plt.draw()
            plt.pause(self.interval)  # Allows the figure to update interactively

    def update_values(self, new_values):
        self.values = new_values