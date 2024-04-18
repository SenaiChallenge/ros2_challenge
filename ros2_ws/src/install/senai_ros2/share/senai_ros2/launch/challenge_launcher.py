import os
from launch import LaunchDescription
from launch.actions import Shutdown
from launch_ros.actions import Node

def generate_launch_description():
    param_file = "senai_ros2/config/my_config_file.yaml"

    return LaunchDescription([
        Node(
            package="senai_ros2",
            executable="cropper",
            name="launch_image_cropper",
            output="screen",
            emulate_tty=True,
            parameters=[param_file],
            # Adding shutdown -> on_exit
            on_exit=Shutdown()
        ),
        Node(
            package="senai_ros2",
            executable="receiver",
            name="launch_image_receiver", 
            output="screen",
            emulate_tty=True,
            parameters=[param_file],
            # Adding shutdown -> on_exit
            on_exit=Shutdown()
        )
    ])
