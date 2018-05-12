#include <ros_node/ros_node_node.h>
using namespace std;
using namespace Ros_node;
ros_node::ros_node()
{
    nh_private_ = ros::NodeHandle("~");
    work_execute_ = boost::thread(boost::bind(&ros_node::execute, this));
}
ros_node::~ros_node()
{
    work_execute_.join();
}
void ros_node::execute(void)
{
    ros::Rate loop_rate(50);
    while(ros::ok())
    {
        cout << "hello,world!" << endl;
        loop_rate.sleep();
    }
}
int main (int argc, char **argv)
{
    ros::init(argc, argv, "ros_node_node");
    boost::shared_ptr<ros_node> work_interface_ (new ros_node);
    ros::spin();
    return 0;
}


















