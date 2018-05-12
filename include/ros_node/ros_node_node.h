#ifndef ROS_NODE_NODE_H
#define ROS_NODE_NODE_H
#include <iostream>
#include "ros/ros.h"
#include "std_msgs/String.h"
#include <sensor_msgs/JointState.h>
#include <tf/transform_broadcaster.h>
#include <tf/transform_listener.h>
#include <tf/tf.h>
#include <nav_msgs/Odometry.h>
#include <sensor_msgs/LaserScan.h>
#include "geometry_msgs/Twist.h"
#include <math.h>
#include <sensor_msgs/Imu.h>
#include <boost/thread/thread.hpp>
#include <boost/bind.hpp>
#include <termios.h>
#include <fcntl.h>
#include <unistd.h>
#include <visualization_msgs/Marker.h>
#include <nav_msgs/Path.h>
#include <nav_msgs/GetPlan.h>
using namespace std;
namespace Ros_node {
class ros_node
{
public:
    ros_node();
    ~ros_node();
private:
    void execute(void);
    ros::NodeHandle nh_private_;
    boost::thread work_execute_;
};
}




#endif
