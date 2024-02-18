#include <ros/ros.h>
#include <artographer_ros/node.h>

int main(int argc, char** argv) {
  ros::init(argc, argv, "navigation_node");
  ros::NodeHandle nh;
  ros::NodeHandle private_nh("~");

  // Load Cartographer configuration file
  cartographer_ros::NodeOptions node_options;
  node_options.load_configuration_files({ "cartographer_config.lua" });

  // Create a Cartographer node
  cartographer_ros::Node node(node_options, &nh, &private_nh);

  // Implement your navigation logic here

  ros::spin();
  return 0;
}
