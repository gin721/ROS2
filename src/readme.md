

# ROS2 Linux Commands 

 A list of useful commands used in terminals for ROS2 applications.
#### Sourcing the setup.bash to the terminal 
```
source /opt/ros/humble/setup.bash
```
#### Edit the bashrc and add the sourcing cmds 
```
gedit ~/.bashrc
```
#### To build the package selectively in workspace dir
```
colcon build --packages-select <package_name>
```
#### Testing the workspace
```
colcon test
```
#### Creating a ros2 python package
```
ros2 pkg create --build-type ament_cmake --license Apache-2.0 <package_name>
```
#### Creating a ros2 cmake package
```
ros2 pkg create --build-type ament_python --license Apache-2.0 <package_name>
```
#### Creating a ros2 package with a node
```
ros2 pkg create --build-type ament_python --license Apache-2.0 --node-name <nodoe_name> <package_name>
```
#### Creating a ros2 package with dependencies
```
ros2 pkg create --build-type ament_cmake --license Apache-2.0 <package_name> --dependencies rclcpp example_interfaces
```
#### Run a node from a package 
```
ros2 run <package_name> <node_name>
```
#### List of ros2 nodes running
```
ros2 node list
```
#### Information of ros2 nodes
```
ros2 node info <node_name>
```
#### Remaping of a node to run multiple nodes of same name
```
ros2 run <package_name> <node_name> --ros-args --remap __node:=my_turtle
```
#### Change executable  to symlink build and easily build the  node 
```
colcon build --symlink-install
```
#### Change to executable form in linux
```
chmod +x <node_name.py>
```
#### Open rqt gui
```
rqt
```
#### Open rqt graph
```
rqt_graph
```
#### Open a turtlesim node
```
ros2 run turtlesim turtlesim_node
```
#### Moving the turtle in the turtlesim node
```
ros2 run turtlesim turtle_teleop_key
```