import time

"""
Simple Timer Klasse zum messen von Laufzeit. Tic für Timer-start und tac für Timer-stop. 
"""
class Timer:
    def __init__(self):
        self.start_time = 0
        self.end_time = 0
        self.last_time_measured = 0

    def tic(self):
        self.start_time = time.time_ns()

    def tac(self):
        self.end_time = time.time_ns()
        self.last_time_measured = (self.end_time - self.start_time)/1_000_000_000
        

        print("Measured time:", self.last_time_measured)

        return self.last_time_measured