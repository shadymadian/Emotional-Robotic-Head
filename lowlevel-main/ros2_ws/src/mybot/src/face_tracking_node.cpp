#include <rclcpp/rclcpp.hpp>
#include <tf2_ros/transform_listener.h>
#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include <geometry_msgs/msg/point.hpp>
#include <geometry_msgs/msg/transform_stamped.hpp>
#include <mybot_interfaces/srv/set_coordinates.hpp> // Service zur Koordinatenannahme
#include <mybot_interfaces/srv/rotate.hpp>            // Service zur Winkelsteuerung
#include <cmath>
#include <tf2_ros/buffer.h>
#include <tf2/exceptions.h>  // Zum Umgang mit TF2-Fehlern
#include <array> 
#include <message/msg/emotion.hpp>

class FaceTrackingNode : public rclcpp::Node {
public:
    FaceTrackingNode() : Node("face_tracking_node") {
        // Service, um Zielkoordinaten zu empfangen
        coordinate_service_ = this->create_service<mybot_interfaces::srv::SetCoordinates>(
            "set_target_coordinates",
            std::bind(&FaceTrackingNode::handle_target_request, this, std::placeholders::_1, std::placeholders::_2));
            
        sub_command_ = this->create_subscription<message::msg::Emotion>(
            "emotion_topic", 10, std::bind(&FaceTrackingNode::handle_emotion_request, this, std::placeholders::_1));

        // TF2 Listener initialisieren
        tf_buffer_ = std::make_shared<tf2_ros::Buffer>(this->get_clock());
        tf_listener_ = std::make_shared<tf2_ros::TransformListener>(*tf_buffer_);

        try {
            transform_stamped = tf_buffer_->lookupTransform(
                "head", "cam", rclcpp::Time(0));
        } catch (const tf2::TransformException &ex) {
            RCLCPP_WARN(this->get_logger(), "TF2 Exception: %s", ex.what());
        }


        received_request_1 = false;
        received_request_2 = false;
        eye_open = false;
        eye_open_time = 0;
        phase = 0;
        current_e = 5;
        double angle_right_lid = -0.34;
        double angle_left_lid = 0.34;

        init_requests(0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05, 1.57, 0.0);
        init_requests(1, 0.785, 0.0, 0.0, 0.0, 0.0, 0.785, 0.0, 0.4, 0.14, 0.0, 0.05, 1.57, 0.0);
        init_requests(2, 0.3, -0.3, 0.0, 0.0, 0.0, 0.3, 0.3, -0.4, 0.14, 0.0, 0.05, 1.57, -0.26);
        init_requests(3, 0.3, 0.3, 0.0, 0.0, 0.0, 0.3, -0.3, 0.0, 0.0, 0.0, 0.52, 1.57, -0.26);
        init_requests(4, 0.3, 0.3, 0.0, 0.0, 0.0, 0.3, -0.3, 0.0, 0.0, 0.0, 0.52, 1.57, -0.26);
        init_requests(5, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
        init_requests(6, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05, -1.57, 0.0);
        init_requests(7, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.05, -1.57, 0.0);
        init_requests(8, -0.785, 0.0, 0.4, -0.14, 0.0, -0.785, 0.0, 0.0, 0.0, 0.0, 0.05, -1.57, 0.0);
        init_requests(9, -0.3, 0.3, 0.4, -0.14, 0.0, -0.3, -0.3, 0.0, 0.0, 0.0, 0.08, -1.57, 0.26);
        init_requests(10, -0.3, -0.3, 0.0, 0.0, 0.0, -0.3, 0.3, 0.0, 0.0, 0.0, -0.52, -1.57, -0.26);
        init_requests(11, -0.3, -0.3, 0.0, 0.0, 0.0, -0.3, 0.3, 0.0, 0.0, 0.0, -0.52, -1.57, -0.26);
        init_requests(12, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);

        set_emotion_state(0, 0.0, 0.0, -0.34, 0.785, 0.0, 0.785, 0.0, 0.0, 0.34, -0.785, 0.0, -0.785);
        set_emotion_state(1, 0.0, 0.0, -0.34, 0.4, 0.17, -0.4, 0.0, 0.0, 0.34, -0.4, -0.17, 0.4);
        set_emotion_state(2, 0.0, 0.0, -0.34, -0.785, 0.0, 0.785, 0.0, 0.0, 0.34, 0.785, 0.0, -0.785);
        set_emotion_state(3, 0.0, 0.0, -0.34, 0.785, 0.35, -0.785, 0.0, 0.0, 0.34, -0.785, -0.35, 0.785);
        set_emotion_state(4, 0.0, 0.0, -0.34, 0.0, 0.0, 0.0, 0.0, 0.0, 0.34, 0.0, 0.0, 0.0);
        set_emotion_state(5, 0.0, 0.0, -0.34, 0.0, 0.0, 0.0, 0.0, 0.0, 0.34, 0.0, 0.0, 0.0);

        // Client für den JointState Service
        joint_state_client_ = this->create_client<mybot_interfaces::srv::Rotate>("set_joint_angles");
        

        RCLCPP_INFO(this->get_logger(), "FaceTrackingNode gestartet.");


        ten_secound_timer_ = this->create_wall_timer(
            std::chrono::seconds(10),
            std::bind(&FaceTrackingNode::ten_secound, this));
        
        standard_movement_timer_ = this->create_wall_timer(
            std::chrono::seconds(1),
            std::bind(&FaceTrackingNode::execute_standard_movement, this));

        eyelid_timer_ = this->create_wall_timer(
            std::chrono::milliseconds(150),
            std::bind(&FaceTrackingNode::eyelid_movement, this));
    }

private:
    void handle_emotion_request(
        const std::shared_ptr<message::msg::Emotion> request
    ) {
        // Erstelle ein SetCoordinates-Request, das die Zielkoordinaten übergeben wird
        auto target_request = std::make_shared<mybot_interfaces::srv::SetCoordinates::Request>();

        // Beispielhafte Koordinaten, die von der Emotion abhängen
        geometry_msgs::msg::Point coordinates;

        coordinates.x = request->x;
        coordinates.y = request->y;
        coordinates.z = request->z;
        
        // Beispiel: Koordinaten basierend auf Emotion
        if (request->emotion == "angry") {
            current_e = 0;
        } else if (request->emotion == "happy") {
            current_e = 1;
        } else if (request->emotion == "sad") {
            current_e = 2;
        } else if (request->emotion == "surprised") {
            current_e = 3;
        } else if (request->emotion == "fear"){
            current_e = 4;
        } else {
            current_e = 5;
        }
        // Setze die Koordinaten in das Request
        target_request->coordinates = coordinates;

        // Erstelle eine leere Response (optional, je nachdem, ob sie benötigt wird)
        auto response = std::make_shared<mybot_interfaces::srv::SetCoordinates::Response>();

        // Rufe handle_target_request mit den neuen Koordinaten auf
        handle_target_request(target_request, response);

        // Optionale Ausgabe, je nach Erfolg oder Misserfolg
        if (response->success) {
            RCLCPP_INFO(this->get_logger(), "Koordinaten erfolgreich gesetzt.");
        } else {
            RCLCPP_WARN(this->get_logger(), "Fehler beim Setzen der Koordinaten.");
        }
    }

    void handle_target_request(
        const std::shared_ptr<mybot_interfaces::srv::SetCoordinates::Request> request,
        std::shared_ptr<mybot_interfaces::srv::SetCoordinates::Response> response
    ) {
        received_request_1 = true;
        received_request_2 = true;
        phase = 0;
        geometry_msgs::msg::Point target_point;
        target_point.x = request->coordinates.x;
        target_point.y = request->coordinates.y;
        target_point.z = request->coordinates.z;

        try {
            // Zielpunkt in den Kamera-Koordinatenrahmen transformieren
            geometry_msgs::msg::Point target_in_camera_frame;
            tf2::doTransform(target_point, target_in_camera_frame, transform_stamped);

            // Berechne Blickwinkel (Yaw und Pitch)
            double yaw, pitch;
            calculate_yaw_pitch(target_in_camera_frame, yaw, pitch);

            // Sende die berechneten Gelenkwinkel an den Service
            send_joint_angles(yaw, pitch, current_e);
        } catch (const tf2::TransformException &ex) {
            RCLCPP_WARN(this->get_logger(), "TF2 Exception: %s", ex.what());
            response->success = false;
        }
    }


    void calculate_yaw_pitch(const geometry_msgs::msg::Point &target, double &yaw, double &pitch) {
        // Yaw: Rotation um die Z-Achse (links/rechts)
        yaw = std::atan2(target.y, target.x);

        // Pitch: Rotation um die Y-Achse (hoch/runter)
        pitch = std::atan2(target.z, std::sqrt(target.x * target.x + target.y * target.y));
    }

    void send_joint_angles(double yaw, double pitch, int emotion) {
        // Warte, bis der JointState Service verfügbar ist
        while (!joint_state_client_->wait_for_service(std::chrono::seconds(1))) {
            RCLCPP_WARN(this->get_logger(), "Warten auf den JointState Service...");
        }

        // Erstelle Anfrage
        auto request = emotions[emotion];
        request->angle_motor_3_1 = 0.0;  // Kein Roll-Winkel benötigt
        request->angle_motor_3_1_set = true;
        request->angle_motor_3_2 = yaw;  // Setze Yaw-Winkel für joint_3_2
        request->angle_motor_3_2_set = true;
        request->angle_motor_3_3 = pitch;  // Setze Pitch-Winkel für joint_3_3
        request->angle_motor_3_3_set = true;
        // Sende die Anfrage und warte auf Antwort
        joint_state_client_->async_send_request(request);
    }

    void ten_secound() {
        // Wenn kürzlich eine Anfrage empfangen wurde, wird die Standardbewegung übersprungen
        if (received_request_1) {
            if(received_request_2){
                received_request_2 = false;
                return;
            } else {
                received_request_1 = false;
                return;
            }
        }
    }

    void execute_standard_movement() {
        // Wenn kürzlich eine Anfrage empfangen wurde, wird die Standardbewegung übersprungen
        if (received_request_1) {
            return;
        }
        joint_state_client_->async_send_request(requests[phase]);

        // Nächste Phase auswählen
        phase = (phase + 1) % requests.size();
    }

    void eyelid_movement() {
        auto request = std::make_shared<mybot_interfaces::srv::Rotate::Request>();
        if(eye_open){
            if(eye_open_time == 20){
                request->angle_motor_1_3 = 0.785;
                request->angle_motor_1_3_set = true;
                request->angle_motor_2_3 = -0.785;
                request->angle_motor_2_3_set = true;
                eye_open = false;
                joint_state_client_->async_send_request(request);
            }
            eye_open_time = (eye_open_time + 1) % 21;
        }else{
            request->angle_motor_1_3 = angle_right_lid;
            request->angle_motor_1_3_set = true;
            request->angle_motor_2_3 = angle_left_lid;
            request->angle_motor_2_3_set = true;
            eye_open = true;
            joint_state_client_->async_send_request(request);
        }
    }

    void set_emotion_state(int a,double a1_1,double a1_2,double a1_3,double a1_4, double a1_5,double a1_6,double a2_1,double a2_2,double a2_3,double a2_4, double a2_5,double a2_6){
        auto request = std::make_shared<mybot_interfaces::srv::Rotate::Request>();
        request->angle_motor_1_1 = a1_1;
        request->angle_motor_1_1_set = true;
        request->angle_motor_1_2 = a1_2;
        request->angle_motor_1_2_set = true;
        request->angle_motor_1_3 = a1_3;
        request->angle_motor_1_3_set = true;
        angle_right_lid = a1_3;
        request->angle_motor_1_4 = a1_4;
        request->angle_motor_1_4_set = true;
        request->angle_motor_1_5 = a1_5;
        request->angle_motor_1_5_set = true;
        request->angle_motor_1_6 = a1_6;
        request->angle_motor_1_6_set = true;
        request->angle_motor_2_1 = a2_1;
        request->angle_motor_2_1_set = true;
        request->angle_motor_2_2 = a2_2;
        request->angle_motor_2_2_set = true;
        request->angle_motor_2_3 = a2_3;
        request->angle_motor_2_3_set = true;
        angle_left_lid = a2_3;
        request->angle_motor_2_4 = a2_4;
        request->angle_motor_2_4_set = true;
        request->angle_motor_2_5 = a2_5;
        request->angle_motor_2_5_set = true;
        request->angle_motor_2_6 = a2_6;
        request->angle_motor_2_6_set = true;
        emotions[a] = request;
    }
    
    void init_requests(int a,double a1_1,double a1_2,double a1_4, double a1_5,double a1_6,double a2_1,double a2_2,double a2_4, double a2_5,double a2_6, double a3_1,double a3_2,double a3_3){
        auto request = std::make_shared<mybot_interfaces::srv::Rotate::Request>();
        request->angle_motor_1_1 = a1_1;
        request->angle_motor_1_1_set = true;
        request->angle_motor_1_2 = a1_2;
        request->angle_motor_1_2_set = true;
        request->angle_motor_1_4 = a1_4;
        request->angle_motor_1_4_set = true;
        request->angle_motor_1_5 = a1_5;
        request->angle_motor_1_5_set = true;
        request->angle_motor_1_6 = a1_6;
        request->angle_motor_1_6_set = true;
        request->angle_motor_2_1 = a2_1;
        request->angle_motor_2_1_set = true;
        request->angle_motor_2_2 = a2_2;
        request->angle_motor_2_2_set = true;
        request->angle_motor_2_4 = a2_4;
        request->angle_motor_2_4_set = true;
        request->angle_motor_2_5 = a2_5;
        request->angle_motor_2_5_set = true;
        request->angle_motor_2_6 = a2_6;
        request->angle_motor_2_6_set = true;
        request->angle_motor_3_1 = a3_1;
        request->angle_motor_3_1_set = true;
        request->angle_motor_3_2 = a3_2;
        request->angle_motor_3_2_set = true;
        request->angle_motor_3_3 = a3_3;
        request->angle_motor_3_3_set = true;
        requests[a] = request;
    }

    rclcpp::Service<mybot_interfaces::srv::SetCoordinates>::SharedPtr coordinate_service_;
    rclcpp::Client<mybot_interfaces::srv::Rotate>::SharedPtr joint_state_client_;
    rclcpp::Subscription<message::msg::Emotion>::SharedPtr sub_command_;
    std::shared_ptr<tf2_ros::Buffer> tf_buffer_;
    std::shared_ptr<tf2_ros::TransformListener> tf_listener_;
    rclcpp::TimerBase::SharedPtr standard_movement_timer_;
    rclcpp::TimerBase::SharedPtr ten_secound_timer_;
    rclcpp::TimerBase::SharedPtr eyelid_timer_;
    bool received_request_1;
    bool received_request_2;
    int phase;
    bool wait;
    std::array<std::shared_ptr<mybot_interfaces::srv::Rotate::Request>, 13> requests;
    std::array<std::shared_ptr<mybot_interfaces::srv::Rotate::Request>, 6> emotions;
    geometry_msgs::msg::TransformStamped transform_stamped;
    bool eye_open;
    int eye_open_time;
    int current_e;
    double angle_right_lid;
    double angle_left_lid;
};

int main(int argc, char **argv) {
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<FaceTrackingNode>());
    rclcpp::shutdown();
    return 0;
}
