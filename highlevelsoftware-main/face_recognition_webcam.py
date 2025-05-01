import cv2
import dlib
from deepface import DeepFace
from events import Events
import threading
import time

class FaceEmotionRecognition:
    def __init__(self, camera_index=0):
        self.detector = dlib.get_frontal_face_detector()
        self.cap = cv2.VideoCapture(camera_index)
        
        # Bekannte Parameter für Entfernungsmessung
        self.KNOWN_FACE_HEIGHT_CM = 20.0  # Durchschnittliche Gesichtshöhe in cm
        self.FOCAL_LENGTH = 300  # Geschätzte Brennweite der Kamera in Pixeln
        
        self.on_emotions_changed = Events()

        self.thread = threading.Thread(target=self.start_recognition)
        self.thread.daemon = True
        self.thread.start()

        self.x = 0.0
        self.y = 0.0
        self.z = 0.0    

    def start_recognition(self):
        fps_limit = 5
        frame_delay = 1 / fps_limit

        while True:
            start_time = time.time()
            
            ret, frame = self.cap.read()
            if not ret:
                print("Error: Could not read frame from camera.")
                break

            gray = cv2.cvtColor(frame, cv2.COLOR_BGR2GRAY)
            faces = self.detector(gray)

            # Bildmaße und Bildmittelpunkt berechnen
            img_height, img_width = frame.shape[:2]
            img_center_x = img_width // 2
            img_center_y = img_height // 2

            closest_face = None
            max_area = 0  

            for face in faces:
                x, y, w, h = (face.left(), face.top(), face.width(), face.height())
                cv2.rectangle(frame, (x, y), (x + w, y + h), (0, 255, 0), 2)

                # Fläche des Rechtecks berechnen
                area = w * h
                if area > max_area:
                    max_area = area
                    closest_face = (x, y, w, h)

            if closest_face is not None:
                x, y, w, h = closest_face

                # Gesichtsausschnitt für Emotionserkennung
                face_region = frame[y:y + h, x:x + w]

                # Berechnung der unteren Mitte des Rechtecks
                bottom_middle_x = x + w // 2
                bottom_middle_y = y + h

                # Entfernung zur Kamera berechnen
                self.x = (self.KNOWN_FACE_HEIGHT_CM * self.FOCAL_LENGTH) / h

                # Relative Position zur Bildmitte
                self.y = bottom_middle_x - img_center_x
                self.z = img_center_y - bottom_middle_y 

                try:
                    # Emotionserkennung
                    analysis = DeepFace.analyze(face_region, actions=['emotion'], enforce_detection=False)
                    emotion = analysis[0]['dominant_emotion']
                    confidence = analysis[0]['emotion'][emotion]
                    self.on_emotions_changed.on_change(emotion)


                    # Debug-Ausgabe
                    # print(f"Emotion: {emotion}")
                    # print(f"Entfernung zur Kamera: {distance_to_camera:.2f} cm")
                    # print(f"Relative Position zur Bildmitte: ({relative_x}, {relative_y})")

                    # Emotion anzeigen
                    cv2.putText(frame, f"{emotion}: {confidence:.2f}", (x, y - 10),
                                cv2.FONT_HERSHEY_SIMPLEX, 0.9, (0, 255, 0), 2)

                    # Detaillierte Emotionsergebnisse anzeigen
                    text_y_offset = y + h + 20
                    for emo, prob in analysis[0]['emotion'].items():
                        label = f"{emo}: {prob:.2f}%"
                        cv2.putText(frame, label, (x, text_y_offset), cv2.FONT_HERSHEY_SIMPLEX, 0.6, (255, 255, 255), 1)
                        text_y_offset += 20

                except Exception as e:
                    print(f"Error analyzing face: {e}")

            # Kamera-Feed anzeigen
            cv2.imshow('Face and Emotion Recognition', frame)

            # Abbruch bei 'q'
            if cv2.waitKey(1) & 0xFF == ord('q'):
                break

            elapsed_time = time.time() - start_time
            if elapsed_time < frame_delay:
                time.sleep(frame_delay - elapsed_time)
            
        self.stop_recognition()

    def stop_recognition(self):
        self.cap.release()
        cv2.destroyAllWindows()

if __name__ == "__main__":
    recognizer = FaceEmotionRecognition(camera_index=1)
