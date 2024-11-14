#include "rclcpp/rclcpp.hpp"
#include "geometry_msgs/msg/twist.hpp"
#include "sensor_msgs/msg/joy.hpp"

class Node1:public rclcpp::Node
{
public:
    Node1() : Node("node1"){
        publisher_ = this->create_publisher<geometry_msgs::msg::Twist>("/turtle1/cmd_vel", 10);
        subscription_ = this->create_subscription<sensor_msgs::msg::Joy>("/joy", 10, std::bind(&Node1::callback, this, std::placeholders::_1));
    }
private:
    void callback(const sensor_msgs::msg::Joy::SharedPtr msg) const{

        geometry_msgs::msg::Twist twist;

        twist.linear.x = msg->axes[1];
        twist.linear.y = 0;
        twist.linear.z = 0;

        twist.angular.x = 0;
        twist.angular.y = 0;
        twist.angular.z = msg->axes[2];

        RCLCPP_INFO(this->get_logger(), "Sended data: linear: [%f, %f, %f], angular: [%f, %f, %f]", 
        twist.linear.x, twist.linear.y, twist.linear.z, 
        twist.angular.x, twist.angular.y, twist.angular.z);

        publisher_->publish(twist);

    }
    rclcpp::Subscription<sensor_msgs::msg::Joy>::SharedPtr subscription_;
    rclcpp::Publisher<geometry_msgs::msg::Twist>::SharedPtr publisher_;
};

int main(int argc, char * argv[]){
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<Node1>());
    rclcpp::shutdown();
    return 0;
}