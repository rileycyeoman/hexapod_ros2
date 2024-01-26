/* ROS node*/
#include <rclcpp/rclcpp.hpp>
int main(int argc, char* argv[]){
	// initialize ros cpp middleware interface
	rclcpp::init(argc, argv); 
	//create instance of that node
	auto node = std::make_shared<rclcpp::Node>("vision_node");
	//use it to print hello world
	RCLCPP_INFO(node->get_logger(), "HeLLO World");
	// prevent closing the program
	rclcpp::spin(node);
}
