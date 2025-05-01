import socket
import json

def send_to_ros(emotion, distance_to_camera, relative_x, relative_y, debug=False):
    HOST = '127.0.0.1'  # IP-Adresse des ROS2-Servers
    PORT = 65432        # Port für die Kommunikation
    
    # Erstellen des JSON-Datenobjekts
    data = {
        'emotion': emotion,
        'x': distance_to_camera,
        'y': relative_x,
        'z': relative_y,
    }
    
    # Umwandeln der Daten in einen JSON-String
    data_string = json.dumps(data)
    
    # Verbindung zum Server und Senden der Daten
    with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
        s.connect((HOST, PORT))
        s.sendall(data_string.encode('utf-8'))
        if debug:
            print(f'Sent to ROS: {data_string}')
