import rclpy
from rclpy.node import Node
from sensor_msgs.msg import LaserScan
from geometry_msgs.msg import Twist

class LidarStop(Node):
    def __init__(self):
        super().__init__('lidar_stop')

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)

        self.scan_sub = self.create_subscription(
            LaserScan,
            '/scan',
            self.scan_callback,
            10)

        self.timer = self.create_timer(0.1, self.drive_forward)
        self.min_dist = 10.0
        self.stop_distance = 0.5
        self.is_blocked = False

    def scan_callback(self, scan):
        self.min_dist = min(scan.ranges)
        print(self.min_dist)

        if self.min_dist < self.stop_distance:
            self.is_blocked = True
        else:
            self.is_blocked = False

    def drive_forward(self):
        msg = Twist()

        if self.is_blocked:
            msg.linear.x = 0.0
        else:
            msg.linear.x = 0.2

        msg.angular.z = 0.0
        self.cmd_pub.publish(msg)


def main(args=None):
    rclpy.init(args=args)
    node = LidarStop()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
