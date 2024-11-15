#include "rclcpp/rclcpp.hpp"
#include "task3/srv/custom.hpp"

#include <chrono>
#include <thread>

class Node2 : public rclcpp::Node
{
public :
    Node2() : Node("node2")
    {
        client_ = this->create_client<task3::srv::Custom>("service");
    }

    void callService(int reponse_number)
    {
        auto request = std::make_shared<task3::srv::Custom::Request>();
        request->request = reponse_number;

        while(!client_->wait_for_service(std::chrono::seconds(1)))
        {
            if (!rclcpp::ok()) {
                RCLCPP_ERROR(this->get_logger(), "Interrupted while waiting for service.");
                return;
            }
            RCLCPP_INFO(this->get_logger(), "Waiting for service.");
        }

        auto future = client_->async_send_request(request);

        if(rclcpp::spin_until_future_complete(this->get_node_base_interface(), future) == rclcpp::FutureReturnCode::SUCCESS)
        {
            std::string str = future.get()->response;
            RCLCPP_INFO(this->get_logger(), "%s\n", str.c_str());
        }
        else
        {
            RCLCPP_INFO(this->get_logger(), "Something went wrong");
        }
    }

private :
    rclcpp::Client<task3::srv::Custom>::SharedPtr client_;
};

int main(int argc, char **argv)
{
    rclcpp::init(argc, argv);
    auto node2 = std::make_shared<Node2>();

    for(int i = 0; i < 6; i++)
    {
        node2->callService(i);
        rclcpp::sleep_for(std::chrono::seconds(1));
    }    

    rclcpp::shutdown();
    return 0;
}