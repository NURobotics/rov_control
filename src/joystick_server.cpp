#include "ros/ros.h"
#include "joystick.h"
#include <sensor_msgs/Joy.h>

void joyCallback(const sensor_msgs::Joy::ConstPtr& joy){
    ROS_INFO("Axis 0 is %f", joy->axes[0]);
}

int main(int argc, char **argv)
{
  ros::init(argc, argv, "joystick_server");

  ros::NodeHandle n;
  ros::Subscriber joystick_sub = n.subscribe<sensor_msgs::Joy>("joy", 1, &joyCallback);

  ros::Rate loop_rate(10);
  
  ROS_INFO("Hello World!");
  while (ros::ok())
  {
    ros::spinOnce();

    loop_rate.sleep();
  }

  return 0;
}
