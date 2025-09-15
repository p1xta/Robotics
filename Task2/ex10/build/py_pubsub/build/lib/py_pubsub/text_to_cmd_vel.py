import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from geometry_msgs.msg import Twist


class TextToCmdVel(Node):
    def __init__(self):
        super().__init__('text_to_cmd_vel')

        self.subscription = self.create_subscription(
            String,
            'cmd_text',
            self.listener_callback,
            10
        )
        self.subscription

        self.publisher = self.create_publisher(Twist, '/turtle1/cmd_vel', 10)

        self.get_logger().info("text_to_cmd_vel node started, listening on 'cmd_text'")

    def listener_callback(self, msg: String):
        text = msg.data.strip().lower()
        twist = Twist()

        if text == 'move_forward':
            twist.linear.x = 1.0
        elif text == 'move_backward':
            twist.linear.x = -1.0
        elif text == 'turn_left':
            twist.angular.z = 1.5
        elif text == 'turn_right':
            twist.angular.z = -1.5
        else:
            self.get_logger().warn(f"Unknown command: {text}")
            return

        self.publisher.publish(twist)
        self.get_logger().info(f"Published Twist: linear={twist.linear.x}, angular={twist.angular.z}")


def main(args=None):
    rclpy.init(args=args)
    node = TextToCmdVel()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()