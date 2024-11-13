#!/usr/bin/env python3
import rclpy
from rclpy.node import Node

class PublisherNode(Node):

    def __init__(self):
        super().__init__("publisher_python")
        self.count_ = 0
        self.get_logger().info("Hello from python by OOPS")
        self.create_timer(0.5, self.timer_callback)

    def timer_callback(self):
        self.count_ += 1
        self.get_logger().info("Hey " + str(self.count_))
    

def main(args = None):
    rclpy.init(args=args)
    node = PublisherNode()
    rclpy.spin(node)
    rclpy.shutdown()

    #minimal code for creating a node
    # rclpy.init(args=args)
    # node = Node("publisher_python")
    # node.get_logger().info("Hello from python")
    # rclpy.spin(node)
    # rclpy.shutdown()

if __name__ == "__main__":
    main()