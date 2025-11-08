import math
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import Twist

class FigureEightMovement(Node):
    def __init__(self):
        super().__init__('dog_movement')
        self.publisher_ = self.create_publisher(Twist, '/cmd_vel', 10)
        self.timer_period = 0.1
        self.timer = self.create_timer(self.timer_period, self.move_figure_eight)
        self.time = 0.0
        
        self.linear_speed = 0.5
        self.angular_scale = 1.7
        self.period = 20.0

        self.get_logger().info('Drift node started!')

    def move_figure_eight(self):
        msg = Twist()
        self.time += self.timer_period
        
        t = self.time % self.period
        phase = 2.0 * math.pi * t / self.period
        
        msg.angular.z = self.angular_scale * math.sin(2.0 * phase)
        
        msg.linear.x = self.linear_speed

        self.publisher_.publish(msg)

        if int(self.time * 10) % 50 == 0:
            self.get_logger().info(
                f'Drift: linear.x={msg.linear.x:.2f}, angular.z={msg.angular.z:.2f}, phase={phase:.2f}'
            )


def main(args=None):
    rclpy.init(args=args)
    node = FigureEightMovement()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()