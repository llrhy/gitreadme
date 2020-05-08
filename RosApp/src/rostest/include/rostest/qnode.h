/**
 * @file /include/rostest/qnode.hpp
 *
 * @brief Communications central!
 *
 * @date February 2011
 **/
/*****************************************************************************
** Ifdefs
*****************************************************************************/

#ifndef rostest_QNODE_HPP_
#define rostest_QNODE_HPP_

/*****************************************************************************
** Includes
*****************************************************************************/

// To workaround boost/qt4 problems that won't be bugfixed. Refer to
//    https://bugreports.qt.io/browse/QTBUG-22829
#ifndef Q_MOC_RUN
#include <ros/ros.h>
#endif
#include <string>
#include <QThread>
#include <QStringListModel>
#include "std_msgs/String.h"

/*****************************************************************************
** Namespaces
*****************************************************************************/

namespace rostest {

class QNode : public QThread {
    Q_OBJECT
public:
  void init(ros::NodeHandle node);
  void initCallback(const std_msgs::String msg);
private:
	int init_argc;
	char** init_argv;
	ros::Publisher chatter_publisher;
    QStringListModel logging_model;
};

}  // namespace rostest

#endif /* rostest_QNODE_HPP_ */
