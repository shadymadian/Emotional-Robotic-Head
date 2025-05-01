from launch import LaunchDescription
from launch_ros.actions import Node
from ament_index_python.packages import get_package_share_directory
from launch.substitutions import PathJoinSubstitution
from launch_ros.substitutions import FindPackageShare
import os

def generate_launch_description():
    package_name = 'mybot'
    urdf_file_name = 'mybot.urdf'

    # 获取包的共享目录
    urdf_file_path = os.path.join(
        get_package_share_directory(package_name), 'urdf', urdf_file_name
    )
    mybot_path = FindPackageShare('mybot')
    default_rviz_config_path = PathJoinSubstitution([mybot_path, 'rviz', 'rviz.rviz'])

    return LaunchDescription([
        Node(
            package='mybot',
            executable='face_tracking_node',
            name='face_tracking_node',
            output='screen'
        ),
        Node(
            package='mybot',
            executable='motor_node',
            name='motor_node',
            output='screen'
        ),
        Node(
            package='mybot',
            executable='joint_state_publisher_node',
            name='joint_state_publisher_node',
            output='screen'
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': open(urdf_file_path).read()}],
        ),
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', default_rviz_config_path],  # Use the rviz_config_path variable here
        ),
        Node(
            package='my_ros2_project',  # Das Python-Package
            executable='socket_to_ros',  # Der Python-Node (aus setup.py)
            name='socket_to_ros_node',   # Der Name des Nodes
            output='screen'             # Konsolenausgabe auf dem Bildschirm
        ),
    ])
