#!/usr/bin/env python3
import os
import re

from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, TimerAction, OpaqueFunction
from launch.substitutions import LaunchConfiguration
from launch.launch_description_sources import PythonLaunchDescriptionSource
from ament_index_python.packages import get_package_share_directory

from launch_ros.actions import Node
from launch_ros.parameter_descriptions import ParameterValue

from xacro import process_file

# ——————————————————————————————————————————————
# Пакет із вашим world-файлом
WORLD_PKG = 'mg400_thesis'
WORLD_FILE = os.path.join(
    get_package_share_directory(WORLD_PKG),
    'worlds', 'mg400.world'
)

def clean_urdf(xml: str) -> str:
    """Видаляє XML-декларацію та коментарі з URDF-рядка."""
    xml = re.sub(r'<\?xml.*?\?>', '', xml)
    return re.sub(r'<!--.*?-->', '', xml, flags=re.DOTALL)

def generate_robot_state_publisher(context, *args, **kwargs):
    """Генерує Node для robot_state_publisher із чистим URDF."""
    pkg = get_package_share_directory('mg400_thesis')
    xacro_path = os.path.join(pkg, 'urdf', 'mg400_sim.xacro')

    # Генеруємо URDF із потрібними мапінгами
    doc = process_file(
        xacro_path,
        mappings={
            'prefix': '',           # без префікса
            'workspace_visible': 'true'
        }
    )
    raw_xml = doc.toxml()
    urdf = clean_urdf(raw_xml)

    return [
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[
                {'robot_description': ParameterValue(urdf, value_type=str)},
                {'use_sim_time': True},
            ],
        )
    ]

def generate_launch_description():
    # Пакет gazebo_ros
    gz_pkg = get_package_share_directory('gazebo_ros')

    # Аргумент для передачі шляху до world
    world_arg = DeclareLaunchArgument(
        'world',
        default_value=WORLD_FILE,
        description='Full path to the SDF world file'
    )

    # Запуск gzserver із ros_api та ros2_control плагінами
    gzserver = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gz_pkg, 'launch', 'gzserver.launch.py')
        ),
        launch_arguments={
            'world': LaunchConfiguration('world'),
            'verbose': 'true',
            'extra_gzserver_args': '-s libgazebo_ros_api_plugin.so -s libgazebo_ros2_control.so'
        }.items()
    )

    # Запуск GUI клієнта
    gzclient = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            os.path.join(gz_pkg, 'launch', 'gzclient.launch.py')
        )
    )

    # Node для публікації стану URDF після Xacro
    rsp = OpaqueFunction(function=generate_robot_state_publisher)

    # Спавн моделі в Gazebo
    spawn_entity = Node(
        package='gazebo_ros',
        executable='spawn_entity.py',
        name='spawn_mg400',
        output='screen',
        arguments=[
            '-topic', 'robot_description',
            '-entity', 'mg400',
            '-x', '0', '-y', '0', '-z', '0'
        ],
    )

    # Спавн контролерів після затримки, щоб дочекатися запуску Gazebo
    controllers = TimerAction(
        period=5.0,
        actions=[
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['joint_state_broadcaster', '--controller-manager', '/controller_manager'],
                output='screen'
            ),
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['arm_controller', '--controller-manager', '/controller_manager'],
                output='screen'
            ),
            Node(
                package='controller_manager',
                executable='spawner',
                arguments=['gripper_controller', '--controller-manager', '/controller_manager'],
                output='screen'
            ),
        ]
    )

    return LaunchDescription([
        world_arg,
        gzserver,
        gzclient,
        rsp,
        spawn_entity,
        controllers,
    ])

if __name__ == '__main__':
    generate_launch_description()