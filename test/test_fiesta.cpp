#include "Fiesta.h"

int main(int argc, char **argv) {
  ros::init(argc, argv, "FIESTA");
  ros::NodeHandle node("~");
  tf::TransformListener l;
  fiesta::Fiesta<sensor_msgs::Image::ConstPtr, geometry_msgs::TransformStamped::ConstPtr> esdf_map(node, &l);
  ros::spin();
  return 0;
}
