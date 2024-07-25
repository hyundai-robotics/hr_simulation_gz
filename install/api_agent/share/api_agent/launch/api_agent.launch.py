from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration


def generate_launch_description():
    return LaunchDescription(
        [
            # Launch arguments
            DeclareLaunchArgument(
                "openapi_ip",
                default_value="192.168.1.150",
                description="Remote host for OPENAPI communication",
            ),
            DeclareLaunchArgument(
                "openapi_port",
                default_value="8888",
                description="Remote port for OPENAPI communication",
            ),
            DeclareLaunchArgument(
                "udp_remote_host",
                default_value="192.168.1.150",
                description="Remote host for UDP communication",
            ),
            DeclareLaunchArgument(
                "udp_remote_port",
                default_value="7000",
                description="Remote port for UDP communication",
            ),
            DeclareLaunchArgument(
                "udp_local_port",
                default_value="7000",
                description="Local port for UDP communication",
            ),
            DeclareLaunchArgument(
                "motor_pos_on_off",
                default_value="false",
                description="Minimum allowed interval for motor position updates",
            ),
            DeclareLaunchArgument(
                "motor_pos_interval_ms",
                default_value="250",
                description="Minimum allowed interval for motor position updates",
            ),

            DeclareLaunchArgument(
                "fake_hardware",
                default_value="false",
                description="Indicate whether robot is running with fake hardware mirroring command to its states.",
            ),
            # ApiAgent node
            Node(
                package="api_agent",  # 패키지 이름을 실제 패키지 이름으로 변경하세요
                executable="api_agent",  # 실행 파일 이름을 실제 노드 실행 파일 이름으로 변경하세요
                name="api_agent",
                output="screen",
                emulate_tty=True,
                parameters=[
                    {"udp_remote_host": LaunchConfiguration("udp_remote_host")},
                    {"udp_remote_port": LaunchConfiguration("udp_remote_port")},
                    {"udp_local_port": LaunchConfiguration("udp_local_port")},
                    {"motor_pos_on_off": LaunchConfiguration("motor_pos_on_off")},
                    {"motor_pos_interval_ms": LaunchConfiguration("motor_pos_interval_ms")},
                    {"fake_hardware": LaunchConfiguration("fake_hardware")},
                ],
            ),
        ]
    )
