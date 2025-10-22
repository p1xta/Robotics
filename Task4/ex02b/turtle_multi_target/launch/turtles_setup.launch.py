from launch import LaunchDescription
from launch.actions import TimerAction, ExecuteProcess

from launch_ros.actions import Node


def generate_launch_description():
    return LaunchDescription([
        Node(
            package='turtlesim',
            executable='turtlesim_node',
            name='sim'
        ),
        TimerAction(
            period=1.0,
            actions=[
                ExecuteProcess(
                    cmd=['ros2 service call', '/spawn', 'turtlesim/srv/Spawn',
                         '"{x: 2.0, y: 2.0, theta: 0.0, name: turtle2}"'],
                    shell=True
                )
            ]
        ),
        TimerAction(
            period=2.0,
            actions=[
                ExecuteProcess(
                    cmd=['ros2 service call', '/spawn', 'turtlesim/srv/Spawn',
                         '"{x: 8.0, y: 8.0, theta: 0.0, name: turtle3}"'],
                    shell=True
                )
            ]
        ),
        Node(
            package='turtle_multi_target',
            executable='turtle_tf2_broadcaster',
            name='broadcaster1',
            parameters=[
                {'turtlename': 'turtle1'}
            ]
        ),
        Node(
            package='turtle_multi_target',
            executable='turtle_tf2_broadcaster',
            name='broadcaster2',
            parameters=[
                {'turtlename': 'turtle2'}
            ]
        ),
        Node(
            package='turtle_multi_target',
            executable='turtle_tf2_broadcaster',
            name='broadcaster3',
            parameters=[
                {'turtlename': 'turtle3'}
            ]
        ),
    ])
