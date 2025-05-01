#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "mybot_interfaces/srv/rotate.hpp"

class MotorNode : public rclcpp::Node
{
public:
    MotorNode(const std::string &motor_name, const std::string &joint_name)
        : Node("motor_node_" + motor_name), motor_name_(motor_name), joint_name_(joint_name)
    {
        // 创建订阅器，订阅 JointStatePublisherNode 发布的关节状态
        subscription_ = this->create_subscription<sensor_msgs::msg::JointState>(
            "joint_states", 10, 
            std::bind(&MotorNode::joint_state_callback, this, std::placeholders::_1));
    }

private:
    void joint_state_callback(const sensor_msgs::msg::JointState::SharedPtr msg)
    {
        // 查找与当前电机关联的关节角度
        auto it = std::find(msg->name.begin(), msg->name.end(), joint_name_);
        if (it != msg->name.end())
        {
            size_t index = std::distance(msg->name.begin(), it);
            double angle = msg->position[index];

            // 模拟处理角度调整
            RCLCPP_INFO(this->get_logger(), "%s received angle %.2f for joint %s.", motor_name_.c_str(), angle, joint_name_.c_str());
        }
    }

    std::string motor_name_;    // 电机名称
    std::string joint_name_;    // 对应的关节名称
    rclcpp::Subscription<sensor_msgs::msg::JointState>::SharedPtr subscription_;
    rclcpp::Service<mybot_interfaces::srv::Rotate>::SharedPtr service_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);

    // 创建与 joint_1 和 joint_2 关联的 MotorNode
    auto motor_1_1 = std::make_shared<MotorNode>("1_1", "joint_1_1");
    auto motor_1_2 = std::make_shared<MotorNode>("1_2", "joint_1_2");
    auto motor_1_3 = std::make_shared<MotorNode>("1_3", "joint_1_3");
    auto motor_1_4 = std::make_shared<MotorNode>("1_4", "joint_1_4");
    auto motor_1_5 = std::make_shared<MotorNode>("1_5", "joint_1_5");
    auto motor_1_6 = std::make_shared<MotorNode>("1_6", "joint_1_6");
    auto motor_2_1 = std::make_shared<MotorNode>("2_1", "joint_2_1");
    auto motor_2_2 = std::make_shared<MotorNode>("2_2", "joint_2_2");
    auto motor_2_3 = std::make_shared<MotorNode>("2_3", "joint_2_3");
    auto motor_2_4 = std::make_shared<MotorNode>("2_4", "joint_2_4");
    auto motor_2_5 = std::make_shared<MotorNode>("2_5", "joint_2_5");
    auto motor_2_6 = std::make_shared<MotorNode>("2_6", "joint_2_6");
    auto motor_3_1 = std::make_shared<MotorNode>("3_1", "joint_3_1");
    auto motor_3_2 = std::make_shared<MotorNode>("3_2", "joint_3_2");
    auto motor_3_3 = std::make_shared<MotorNode>("3_3", "joint_3_3");

    rclcpp::executors::MultiThreadedExecutor executor;
    executor.add_node(motor_1_1);
    executor.add_node(motor_1_2);
    executor.add_node(motor_1_3);
    executor.add_node(motor_1_4);
    executor.add_node(motor_1_5);
    executor.add_node(motor_1_6);
    executor.add_node(motor_2_1);
    executor.add_node(motor_2_2);
    executor.add_node(motor_2_3);
    executor.add_node(motor_2_4);
    executor.add_node(motor_2_5);
    executor.add_node(motor_2_6);
    executor.add_node(motor_3_1);
    executor.add_node(motor_3_2);
    executor.add_node(motor_3_3);
    executor.spin();

    rclcpp::shutdown();
    return 0;
}
