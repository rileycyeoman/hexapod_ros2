#include "rclcpp/rclcpp.hpp"
#include "example_interfaces/srv/add_two_ints.hpp"

#include <memory>

void add(const std::shared_ptr<example_interfaces::srv::AddTwoInts::Request> request,
          std::shared_ptr<example_interfaces::srv::AddTwoInts::Response>      response)
{
  response->sum = request->a + request->b;
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Incoming request\na: %ld" " b: %ld",
                request->a, request->b);
  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "sending back response: [%ld]", (long int)response->sum);
}

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv); //initialize rclcpp

  std::shared_ptr<rclcpp::Node> node = rclcpp::Node::make_shared("add_two_ints_server"); //add_two_ints_server is the name we give

  rclcpp::Service<example_interfaces::srv::AddTwoInts>::SharedPtr service =
    node->create_service<example_interfaces::srv::AddTwoInts>("add_two_ints", &add); //this is the making of the service

  RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "Ready to add two ints."); //let us know when it's ready

  rclcpp::spin(node); //activates the node and constantly checks for updates
  rclcpp::shutdown();
}