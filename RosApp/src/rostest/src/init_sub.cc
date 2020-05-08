#include "init_sub.h"

namespace waytous{
namespace calibration{
namespace gui{
InitSub::InitSub()
{
    std::cout<<"初始化对象成功"<<std::endl;
    int argc = 0; char **argv = NULL;
    ros::init(argc, argv, "init");
    ros::start(); 
    init_trans_vec_ = nh.subscribe("/adjust_init",1, &InitSub::InitCallback, this); 
    ros::start(); 
}
bool InitSub::GetInit()
{ 
    ros::Rate loop_rate(2);
    for(int i = 0; i < 2; ++i) 
    {
        ros::spinOnce();
        loop_rate.sleep();
    }
    return true; 
}
void InitSub::InitCallback(const std_msgs::String msg)
{
    std::string tmp_str = msg.data;
    std::istringstream infile(tmp_str);
    float init_roll,init_pitch,init_yaw;
    std::string tmp;
    infile >> tmp;
    x_ = atof(tmp.c_str());
    infile >> tmp;
    y_ = atof(tmp.c_str());
    infile >> tmp;
    z_ = atof(tmp.c_str());
    infile >> tmp;
    roll_ = atof(tmp.c_str());
    infile >> tmp;
    pitch_ = atof(tmp.c_str());
    infile >> tmp;
    yaw_ = atof(tmp.c_str());
}
}//namespace gui
}//namespace calibration
}//namespace waytous