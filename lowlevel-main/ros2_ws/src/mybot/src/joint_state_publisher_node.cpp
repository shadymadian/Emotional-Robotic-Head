#include "rclcpp/rclcpp.hpp"
#include "sensor_msgs/msg/joint_state.hpp"
#include "mybot_interfaces/srv/rotate.hpp"
#include <vector>
#include <string>
#include <cmath>  // Für mathematische Operationen
#include "urdf/model.h"
#include "ament_index_cpp/get_package_share_directory.hpp"
#include "std_msgs/msg/int32_multi_array.hpp"


class JointStatePublisherNode : public rclcpp::Node
{
public:
    JointStatePublisherNode()
        : Node("joint_state_publisher")
    {
        // Initialisiere Publisher
        publisher_ = this->create_publisher<sensor_msgs::msg::JointState>("joint_states", 10);

        // Setze Gelenknamen
        joint_names_ = {"joint_1_1", "joint_1_2", "joint_1_3", "joint_1_4", "joint_1_5", "joint_1_6",
                        "joint_2_1", "joint_2_2", "joint_2_3", "joint_2_4", "joint_2_5", "joint_2_6", 
                        "joint_3_1", "joint_3_2", "joint_3_3"};
        num_joints_ = joint_names_.size();

        std::string urdf_path = ament_index_cpp::get_package_share_directory("mybot") + "/urdf/mybot.urdf";
        urdf::Model robot_model;
        if (!robot_model.initFile(urdf_path)) {
            RCLCPP_ERROR(this->get_logger(), "Failed to parse URDF file.");
            return;
        }

        // Initialisiere Gelenkzustände
        positions_ = std::vector<double>(num_joints_, 0.0);
        velocities_ = std::vector<double>(num_joints_, 0.0);
        efforts_ = std::vector<double>(num_joints_, 0.0);
        target_positions_ = positions_;  // Zielpositionen initialisieren
        step_size_ = 0.08;  // Schrittweite (in Radiant)

        // Extrahiere Gelenkgrenzen aus dem URDF-Modell
        joint_limits_.resize(num_joints_);
        for (size_t i = 0; i < num_joints_; ++i) {
            auto joint = robot_model.getJoint(joint_names_[i]);
            if (joint && joint->limits) {
                joint_limits_[i] = {joint->limits->lower, joint->limits->upper};  // Speichern der Grenzen
            } else {
                joint_limits_[i] = {0.0, 0.0};  // Standardwerte, falls keine Grenzen gefunden wurden
            }
        }

        // Initialisiere Service
        service_ = this->create_service<mybot_interfaces::srv::Rotate>(
            "set_joint_angles",
            std::bind(&JointStatePublisherNode::handle_request, this, std::placeholders::_1, std::placeholders::_2));

        publisher_command_ = this->create_publisher<std_msgs::msg::Int32MultiArray>("command", 1);

        // Timer zur Veröffentlichung von Nachrichten alle 100ms
        timer_ = this->create_wall_timer(
            std::chrono::milliseconds(20),
            std::bind(&JointStatePublisherNode::publish_joint_states, this));
    }

private:
    void handle_request(
    const std::shared_ptr<mybot_interfaces::srv::Rotate::Request> request,
    const std::shared_ptr<mybot_interfaces::srv::Rotate::Response> response)
{
    // Überprüfe für jedes Gelenk, ob ein Wert übergeben wurde, und setze das Ziel entsprechend
    if (request->angle_motor_1_1_set) {
        target_positions_[0] = std::clamp(request->angle_motor_1_1, joint_limits_[0].first, joint_limits_[0].second);
    }
    if (request->angle_motor_1_2_set) {
        target_positions_[1] = std::clamp(request->angle_motor_1_2, joint_limits_[1].first, joint_limits_[1].second);
    }
    if (request->angle_motor_1_3_set) {
        target_positions_[2] = std::clamp(request->angle_motor_1_3, joint_limits_[2].first, joint_limits_[2].second);
    }
    if (request->angle_motor_1_4_set) {
        target_positions_[3] = std::clamp(request->angle_motor_1_4, joint_limits_[3].first, joint_limits_[3].second);
    }
    if (request->angle_motor_1_5_set) {
        target_positions_[4] = std::clamp(request->angle_motor_1_5, joint_limits_[4].first, joint_limits_[4].second);
    }
    if (request->angle_motor_1_6_set) {
        target_positions_[5] = std::clamp(request->angle_motor_1_6, joint_limits_[5].first, joint_limits_[5].second);
    }
    if (request->angle_motor_2_1_set) {
        target_positions_[6] = std::clamp(request->angle_motor_2_1, joint_limits_[6].first, joint_limits_[6].second);
    }
    if (request->angle_motor_2_2_set) {
        target_positions_[7] = std::clamp(request->angle_motor_2_2, joint_limits_[7].first, joint_limits_[7].second);
    }
    if (request->angle_motor_2_3_set) {
        target_positions_[8] = std::clamp(request->angle_motor_2_3, joint_limits_[8].first, joint_limits_[8].second);
    }
    if (request->angle_motor_2_4_set) {
        target_positions_[9] = std::clamp(request->angle_motor_2_4, joint_limits_[9].first, joint_limits_[9].second);
    }
    if (request->angle_motor_2_5_set) {
        target_positions_[10] = std::clamp(request->angle_motor_2_5, joint_limits_[10].first, joint_limits_[10].second);
    }
    if (request->angle_motor_2_6_set) {
        target_positions_[11] = std::clamp(request->angle_motor_2_6, joint_limits_[11].first, joint_limits_[11].second);
    }
    if (request->angle_motor_3_1_set) {
        target_positions_[12] = std::clamp(request->angle_motor_3_1, joint_limits_[12].first, joint_limits_[12].second);
    }
    if (request->angle_motor_3_2_set) {
        target_positions_[13] = std::clamp(request->angle_motor_3_2, joint_limits_[13].first, joint_limits_[13].second);
    }
    if (request->angle_motor_3_3_set) {
        target_positions_[14] = std::clamp(request->angle_motor_3_3, joint_limits_[14].first, joint_limits_[14].second);
    }

    RCLCPP_INFO(this->get_logger(), "Target joint angles updated within limits.");
    response->success = true;
}


