#include "rostest/main_window.h"
#include <QtWidgets>
#include <QApplication>
#include <ros/ros.h>


#include <QApplication>
#include <ros/ros.h>
#include <string>

int main(int argc, char *argv[])
{
    ros::init(argc, argv, "control");
    ros::NodeHandle node;
    ros::NodeHandle private_nh("~");
    QApplication a(argc, argv);
    waytous::calibration::gui:: MainWindowDesign w(node);
    w.show();
    return a.exec();
}