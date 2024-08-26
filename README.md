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

### 2. Install Dependency Packages

#### 2.1 Install General Dependencies

Download the required repositories and install package dependencies:

```bash
cd ~/ros2_ws/
rosdep update && rosdep install --ignore-src --from-paths src -y
```

This command updates `rosdep` and automatically installs dependencies for all packages in the `src` folder.

#### 2.2 Install Project-Specific Dependencies

Run the project-specific dependency installation script:

```bash
cd ~/ros2_ws/src/hr_simulation_gz
bash ros2-install-deps.sh
```

### 3. Configure and Install Workspace

Finally, configure and install the workspace:

```bash
cd ~/ros2_ws/src/hr_simulation_gz
cp install ~/ros2_ws/
source ~/ros2_ws/install/setup.bash
```

Additionally, to use the simulation, you need to build the workspace using the following command:

```bash
cd ~/ros2_ws
colcon build --symlink-install
```

This `colcon build` command builds all packages in the workspace and installs them using symbolic links. This allows changes in source files to take effect immediately without requiring a rebuild.

After the build is complete, open a new terminal or run the following command in your current terminal to apply the updated environment:

```bash
source ~/ros2_ws/install/setup.bash
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
- [Console Services](#console-services)

For examples and detailed information on how to use these services, please refer to the [HI6 Open API documentation](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/README).

## Version Services

| Service Name | Service Type | Description | Example Usage | Documentation Link |
|--------------|--------------|-------------|---------------|--------------------|
| `/api_agent/get/api_ver` | `std_srvs::srv::Trigger` | Get Open API schema version | `ros2 service call /api_agent/get/api_ver std_srvs/srv/Trigger` | [API Schema Version](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/2-version/1-get/1-api_ver) |
| `/api_agent/get/sysver` | `std_srvs::srv::Trigger` | Get robot controller system software version | `ros2 service call /api_agent/get/sysver std_srvs/srv/Trigger` | [System Software Version](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/2-version/1-get/2-sysver) |

## Project Services

| Service Name | Service Type | Description | Example Usage | Documentation Link |
|--------------|--------------|-------------|---------------|--------------------|
| `/api_agent/project/get/rgen` | `std_srvs::srv::Trigger` | Read general information set in the controller | `ros2 service call /api_agent/project/get/rgen std_srvs/srv/Trigger` | [Read General Information](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/3-project/1-get/1-rgen) |
| `/api_agent/project/get/jobs_info` | `std_srvs::srv::Trigger` | Get information related to job programs | `ros2 service call /api_agent/project/get/jobs_info std_srvs/srv/Trigger` | [Get Job Information](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/3-project/1-get/2-jobs_info) |
| `/api_agent/project/post/reload_updated_jobs` | `std_srvs::srv::Trigger` | Request to update job files | `ros2 service call /api_agent/project/post/reload_updated_jobs std_srvs/srv/Trigger` | [Reload Updated Jobs](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/3-project/2-post/1-reload_updated_jobs) |
| `/api_agent/project/post/delete_job` | `api_msgs::srv::FilePath` | Request to delete a job file | `ros2 service call /api_agent/project/post/delete_job api_msgs/srv/FilePath "{path: '0001.job'}"` | [Delete Job](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/3-project/2-post/2-jobs-delete_job) |

## Control Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/control/get/op_cnd` | `std_srvs::srv::Trigger` | Get condition setting values | `ros2 service call /api_agent/control/get/op_cnd std_srvs/srv/Trigger` | [Get Condition Setting Values](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/1-get/1-op_cnd) |
| `/api_agent/control/get/ios_di` | `api_msgs::srv::IoRequest` | Get user IO values (Digital Input) | `ros2 service call /api_agent/control/get/ios_di api_msgs/srv/IoRequest "{type: 'di', blk_no: 1, sig_no: 1}"` | [Get User IO Values (Digital Input)](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/1-get/2-ios-dio) |
| `/api_agent/control/get/ios_do` | `api_msgs::srv::IoRequest` | Get user IO values (Digital Output) | `ros2 service call /api_agent/control/get/ios_do api_msgs/srv/IoRequest "{type: 'do', blk_no: 1, sig_no: 1}"` | [Get User IO Values (Digital Output)](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/1-get/2-ios-dio) |
| `/api_agent/control/get/ios_si` | `api_msgs::srv::IoRequest` | Get system IO values (System Input) | `ros2 service call /api_agent/control/get/ios_si api_msgs/srv/IoRequest "{type: 'si', blk_no: 1, sig_no: 1}"` | [Get System IO Values (System Input)](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/1-get/3-ios-sio) |
| `/api_agent/control/get/ios_so` | `api_msgs::srv::IoRequest` | Get system IO values (System Output) | `ros2 service call /api_agent/control/get/ios_so api_msgs/srv/IoRequest "{type: 'so', blk_no: 1, sig_no: 1}"` | [Get System IO Values (System Output)](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/1-get/3-ios-sio) |
| `/api_agent/control/get/ucs_nos` | `std_srvs::srv::Trigger` | Get list of currently used user coordinate systems | `ros2 service call /api_agent/control/get/ucs_nos std_srvs/srv/Trigger` | [Get List of Currently Used User Coordinate Systems](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/1-get/4-ucss-ucs_nos) |
| `/api_agent/control/post/ios_do` | `api_msgs::srv::IoRequest` | Change digital output | `ros2 service call /api_agent/control/post/ios_do api_msgs/srv/IoRequest "{type: 'do', blk_no: 1, sig_no: 1, val: 1}"` | [Change Digital Output](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/2-post/1-ios-dio) |
| `/api_agent/control/put/op_cnd` | `api_msgs::srv::OpCnd` | Change robot's condition setting values | `ros2 service call /api_agent/control/put/op_cnd api_msgs/srv/OpCnd "{playback_mode: 1, step_goback_max_spd: 130, ucrd_num: 2}"` | [Change Robot's Condition Setting Values](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/4-control/3-put/1-op_cnd) |

