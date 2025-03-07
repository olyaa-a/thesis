import os
from os import pathsep
from glob import glob
from ament_index_python.packages import get_package_share_directory, get_package_prefix
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, SetEnvironmentVariable, TimerAction
from launch.substitutions import Command, LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

def generate_launch_description():
    mg400_description_path = get_package_share_directory('mg400_description')
    gazebo_ros_dir = get_package_share_directory('gazebo_ros')

    model_arg = DeclareLaunchArgument(
        name='model',
        default_value=os.path.join(mg400_description_path, 'urdf', 'mg400.urdf.xacro'),
        description='Absolute path to robot xacro file'
    )

    world_arg = DeclareLaunchArgument(
        name='world',
        default_value=os.path.join(get_package_share_directory('mg400_thesis'), 'worlds', 'mg400.world'),
        description='Path to the world file'
    )

    model_path = os.path.join(mg400_description_path, "models")
    mg400_description_prefix = get_package_prefix('mg400_description')
    model_path += pathsep + os.path.join(mg400_description_prefix, "share")
    env_var = SetEnvironmentVariable('GAZEBO_MODEL_PATH', model_path)

    robot_description = ParameterValue(
        Command(['xacro ', LaunchConfiguration('model')]),
        value_type=str
    )

    robot_state_publisher_node = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        parameters=[{'robot_description': robot_description}],
        output='screen'
    )

    start_gazebo_server = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gazebo_ros_dir, 'launch', 'gzserver.launch.py')
        ),
        launch_arguments={'world': LaunchConfiguration('world')}.items()
    )

    start_gazebo_client = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gazebo_ros_dir, 'launch', 'gzclient.launch.py')
        )
    )

    spawn_robot = TimerAction(
        period=5.0,
        actions=[Node(
            package='gazebo_ros',
            executable='spawn_entity.py',
            arguments=['-entity', 'mg400', '-topic', 'robot_description'],
            output='screen'
        )]
    )

    return LaunchDescription([
        model_arg,
        world_arg,
        env_var,
        start_gazebo_server,
        start_gazebo_client,
        robot_state_publisher_node,
        spawn_robot
    ])