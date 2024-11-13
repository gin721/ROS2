#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Int32

class Node2(Node):
    def __init__(self):
        super().__init__("node2")

        self.subscriber = self.create_subscription(Int32, 'num', self.subscribe_callback, 10)
        self.publisher = self.create_publisher(Int32, 'response', 10)

    def subscribe_callback(self, msg):
        num = msg.data
        self.get_logger().info(f"Number Received from topic num: {num}")
        
        result = num * 2
        
        msg_send = Int32()
        msg_send.data = result
        
        self.publisher.publish(msg_send)
        
def main(args = None):
    rclpy.init(args=args)

    node2 = Node2()
    
    rclpy.spin(node2)
    rclpy.shutdown()

if __name__ == "__main__":
    main()