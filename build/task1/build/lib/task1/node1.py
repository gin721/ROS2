#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from time import sleep
from std_msgs.msg import Int32

class Node1(Node):
    def __init__(self):
        super().__init__("node1")
        
        self.num = int(input("Enter a number : "))

        self.publisher = self.create_publisher(Int32, 'num', 10)
        self.subscriber = self.create_subscription(Int32, 'response', self.subscribe_callback, 10)
        self.timer = self.create_timer(1, self.publish_callback)

    def subscribe_callback(self, msg):
        self.get_logger().info(f"Number Recieved from topic response : {msg.data}")
        self.num += 1

    def publish_callback(self):
        msg = Int32()
        msg.data = self.num
        self.publisher.publish(msg)

def main(args = None):
    rclpy.init(args=args)
    node1 = Node1()
    rclpy.spin(node1)
    rclpy.shutdown()

if __name__ == "__main__":
    main()