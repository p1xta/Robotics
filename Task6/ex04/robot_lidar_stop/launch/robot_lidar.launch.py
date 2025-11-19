from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import IncludeLaunchDescription
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory
import os


def generate_launch_description():
    pkg_path = get_package_share_directory('robot_lidar_stop')
    urdf_path = os.path.join(pkg_path, 'description', 'dog_lidar.urdf')
    rviz_config_path = os.path.join(pkg_path, 'rviz', 'lidar_config.rviz')

    robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{
            'use_sim_time': True,
            'robot_description': open(urdf_path).read(),
            'frame_prefix': 'robot_lidar_stop/',
            'ignore_fixed_joints': False  
        }]
    )
    
    gz_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(get_package_share_directory('ros_gz_sim'), 'launch', 'gz_sim.launch.py')
        ),
        launch_arguments={"gz_args": f"-r shapes.sdf"}.items(),
    )

    rviz_node = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        arguments=['-d', rviz_config_path],
    )

    spawn = Node(
        package='ros_gz_sim',
        executable='create',
        arguments=['-topic', 'robot_description', '-name', 'robot_lidar_stop'],
        output='screen',
    )

    bridge = Node(
        package="ros_gz_bridge",
        executable="parameter_bridge",
        parameters=[{
            "config_file": os.path.join(pkg_path, "config", "bridge_lidar.yaml")
        }],
        output="screen",
    )

    lidar_stop = Node(
        package='robot_lidar_stop',
        executable='lidar_stop',
        output='screen'
    )

    return LaunchDescription([
        gz_launch,
        rviz_node,
        robot_state_publisher,
        spawn,
        bridge,
        lidar_stop,
    ])
