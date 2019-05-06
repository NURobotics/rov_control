#include "ros/ros.h"
#include "joystick.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "joystick_server");

  ros::NodeHandle n;

  ros::Rate loop_rate(10);

  while (ros::ok())
  {
    ROS_INFO("Hello World!");

    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
