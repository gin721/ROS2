#include <rclcpp/rclcpp.hpp>
#include <chrono>

using namespace std::chrono_literals;

class PublisherNode: public rclcpp::Node
{
public:
    PublisherNode(): Node("publisher_node"), count_(0)
    {
        RCLCPP_INFO(this->get_logger(), "Hello Cpp Node using OOPS");

        timer_ = this->create_wall_timer(1s, std::bind(&PublisherNode::timer_callback, this));
    }

private:
    void timer_callback()
    {
        RCLCPP_INFO(this->get_logger(), "Hello %d", count_++);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    int count_;

};

int main(int argc, char **argv)
{
    //OOPs method to create a node using classes
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PublisherNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();

    //Minimal Code to create a node 
    // rclcpp::init(argc, argv);
    // auto node = std::make_shared<rclcpp::Node>("publisher_node");
    // RCLCPP_INFO(node->get_logger(), "Hello Cpp Node using minimal code");
    // rclcpp::spin(node);
    // rclcpp::shutdown();
    
    return 0;
}