## Robot Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/robot/get/motor_state` | `std_srvs::srv::Trigger` | Get motor on state | `ros2 service call /api_agent/robot/get/motor_state std_srvs/srv/Trigger` | [Get Motor On State](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/1-get/1-motor_on_state) |
| `/api_agent/robot/get/po_cur` | `api_msgs::srv::PoseCur` | Get current robot pose | `ros2 service call /api_agent/robot/get/po_cur api_msgs/srv/PoseCur "{crd: 0, mechinfo: 1}"` | [Get Current Robot Pose](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/1-get/2-po_cur) |
| `/api_agent/robot/get/cur_tool_data` | `std_srvs::srv::Trigger` | Get current tool data | `ros2 service call /api_agent/robot/get/cur_tool_data std_srvs/srv/Trigger` | [Get Current Tool Data](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/1-get/3-cur_tool_data) |
| `/api_agent/robot/get/tools` | `std_srvs::srv::Trigger` | Get all tool information | `ros2 service call /api_agent/robot/get/tools std_srvs/srv/Trigger` | [Get All Tool Information](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/1-get/4-tools) |
| `/api_agent/robot/get/tools_t` | `api_msgs::srv::Number` | Get specific tool setting information | `ros2 service call /api_agent/robot/get/tools_t api_msgs/srv/Number "{data: 0}"` | [Get Specific Tool Setting Information](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/1-get/5-tools_t) |
| `/api_agent/robot/post/motor_control` | `std_srvs::srv::SetBool` | Turn robot motor ON/OFF | `ros2 service call /api_agent/robot/post/motor_control std_srvs/srv/SetBool "{data: true}"` | [Turn Robot Motor ON/OFF](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/2-post/1-motor-on-off) |
| `/api_agent/robot/post/robot_control` | `std_srvs::srv::SetBool` | Start/Stop robot | `ros2 service call /api_agent/robot/post/robot_control std_srvs/srv/SetBool "{data: true}"` | [Start/Stop Robot](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/2-post/2-start-stop) |
| `/api_agent/robot/post/tool_no` | `api_msgs::srv::Number` | Set current tool number | `ros2 service call /api_agent/robot/post/tool_no api_msgs/srv/Number "{data: 0}"` | [Set Current Tool Number](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/2-post/3-tool_no) |
| `/api_agent/robot/post/crd_sys` | `api_msgs::srv::Number` | Set current jog coordinate system | `ros2 service call /api_agent/robot/post/crd_sys api_msgs/srv/Number "{data: 0}"` | [Set Current Jog Coordinate System](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/5-robot/2-post/4-crd_sys) |
| `/api_agent/robot/post/emergency_stop` | `api_msgs::srv::Emergency` | Emergency stop operation | `ros2 service call /api_agent/robot/post/emergency_stop api_msgs/srv/Emergency "{step_no: 2, stop_at: 20, stop_at_corner: 0, category: 1}"` | [Emergency stop operation](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/korean/5-robot/2-post/5-emergency_stop) |

