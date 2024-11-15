#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

#include <chrono>
#include <cstdlib>
#include <ctime>
#include <memory>

using namespace std::chrono_literals;

class ServiceNode : public rclcpp::Node
{
public:
    ServiceNode() : Node("service_node")
    {
        // Declare and advertise the service
        service_ = this->create_service<custom_service::srv::CustomService>(
            "custom_service", std::bind(&ServiceNode::handle_request, this, std::placeholders::_1, std::placeholders::_2));
        
        // Subscribe to the "/chatter" topic to keep the latest value
        chatter_subscriber_ = this->create_subscription<std_msgs::msg::String>(
            "/chatter", 10, std::bind(&ServiceNode::chatter_callback, this, std::placeholders::_1));
    }

private:
    void handle_request(const std::shared_ptr<custom_service::srv::CustomService::Request> request,
                        std::shared_ptr<custom_service::srv::CustomService::Response> response)
    {
        int request_number = request->request;
        RCLCPP_INFO(this->get_logger(), "Received request: %d", request_number);
        
        // Handle request based on the request number
        switch (request_number) {
            case 1: {
                // Return a random number between 0 and 100
                response->response = std::to_string(rand() % 101);
                break;
            }
            case 2: {
                // Return the current time
                auto now = std::chrono::system_clock::now();
                auto time = std::chrono::system_clock::to_time_t(now);
                response->response = std::ctime(&time);
                break;
            }
            case 3: {
                // Return a fixed string
                response->response = "Fixed string response";
                break;
            }
            case 4: {
                // Return the latest chatter value
                response->response = latest_chatter_;
                break;
            }
            default: {
                // Return unknown request for any other number
                response->response = "Unknown request";
                break;
            }
        }
    }

    void chatter_callback(const std_msgs::msg::String::SharedPtr msg)
    {
        latest_chatter_ = msg->data;
    }

    rclcpp::Service<custom_service::srv::CustomService>::SharedPtr service_;
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr chatter_subscriber_;
    std::string latest_chatter_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    srand(time(0));  // Seed the random number generator
    
    rclcpp::spin(std::make_shared<ServiceNode>());
    rclcpp::shutdown();
    return 0;
}
