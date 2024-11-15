#include "rclcpp/rclcpp.hpp"
#include "task3/srv/custom.hpp"
#include "std_msgs/msg/string.hpp"

#include <ctime>

using std::placeholders::_1;
using std::placeholders::_2;

class Node1 : public rclcpp::Node
{
public:
    Node1() : Node("node1")
    {
        server_ = this->create_service<task3::srv::Custom>(
            "service",
            std::bind(&Node1::serviceCallback, this, _1, _2)
        );
        subscriber_ = this->create_subscription<std_msgs::msg::String>("chatter", 10, std::bind(&Node1::topicCallback, this, _1));
    }
private:
    void serviceCallback(
        const task3::srv::Custom::Request::SharedPtr request,
        const task3::srv::Custom::Response::SharedPtr response
    )
    {
        switch(request->request){
            case 1:
                response->response = std::to_string(rand() % 101);
                break;
            case 2:
                now_ = time(0);
                response->response = ctime(&now_);
                break;
            case 3:
                response->response = "hello";
                break;
            case 4:
                response->response = message_;
                break;
            default:
                response->response = "unknown request";
                break;
        }
    } 

    void topicCallback(const std_msgs::msg::String::SharedPtr msg)
    {
        message_ = msg->data;
    }

    rclcpp::Service<task3::srv::Custom>::SharedPtr server_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr subscriber_;
    time_t now_;
    std::string message_;
};


int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node1 = std::make_shared<Node1>();
    srand(time(0));
    rclcpp::spin(node1);
    rclcpp::shutdown();
    return 0;
}