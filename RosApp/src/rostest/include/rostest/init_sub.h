/*----------------------------------------------------------------
 * Copyright (C) 2019 北京慧拓无线科技有限公司 waytous Inc All Rights Reserved
 *
 * Author: 栗荣豪
 * Time  : 2020-03-19
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE
-----------------------------------------------------------------*/
#ifndef GUI_SRC_CALIBRATION_INIT_RPY_H
#define GUI_SRC_CALIBRATION_INIT_RPY_H

#include <ros/ros.h>
#include <string>
#include <iostream>
#include <pthread.h>
#include <QThread>
#include "std_msgs/String.h"

namespace waytous{
namespace calibration{
namespace gui{
class InitSub :public QThread
{           
public:  
    InitSub();
    bool GetInit();
    void InitCallback(const std_msgs::String msg);
    float x_ = 0.0, y_ = 0.0, z_ = 0.0, roll_ = 0.0, pitch_ = 0.0, yaw_ = 0.0;
private:
    ros::NodeHandle nh;    
    ros::Subscriber init_trans_vec_;  

};  
}//namespace gui
}//namespace calibration
}//namespace waytous


#endif //GUI_SRC_CALIBRATION_INIT_RPY_H

