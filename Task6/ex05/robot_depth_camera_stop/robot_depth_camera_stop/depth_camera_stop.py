import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image
from geometry_msgs.msg import Twist
import numpy as np


class DepthStop(Node):
    def __init__(self):
        super().__init__('depth_stop_node')

        self.cmd_pub = self.create_publisher(Twist, '/cmd_vel', 10)
        self.depth_sub = self.create_subscription(
            Image,
            '/depth/image_raw',
            self.depth_callback,
            10
        )

        self.timer = self.create_timer(0.1, self.drive_forward)

        self.min_dist = 10.0
        self.stop_distance = 0.5
        self.is_blocked = False

    def depth_callback(self, msg: Image):
        depth = np.frombuffer(msg.data, dtype=np.float32)
        depth = depth.reshape((msg.height, msg.width))

        center_col = slice(msg.width//2 - 40, msg.width//2 + 40)
        center_region = depth[:, center_col]

        fov_center = center_region[np.isfinite(center_region)]
        fov_center = fov_center[fov_center > 0.01]

        if fov_center.size == 0:
            self.min_dist = 10.0
        else:
            self.min_dist = float(np.min(fov_center))

        if self.min_dist < self.stop_distance:
            self.is_blocked = True
        else:
            self.is_blocked = False

    def drive_forward(self):
        cmd = Twist()
        if self.is_blocked:
            cmd.linear.x = 0.0
        else:
            cmd.linear.x = 0.2

        self.cmd_pub.publish(cmd)


def main(args=None):
    rclpy.init(args=args)
    node = DepthStop()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