    void publish_joint_states()
    {
        for (size_t i = 0; i < num_joints_; ++i) {
            double c_step_size_ = step_size_;
            if(i == 2 || i == 8){
                c_step_size_ = 4 * c_step_size_;
            }
            if(i == 0 || i == 1 || i == 6 || i == 7){
                c_step_size_ = 2 * c_step_size_;
            }
            if(i == 12 || i == 14){
                c_step_size_ = 0.125 * c_step_size_;
            }
            if(i == 13){
                c_step_size_ = 0.25 * c_step_size_;
            }

            if (positions_[i] < target_positions_[i]) {
                positions_[i] += c_step_size_;
                if (positions_[i] > target_positions_[i]) positions_[i] = target_positions_[i];
            } else {
                positions_[i] -= c_step_size_;
                if (positions_[i] < target_positions_[i]) positions_[i] = target_positions_[i];
            }
        }

        // Erstelle und publiziere JointState-Nachricht
        auto msg = sensor_msgs::msg::JointState();
        msg.header.stamp = this->now();
        msg.name = joint_names_;
        msg.position = positions_;
        msg.velocity = velocities_;
        msg.effort = efforts_;

        publisher_->publish(msg);

        std::vector<double> zw_positions = positions_;

        std::vector<double> vect = matrixVectorMultiplication(zw_positions[12], zw_positions[14]);
        zw_positions[12] = vect[0];
        zw_positions[14] = vect[1];

        std::vector<int32_t> radians;
        for (double position : zw_positions)
        {
            radians.push_back(mapRadiansToSignal(position));
        }
        radians.push_back(-1);
        auto msg_array = std_msgs::msg::Int32MultiArray();
        msg_array.data = radians;
        publisher_command_->publish(msg_array);

        RCLCPP_INFO(this->get_logger(), "Published joint states.");
    }
    std::vector<double> matrixVectorMultiplication(double x, double y) {
        // Standardwerte der Matrix
        double angle = M_PI / 4; // 45 Grad in Radiant
        double matrix[2][2] = {
            {std::cos(angle), -std::sin(angle)},
            {std::sin(angle),  std::cos(angle)}
        };

        // Vektor-Multiplikation durchführen
        std::vector<double> result;
        result.push_back(matrix[0][0] * x + matrix[0][1] * y);
        result.push_back(matrix[1][0] * x + matrix[1][1] * y);

        return result;
    }
    int32_t mapRadiansToSignal(double radian)
    {
        const double min_radian = -M_PI / 2; // -pi/2
        const double max_radian = M_PI / 2;  // +pi/2
        const int32_t min_signal = 103;
        const int32_t max_signal = 511;

        // Lineares Mapping
        return static_cast<int32_t>(min_signal + ((radian - min_radian) / (max_radian - min_radian)) * (max_signal - min_signal));
    }

    rclcpp::Publisher<sensor_msgs::msg::JointState>::SharedPtr publisher_;
    rclcpp::Publisher<std_msgs::msg::Int32MultiArray>::SharedPtr publisher_command_;
    rclcpp::Service<mybot_interfaces::srv::Rotate>::SharedPtr service_;
    rclcpp::TimerBase::SharedPtr timer_;
    std::vector<std::string> joint_names_;
    std::vector<double> positions_, velocities_, efforts_;
    std::vector<double> target_positions_;  // Zielpositionen für jedes Gelenk
    std::vector<std::pair<double, double>> joint_limits_;  // Gelenkgrenzen (lower, upper)
    size_t num_joints_;
    double step_size_;  // Schrittweite (in Radiant)
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<JointStatePublisherNode>());
    rclcpp::shutdown();
    return 0;
}