## I/O PLC Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/plc/get/relay_value` | `api_msgs::srv::IoplcGet` | Get relay values for the entire object type | `ros2 service call /api_agent/plc/get/relay_value api_msgs/srv/IoplcGet` | [Get Relay Values](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/6-io_plc/1-get/1-relay-value) |
| `/api_agent/plc/post/relay_value` | `api_msgs::srv::IoplcPost` | Set relay values | `ros2 service call /api_agent/plc/post/relay_value api_msgs/srv/IoplcPost` | [Set Relay Values](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/6-io_plc/2-post/1-set_relay_value) |

## Log Manager Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/log/get/manager` | `api_msgs::srv::LogManager` | View event log with specified filter conditions | `ros2 service call /api_agent/log/get/manager api_msgs/srv/LogManager` | [View Event Log](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/7-log_manager/1-get/1-search) |

## File Manager Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/file/get/files` | `api_msgs::srv::FilePath` | Get file contents from controller | `ros2 service call /api_agent/file/get/files api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` | [Get File Contents](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/1-get/1-files) |
| `/api_agent/file/get/file_info` | `api_msgs::srv::FilePath` | Get file information based on file path | `ros2 service call /api_agent/file/get/file_info api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` | [Get File Information](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/1-get/2-file_info) |
| `/api_agent/file/get/file_list` | `api_msgs::srv::FileList` | Get list of files and directories | `ros2 service call /api_agent/file/get/file_list api_msgs/srv/FileList "{path: 'project/jobs', incl_file: true, incl_dir: false}"` | [Get List of Files and Directories](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/1-get/3-file_list) |
| `/api_agent/file/get/file_exist` | `api_msgs::srv::FilePath` | Check if target file exists | `ros2 service call /api_agent/file/get/file_exist api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` | [Check if Target File Exists](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/1-get/4-file_exist) |
| `/api_agent/file/post/rename_file` | `api_msgs::srv::FileRename` | Rename target file | `ros2 service call /api_agent/file/post/rename_file api_msgs/srv/FileRename "{pathname_from: 'project/jobs/0001.job', pathname_to: 'project/jobs/4321.job'}"` | [Rename Target File](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/2-post/1-rename_file) |
| `/api_agent/file/post/mkdir` | `api_msgs::srv::FilePath` | Create directory at target path | `ros2 service call /api_agent/file/post/mkdir api_msgs/srv/FilePath "{path: 'project/jobs/special'}"` | [Create Directory at Target Path](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/2-post/2-mkdir) |
| `/api_agent/file/post/files` | `api_msgs::srv::FileSend` | Send file to target path | `ros2 service call /api_agent/file/post/files api_msgs::srv::FileSend "{target_file: 'project/jobs/test.job', source_file: '/home/test/test.job'}"` | [Send File to Target Path](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/2-post/3-files) |
| `/api_agent/file/delete/file` | `api_msgs::srv::FilePath` | Delete target file or directory | `ros2 service call /api_agent/file/delete/file api_msgs/srv/FilePath "{path: 'project/jobs/0001.job'}"` | [Delete Target File or Directory](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/8-file_manager/3-delete/1-files) |

