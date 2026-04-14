# ROS 2 Course Demo Packages

This workspace contains three ROS 2 demo packages for the course work:

- `src/my_robot_pkg`
- `src/my_robot_action_pkg`
- `src/ros_service_demo`

These are the only folders you need to copy into your own ROS 2 workspace.

## What to Copy

Inside your own workspace, copy only these three folders into your `src` folder:

```bash
your_workspace/
└── src/
    ├── my_robot_pkg
    ├── my_robot_action_pkg
    └── ros_service_demo
```

Do not copy these folders:

- `build`
- `install`
- `log`
- `src/install`
- `src/log`

Those folders are generated automatically when you build the workspace.

## Setup

Open a terminal in your own ROS 2 workspace:

```bash
cd ~/your_workspace
```

Build the three packages:

```bash
colcon build
```

Source the workspace:

```bash
source install/setup.bash
```

If you are using `zsh`, use:

```bash
source install/setup.zsh
```

## Demo 1: Publisher and Subscriber

Package: `my_robot_pkg`

Terminal 1:

```bash
ros2 run my_robot_pkg talker
```

Terminal 2:

```bash
ros2 run my_robot_pkg listener
```

The talker publishes group information on the `group_info` topic, and the listener receives it.

## Demo 2: Service Server and Client

Package: `ros_service_demo`

Terminal 1:

```bash
ros2 run ros_service_demo add_two_ints_server
```

Terminal 2:

```bash
ros2 run ros_service_demo add_two_ints_client 5 3
```

You can replace `5` and `3` with any two integers.

## Demo 3: Action Server and Client

Package: `my_robot_action_pkg`

Before building, make sure the action scripts are executable:

```bash
chmod +x src/my_robot_action_pkg/scripts/action_server.py
chmod +x src/my_robot_action_pkg/scripts/action_client.py
```

Then build and source again:

```bash
colcon build
source install/setup.bash
```

Terminal 1:

```bash
ros2 run my_robot_action_pkg action_server.py
```

Terminal 2:

```bash
ros2 run my_robot_action_pkg action_client.py
```

The action client sends a task request, and the action server returns progress feedback until the task is complete.

## Quick Reminder

Only copy:

```text
src/my_robot_pkg
src/my_robot_action_pkg
src/ros_service_demo
```

Everything else can be rebuilt on your own computer with `colcon build`.
