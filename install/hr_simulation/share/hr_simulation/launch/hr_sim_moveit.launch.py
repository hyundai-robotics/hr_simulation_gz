from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, OpaqueFunction
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch.substitutions import LaunchConfiguration
from launch_ros.substitutions import FindPackageShare


def launch_setup(context, *args, **kwargs):
    # Initialize Arguments
    hr_type = LaunchConfiguration("hr_type")
    safety_limits = LaunchConfiguration("safety_limits")
    # General arguments
    runtime_config_package = LaunchConfiguration("runtime_config_package")
    controllers_file = LaunchConfiguration("controllers_file")
    description_package = LaunchConfiguration("description_package")
    description_file = LaunchConfiguration("description_file")
    moveit_config_package = LaunchConfiguration("moveit_config_package")
    moveit_config_file = LaunchConfiguration("moveit_config_file")
    prefix = LaunchConfiguration("prefix")
    use_fake_hardware = LaunchConfiguration("use_fake_hardware")
    
    hr_control_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare("hr_simulation"), "/launch", "/hr_sim_control.launch.py"]
        ),
        launch_arguments={
            "hr_type": hr_type,
            "safety_limits": safety_limits,
            "runtime_config_package": runtime_config_package,
            "controllers_file": controllers_file,
            "description_package": description_package,
            "description_file": description_file,
            "prefix": prefix,
            "launch_rviz": "false",
        }.items(),
    )

    hr_moveit_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource(
            [FindPackageShare("hr_moveit_config"), "/launch", "/hr_moveit.launch.py"]
        ),
        launch_arguments={
            "hr_type": hr_type,
            "safety_limits": safety_limits,
            "description_package": description_package,
            "description_file": description_file,
            "moveit_config_package": moveit_config_package,
            "moveit_config_file": moveit_config_file,
            "prefix": prefix,
            "use_sim_time": "true",
            "launch_rviz": "true",
            "use_fake_hardware": use_fake_hardware,
        }.items(),
    )

    nodes_to_launch = [
        hr_control_launch,
        hr_moveit_launch,
    ]

    return nodes_to_launch


def generate_launch_description():
    declared_arguments = []
    # HR specific arguments
    declared_arguments.append(
        DeclareLaunchArgument(
            "hr_type",
            description="Type/series of used HR robot.",
            choices=["ha006b", "hh7", "hh020", "hs220_02", "hx400", "yl012"],
            default_value="hs220_02",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "use_fake_hardware",
            default_value="false",
            description="Indicate whether robot is running with fake hardware mirroring command to its states.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "safety_limits",
            default_value="false",
            description="Enables the safety limits controller if true.",
        )
    )
    # General arguments
    declared_arguments.append(
        DeclareLaunchArgument(
            "runtime_config_package",
            default_value="hr_simulation",
            description='Package with the controller\'s configuration in "config" folder. \
        Usually the argument is not set, it enables use of a custom setup.',
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "controllers_file",
            default_value="hr_controllers.yaml",
            description="YAML file with the controllers configuration.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_package",
            default_value="hr_description",
            description="Description package with robot URDF/XACRO files. Usually the argument \
        is not set, it enables use of a custom description.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "description_file",
            default_value="hr.urdf.xacro",
            description="URDF/XACRO description file with the robot.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "moveit_config_package",
            default_value="hr_moveit_config",
            description="MoveIt config package with robot SRDF/XACRO files. Usually the argument \
        is not set, it enables use of a custom moveit config.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "moveit_config_file",
            default_value="hr.srdf.xacro",
            description="MoveIt SRDF/XACRO description file with the robot.",
        )
    )
    declared_arguments.append(
        DeclareLaunchArgument(
            "prefix",
            default_value='""',
            description="Prefix of the joint names, useful for \
        multi-robot setup. If changed than also joint names in the controllers' configuration \
        have to be updated.",
        )
    )

    return LaunchDescription(declared_arguments + [OpaqueFunction(function=launch_setup)])
