import json
import rclpy
from rclpy.node import Node
from message.msg import Emotion
import socket

class SocketToROSNode(Node):
    def __init__(self):
        super().__init__('socket_to_ros_node')
        self.publisher_ = self.create_publisher(Emotion, 'emotion_topic', 10)
        self.start_socket_server()

    def start_socket_server(self):
        HOST = '127.0.0.1'  # IP-Adresse des Servers
        PORT = 65432        # Port für die Kommunikation

        with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as server_socket:
            server_socket.bind((HOST, PORT))
            server_socket.listen()
            self.get_logger().info('Socket server listening...')

            while True:
                conn, addr = server_socket.accept()
                with conn:
                    self.get_logger().info(f'Connected by {addr}')
                    data = conn.recv(1024)
                    if data:
                        decoded_data = data.decode('utf-8')
                        self.get_logger().info(f'Received: {decoded_data}')
                        self.publish_to_ros(decoded_data)

    def publish_to_ros(self, data):
        # Umwandeln des JSON-Strings in ein Python Dictionary
        data_dict = json.loads(data)
        
        # Erstellen der ROS2-Nachricht
        msg = Emotion()
        msg.emotion = data_dict['emotion']
        msg.x = float(data_dict['x'])  
        msg.y = float(data_dict['y'])  
        msg.z = float(data_dict['z'])  
        
        # Veröffentlichen der Nachricht in ROS2
        self.publisher_.publish(msg)
        self.get_logger().info(f'Published to ROS: {data_dict}')

def main(args=None):
    rclpy.init(args=args)
    node = SocketToROSNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        node.get_logger().info('Shutting down.')
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()