## Task Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/task/post/cur_prog_cnt` | `api_msgs::srv::ProgramCnt` | Set current program counter of the task | `ros2 service call /api_agent/task/post/cur_prog_cnt api_msgs/srv/ProgramCnt "{pno: -1, sno: -1, fno: -1, ext_sel: 0}"` | [Set Current Program Counter](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/1-cur_prog_cnt) |
| `/api_agent/task/post/reset` | `std_srvs::srv::Trigger` | Reset all tasks | `ros2 service call /api_agent/task/post/reset std_srvs/srv/Trigger` | [Reset All Tasks](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/2-reset) |
| `/api_agent/task/post/reset_t` | `api_msgs::srv::Number` | Perform reset on a task | `ros2 service call /api_agent/task/post/reset_t api_msgs/srv/Number "{data: 0}"` | [Perform Reset on a Task](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/2-reset) |
| `/api_agent/task/post/assign_var` | `api_msgs::srv::ProgramVar` | Reassign variable of current task statement | `ros2 service call /api_agent/task/post/assign_var api_msgs/srv/ProgramVar "{name: 'a', scope: 'local', expr: '14 + 2', save: 'true'}"` | [Reassign Variable of Current Task Statement (Expression)](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/3-assign_var_expr), [Reassign Variable of Current Task Statement (JSON)](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/4-assign_var_json) |
| `/api_agent/task/post/release_wait` | `std_srvs::srv::Trigger` | Release statement stop | `ros2 service call /api_agent/task/post/release_wait std_srvs/srv/Trigger` | [Release Statement Stop](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/5-release_wait) |
| `/api_agent/task/post/set_cur_pc_idx` | `api_msgs::srv::Number` | Position current cursor at index line | `ros2 service call /api_agent/task/post/set_cur_pc_idx api_msgs/srv/Number "{data: 0}"` | [Position Current Cursor at Index Line](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/6-set_cur_pc_idx) |
| `/api_agent/task/post/solve_expr` | `api_msgs::srv::ProgramVar` | Solve expression and set result to task's local or global variable | `ros2 service call /api_agent/task/post/solve_expr api_msgs/srv/ProgramVar "{name: 'a', scope: 'local'}"` | [Solve Expression and Set Result](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/9-task/2-post/7-solve_expr) |
| `/api_agent/task/post/execute_move` | `api_msgs::srv::ExecuteMove` | Moves to a specified pose. | `ros2 service call /api_agent/task/post/execute_move api_msgs/srv/ExecuteMove "{task_no: 0, stmt: 'move SP,spd=1sec,accu=0,tool=1 [0, 90, 0, 0, 0, 0]' }"` | [Moves to a specified pose.](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/korean/9-task/2-post/8-execute_move) |

## Clock Services

| Service Name | Service Type | Description | Example Usage | Documentation |
|--------------|--------------|-------------|---------------|----------------|
| `/api_agent/clock/get/date_time` | `std_srvs::srv::Trigger` | Get set system time | `ros2 service call /api_agent/clock/get/date_time std_srvs/srv/Trigger` | [Get System Time](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/11-etc/1-clock/1-get/1-date_time) |
| `/api_agent/clock/put/date_time` | `api_msgs::srv::DateTime` | Change system time | `ros2 service call /api_agent/clock/put/date_time api_msgs/srv/DateTime "{year: 2024, mon: 7, day: 11, hour: 15, min: 13, sec: 0}"` | [Change System Time](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/english/11-etc/1-clock/2-put/1-date_time) |


## Console Services

# Hi6 Controller Console Command Execution Service

This README provides information about the ROS2 service for executing console commands on the Hi6 controller.

## Service Information

| Service Name | Service Type | Description |
|--------------|--------------|-------------|
| `/api_agent/console/post/execute_cmd` | `api_msgs::srv::ExecuteCmd` | Execute console commands on the Hi6 controller. |

## Usage Example

To call the service from the command line, use the following ROS2 command:

```bash
ros2 service call /api_agent/console/post/execute_cmd api_msgs/srv/ExecuteCmd "{
cmd_line: [
'rl.stop',
'rl.reinit',
'rl.i move P,spd=100mm/sec,accu=0,tool=0  [10, 90, 20, 0, 0, 0]',
'rl.i move P,spd=200mm/sec,accu=1,tool=0  [-10, 90, -20, 0, 0, 0]',
'rl.i move P,spd=300mm/sec,accu=2,tool=0  [10, 90, 20, 0, 0, 0]',
'rl.i move P,spd=400mm/sec,accu=3,tool=0  [-10, 90, -20, 0, 0, 0]',
'rl.i move P,spd=500mm/sec,accu=4,tool=0  [10, 90, 20, 0, 0, 0]',
'rl.i move P,spd=600mm/sec,accu=7,tool=0  [10, 90, -20, 0, 0, 0]',
'rl.i end',
'rl.start'
]}"
```

This example demonstrates how to:
1. Stop the robot
2. Reinitialize the robot
3. Move the robot to various positions with different speeds and accuracies
4. End the immediate command sequence
5. Start the robot

## Safety Warning

Before executing any commands, ensure that you have taken all necessary safety precautions. Be aware of the robot's current state and its surrounding environment. Sudden movements of the robot can be dangerous if proper safety measures are not in place.

## Additional Documentation

For more detailed information about executing console commands on the Hi6 controller, please refer to the [official documentation](https://hrbook-hrc.web.app/#/view/doc-hi6-open-api/korean/10-console/2-post/1-execute_cmd).

## Contributing

Contributions to this project are welcome. Please refer to the contributing guidelines for more information.

## License

[Insert appropriate license information here]

## Contact

For any queries or support, please contact [Insert contact information here]
