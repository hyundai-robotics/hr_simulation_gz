HD Hyundai Robotics Robots ROS2 GZ Simulation
==========================================
## Table of Contents
- [Introduction](#introduction)
- [Packages](#packages)
- [Installation](#installation)
- [Usage](#usage)
- [Features](#Features)
- [Services](#services)
- [Contributing](#contributing)
- [License](#license)
- [Contact](#contact)

## Introduction
This project provides a ROS2 Gazebo simulation environment for HD Hyundai Robotics robots.

## Packages

| Package Name     | Description |
|------------------|-------------|
| hr_description   | Package containing description files for HR robots, including various configuration files and visual/physical parameter files for the models. |
| hr_moveit_config | Folder containing HR MoveIt configuration files, including setup files for integration with MoveIt. |
| hr_simulation    | Main folder of the HR Simulation package, containing simulation control and related configuration files. |
| api_agent        | Package for communication with the HR Hi6 controller and usage of ROS2 Services. |
| api_msgs         | Service Message Package for api_agent. |

# Installation

## Setup ROS2 Install

This guide provides instructions for downloading and executing the ros2-humble-desktop-main.sh script to install ROS2 Humble Desktop.

### Installation Steps

1. Download the ros2-humble-desktop-main.sh script from the package repository.
2. Open a terminal and navigate to the directory where you downloaded the script.
3. Make the script executable by running the following command:
    ```
    bash ros2-humble-desktop-main.sh
    ```

    > **NOTE:** A ~/ros2_ws/src folder will be created, and if the user desires, they can create and use a different folder without any issues.
4. Follow any on-screen prompts during the installation process.
5. Once the installation is complete, restart your system or source the ROS2 setup file
    ```
    source /opt/ros/humble/setup.bash
    ```
## Configure and Build Workspace
    
### git clone package

  ```
  cd  ~/ros2_ws/src
  git clone https://github.com/hyundai-robotics/hr_simulation_gz.git
  ```

### dependency package install:

1. Download the required repositories and install package dependencies:
    ```
    cd  ~/ros2_ws/
    rosdep update && rosdep install --ignore-src --from-paths src -y
    ```

2. Run the project-specific dependency installation script:
    ```
    cd ~/ros2_ws/src/hr_simulation_gz
    bash ros2-install-deps.sh
    ```

### Configure and Build Workspace:
  
  ```
  cd ~/ros2_ws
  colcon build --symlink-install
  ```

## Running Executable

First, source your workspace
```
source ~/ros2_ws/install/setup.bash
ros2 launch hr_simulation hr_sim_control.launch.py
```

Example using MoveIt with simulated robot:
```
ros2 launch hr_simulation hr_sim_moveit.launch.py
```

Example of connecting to the robot controller:
```
ros2 launch api_agent api_agent.launch.py
```

# Usage

## Supported Robots

The following robots can be simulated using the `hr_sim_moveit.launch.py` file in the `hr_simulation` package:

```
"ha006b", "hh7", "hh020", "hs220_02", "hx400", "yl012"
```

> **NOTE:** You can change the simulated robot by modifying the `hr_type` parameter in `hr_sim_moveit_launch.py`. Currently, only `hs220_02` is enabled for simulation.

## Simulation and Control

After launching the HD Hyundai Robotics robot simulation, follow these steps to control the robot:

1. Switch the controller's TP to playback mode.
2. Copy the `.job` code provided in the package to the appropriate location.
3. Load the copied `.job` file on the TP.

Then, execute the following steps:

1. Turn the motor ON:
```
ros2 service call /api_agent/robot/post/motor_control std_srvs/srv/SetBool "{data: true}"
```

2. Start the program:
```
ros2 service call /api_agent/robot/post/robot_control std_srvs/srv/SetBool "{data: true}"
```

3. Set initialization pose:
This service adjusts the Gazebo position based on the actual robot's pose values:
```
ros2 service call /api_agent/inital_pose std_srvs/srv/Trigger
```

# Features

- Robot status querying and control
- I/O and PLC control
- File and log management
- Task and program control
- System time management

# Services

This document provides a comprehensive list of ROS2 services available in the HD Hyundai Robotics Robots ROS2 GZ Simulation project. The services are categorized by their functionality and include descriptions and usage examples.

## Table of Contents
- [Version Services](#version-services)
- [Project Services](#project-services)
- [Control Services](#control-services)
- [Robot Services](#robot-services)
- [I/O PLC Services](#io-plc-services)
- [Log Manager Services](#log-manager-services)
- [File Manager Services](#file-manager-services)
- [Task Services](#task-services)
- [Clock Services](#clock-services)

## Version Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/get/api_ver` | `std_srvs::srv::Trigger` | Get Open API schema version | `ros2 service call /api_agent/get/api_ver std_srvs/srv/Trigger` |
| `/api_agent/get/sysver` | `std_srvs::srv::Trigger` | Get robot controller system software version | `ros2 service call /api_agent/get/sysver std_srvs/srv/Trigger` |

## Project Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/project/get/rgen` | `std_srvs::srv::Trigger` | Read general information set in the controller | `ros2 service call /api_agent/project/get/rgen std_srvs/srv/Trigger` |
| `/api_agent/project/get/jobs_info` | `std_srvs::srv::Trigger` | Get information related to job programs | `ros2 service call /api_agent/project/get/jobs_info std_srvs/srv/Trigger` |
| `/api_agent/project/post/reload_updated_jobs` | `std_srvs::srv::Trigger` | Request to update job files | `ros2 service call /api_agent/project/post/reload_updated_jobs std_srvs/srv/Trigger` |
| `/api_agent/project/post/delete_job` | `api_msgs::srv::FilePath` | Request to delete a job file | `ros2 service call /api_agent/project/post/delete_job api_msgs/srv/FilePath "{path: '0001.job'}"` |

## Control Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/control/get/op_cnd` | `std_srvs::srv::Trigger` | Get condition setting values | `ros2 service call /api_agent/control/get/op_cnd std_srvs/srv/Trigger` |
| `/api_agent/control/get/ios_di` | `api_msgs::srv::IoRequest` | Get user IO values (Digital Input) | `ros2 service call /api_agent/control/get/ios_di api_msgs/srv/IoRequest "{type: 'di', blk_no: 1, sig_no: 1}"` |
| `/api_agent/control/get/ios_do` | `api_msgs::srv::IoRequest` | Get user IO values (Digital Output) | `ros2 service call /api_agent/control/get/ios_do api_msgs/srv/IoRequest "{type: 'do', blk_no: 1, sig_no: 1}"` |
| `/api_agent/control/get/ios_si` | `api_msgs::srv::IoRequest` | Get system IO values (System Input) | `ros2 service call /api_agent/control/get/ios_si api_msgs/srv/IoRequest "{type: 'si', blk_no: 1, sig_no: 1}"` |
| `/api_agent/control/get/ios_so` | `api_msgs::srv::IoRequest` | Get system IO values (System Output) | `ros2 service call /api_agent/control/get/ios_so api_msgs/srv/IoRequest "{type: 'so', blk_no: 1, sig_no: 1}"` |
| `/api_agent/control/get/ucs_nos` | `std_srvs::srv::Trigger` | Get list of currently used user coordinate systems | `ros2 service call /api_agent/control/get/ucs_nos std_srvs/srv/Trigger` |
| `/api_agent/control/post/ios_do` | `api_msgs::srv::IoRequest` | Change digital output | `ros2 service call /api_agent/control/post/ios_do api_msgs/srv/IoRequest "{type: 'do', blk_no: 1, sig_no: 1, val: 1}"` |
| `/api_agent/control/put/op_cnd` | `api_msgs::srv::OpCnd` | Change robot's condition setting values | `ros2 service call /api_agent/control/put/op_cnd api_msgs/srv/OpCnd "{playback_mode: 1, step_goback_max_spd: 130, ucrd_num: 2}"` |

## Robot Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/robot/get/motor_state` | `std_srvs::srv::Trigger` | Get motor on state | `ros2 service call /api_agent/robot/get/motor_state std_srvs/srv/Trigger` |
| `/api_agent/robot/get/po_cur` | `api_msgs::srv::PoseCur` | Get current robot pose | `ros2 service call /api_agent/robot/get/po_cur api_msgs/srv/PoseCur "{crd: 0, mechinfo: 1}"` |
| `/api_agent/robot/get/cur_tool_data` | `std_srvs::srv::Trigger` | Get current tool data | `ros2 service call /api_agent/robot/get/cur_tool_data std_srvs/srv/Trigger` |
| `/api_agent/robot/get/tools` | `std_srvs::srv::Trigger` | Get all tool information | `ros2 service call /api_agent/robot/get/tools std_srvs/srv/Trigger` |
| `/api_agent/robot/get/tools_t` | `api_msgs::srv::Number` | Get specific tool setting information | `ros2 service call /api_agent/robot/get/tools_t api_msgs/srv/Number "{data: 0}"` |
| `/api_agent/robot/post/motor_control` | `std_srvs::srv::SetBool` | Turn robot motor ON/OFF | `ros2 service call /api_agent/robot/post/motor_control std_srvs/srv/SetBool "{data: true}"` |
| `/api_agent/robot/post/robot_control` | `std_srvs::srv::SetBool` | Start/Stop robot | `ros2 service call /api_agent/robot/post/robot_control std_srvs/srv/SetBool "{data: true}"` |
| `/api_agent/robot/post/tool_no` | `api_msgs::srv::Number` | Set current tool number | `ros2 service call /api_agent/robot/post/tool_no api_msgs/srv/Number "{data: 0}"` |
| `/api_agent/robot/post/crd_sys` | `api_msgs::srv::Number` | Set current jog coordinate system | `ros2 service call /api_agent/robot/post/crd_sys api_msgs/srv/Number "{data: 0}"` |

## I/O PLC Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/plc/get/relay_value` | `api_msgs::srv::IoplcGet` | Get relay values for the entire object type | `ros2 service call /api_agent/plc/get/relay_value api_msgs/srv/IoplcGet` |
| `/api_agent/plc/post/relay_value` | `api_msgs::srv::IoplcPost` | Set relay values | `ros2 service call /api_agent/plc/post/relay_value api_msgs/srv/IoplcPost` |

## Log Manager Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/log/get/manager` | `api_msgs::srv::LogManager` | View event log with specified filter conditions | `ros2 service call /api_agent/log/get/manager api_msgs/srv/LogManager` |

## File Manager Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/file/get/files` | `api_msgs::srv::FilePath` | Get file contents from controller | `ros2 service call /api_agent/file/get/files api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` |
| `/api_agent/file/get/file_info` | `api_msgs::srv::FilePath` | Get file information based on file path | `ros2 service call /api_agent/file/get/file_info api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` |
| `/api_agent/file/get/file_list` | `api_msgs::srv::FileList` | Get list of files and directories | `ros2 service call /api_agent/file/get/file_list api_msgs/srv/FileList "{path: 'project/jobs', incl_file: true, incl_dir: false}"` |
| `/api_agent/file/get/file_exist` | `api_msgs::srv::FilePath` | Check if target file exists | `ros2 service call /api_agent/file/get/file_exist api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` |
| `/api_agent/file/post/rename_file` | `api_msgs::srv::FileRename` | Rename target file | `ros2 service call /api_agent/file/post/rename_file api_msgs/srv/FileRename "{pathname_from: 'project/jobs/0001.job',pathname_to: 'project/jobs/4321.job'}"` |
| `/api_agent/file/post/mkdir` | `api_msgs::srv::FilePath` | Create directory at target path | `ros2 service call /api_agent/file/post/mkdir api_msgs/srv/FilePath "{path: 'project/jobs/special'}"` |
| `/api_agent/file/post/files` | `api_msgs::srv::FileSend` | Send file to target path | `ros2 service call /api_agent/file/post/files api_msgs::srv::FileSend "{target_file: 'project/jobs/test.job', source_file: '/home/test/test.job'}"` |
| `/api_agent/file/delete/file` | `api_msgs::srv::FilePath` | Delete target file or directory | `ros2 service call /api_agent/file/delete/file api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` |

## Task Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/task/post/cur_prog_cnt` | `api_msgs::srv::ProgramCnt` | Set current program counter of the task | `ros2 service call /api_agent/task/post/cur_prog_cnt api_msgs/srv/ProgramCnt "{pno: -1, sno: -1, fno: -1, ext_sel: 0}"` |
| `/api_agent/task/post/reset` | `std_srvs::srv::Trigger` | Reset all tasks | `ros2 service call /api_agent/task/post/reset std_srvs/srv/Trigger` |
| `/api_agent/task/post/reset_t` | `api_msgs::srv::Number` | Perform reset on a task | `ros2 service call /api_agent/task/post/reset_t api_msgs/srv/Number "{data: 0}"` |
| `/api_agent/task/post/assign_var` | `api_msgs::srv::ProgramVar` | Reassign variable of current task statement | `ros2 service call /api_agent/task/post/assign_var api_msgs/srv/ProgramVar "{name: 'a', scope: 'local', expr: '14 + 2', save: 'true'}"` |
| `/api_agent/task/post/release_wait` | `std_srvs::srv::Trigger` | Release statement stop | `ros2 service call /api_agent/task/post/release_wait std_srvs/srv/Trigger` |
| `/api_agent/task/post/set_cur_pc_idx` | `api_msgs::srv::Number` | Position current cursor at index line | `ros2 service call /api_agent/task/post/set_cur_pc_idx api_msgs/srv/Number "{data: 0}"` |
| `/api_agent/task/post/solve_expr` | `api_msgs::srv::ProgramVar` | Solve expression and set result to task's local or global variable | `ros2 service call /api_agent/task/post/solve_expr api_msgs/srv/ProgramVar "{name: 'a', scope: 'local'}"` |

## Clock Services

| Service Name | Service Type | Description | Example Usage |
|--------------|--------------|-------------|---------------|
| `/api_agent/clock/get/date_time` | `std_srvs::srv::Trigger` | Get set system time | `ros2 service call /api_agent/clock/get/date_time std_srvs/srv/Trigger` |
| `/api_agent/clock/put/date_time` | `api_msgs::srv::DateTime` | Change system time | `ros2 service call /api_agent/clock/put/date_time api_msgs/srv/DateTime "{year: 2024, mon: 7, day: 11, hour: 15, min: 13, sec: 0}"` |

## Contributing

Contributions to this project are welcome. Please refer to the contributing guidelines for more information.

## License

[Insert appropriate license information here]

## Contact

For any queries or support, please contact [Insert contact information here]
