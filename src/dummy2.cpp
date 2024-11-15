#include "rclcpp/rclcpp.hpp"
#include "custom_service/srv/custom_service.hpp" // Include custom service header file

#include <memory>
#include <chrono>

using namespace std::chrono_literals;

class ClientNode : public rclcpp::Node
{
public:
    ClientNode() : Node("client_node")
    {
        client_ = this->create_client<custom_service::srv::CustomService>("custom_service");
    }

    void send_requests()
    {
        // Send requests from 0 to 5 with 1 second delay between each
        for (int i = 0; i <= 5; ++i) {
            // Wait until the service is available
            while (!client_->wait_for_service(1s)) {
                if (!rclcpp::ok()) {
                    RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for service. Exiting.");
                    return;
                }
                RCLCPP_INFO(this->get_logger(), "Waiting for service to appear...");
            }

            // Create a request message
            auto request = std::make_shared<custom_service::srv::CustomService::Request>();
            request->request = i;

            // Send the request asynchronously
            auto result = client_->async_send_request(request);

            // Wait for the response
            if (rclcpp::spin_until_future_complete(this->get_node_base_interface(), result) == rclcpp::FutureReturnCode::SUCCESS) {
                RCLCPP_INFO(this->get_logger(), "Received response: %s", result.get()->response.c_str());
            } else {
                RCLCPP_ERROR(this->get_logger(), "Failed to call service.");
            }

            // Wait 1 second before sending the next request
            rclcpp::sleep_for(1s);
        }
    }

private:
    rclcpp::Client<custom_service::srv::CustomService>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto client_node = std::make_shared<ClientNode>();
    
    // Send requests with 1 second delay
    client_node->send_requests();
    
    rclcpp::shutdown();
    return 0;
}
