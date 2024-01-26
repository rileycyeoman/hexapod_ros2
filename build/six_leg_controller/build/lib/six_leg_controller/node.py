#!/usr/bin/env python3 
import rclpy
from rclpy.node import Node

class myNode(Node):
    def __init__(self):
        super().__init__("temp_node") #node name
        self.get_logger().info("logging info")
        





def main(args = None):
    rclpy.init(args = args) #intialize ros
    node = myNode() #ros2 communications 
    
    
    
    rclpy.shutdown() #destroy node



if __name__ == '__main__':
    main()