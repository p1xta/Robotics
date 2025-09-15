from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle1'
        ),

        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle2'
        ),

        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='turtle3'
        ),

        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic12',
            remappings=[
                ('/input/pose', '/turtlesim1/turtle1/pose'),
                ('/output/cmd_vel', '/turtlesim2/turtle1s/cmd_vel'),
            ]
        ),

        Node(
            package='turtlesim',
            executable='mimic',
            name='mimic23',
            remappings=[
                ('/input/pose', '/turtle2/pose'),
                ('/output/cmd_vel', '/turtle3/cmd_vel'),
            ]
        ),
    ])
