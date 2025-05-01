cmake_minimum_required(VERSION 3.8)
project(mybot)

# 查找依赖项
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(std_msgs REQUIRED)  # 依赖现有消息类型
find_package(tf2_ros REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(rosidl_default_generators REQUIRED)
find_package(mybot_interfaces REQUIRED)
find_package(sensor_msgs REQUIRED)
find_package(urdf REQUIRED)
find_package(message REQUIRED)

add_executable(motor_node src/motor_node.cpp)
ament_target_dependencies(motor_node 
  rclcpp 
  std_msgs 
  tf2_ros
  geometry_msgs
  tf2_geometry_msgs
  mybot_interfaces
  sensor_msgs
)

add_executable(face_tracking_node src/face_tracking_node.cpp)
ament_target_dependencies(face_tracking_node 
  rclcpp 
  std_msgs 
  tf2_ros
  geometry_msgs
  tf2_geometry_msgs
  mybot_interfaces
  sensor_msgs
  message
)

add_executable(joint_state_publisher_node src/joint_state_publisher_node.cpp)

# 链接依赖项
ament_target_dependencies(joint_state_publisher_node
  rclcpp
  sensor_msgs
  std_msgs
  geometry_msgs
  mybot_interfaces
  urdf
)

# 安装可执行文件
install(TARGETS
  face_tracking_node
  motor_node
  joint_state_publisher_node
  DESTINATION lib/${PROJECT_NAME}
)
install(
    DIRECTORY urdf
    DESTINATION share/${PROJECT_NAME}
)

install(DIRECTORY launch/
  DESTINATION share/${PROJECT_NAME}/launch
)

install(DIRECTORY rviz/
  DESTINATION share/${PROJECT_NAME}/rviz
)

ament_package()
