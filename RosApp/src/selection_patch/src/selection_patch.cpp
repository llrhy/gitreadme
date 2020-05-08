#include "rviz/selection/selection_manager.h"
#include "rviz/viewport_mouse_event.h"
#include "rviz/display_context.h"
#include "rviz/selection/forwards.h"
#include "rviz/properties/property_tree_model.h"
#include "rviz/properties/property.h"
#include "rviz/properties/vector_property.h"

#include "selection_patch.h"

#include <ros/ros.h>
#include <ros/time.h>
#include <sensor_msgs/PointCloud2.h>
#include <pcl_conversions/pcl_conversions.h>
#include <pcl/point_cloud.h>
#include <pcl/point_types.h>
#include <QVariant>
#include <geometry_msgs/PolygonStamped.h>
#include <algorithm>

using namespace std;

namespace selection_patch {
    SelectionPatch::SelectionPatch() {
        updateTopic();
    }

    SelectionPatch::~SelectionPatch() = default;

    void SelectionPatch::updateTopic() {
        cloud1_topic = "/selected1";
        cloud2_topic = "/selected2";
        _pub1 = nh_.advertise<geometry_msgs::PolygonStamped>(cloud1_topic, 1);
        _pub2 = nh_.advertise<geometry_msgs::PolygonStamped>(cloud2_topic, 1);
    }


    int SelectionPatch::processKeyEvent(QKeyEvent *event, rviz::RenderPanel *panel) {
        int flags = rviz::SelectionTool::processKeyEvent(event, panel);
        geometry_msgs::PolygonStamped _toSend;
        rviz::SelectionManager *sel_manager = context_->getSelectionManager();
        rviz::M_Picked selection = sel_manager->getSelection();
        rviz::PropertyTreeModel *model = sel_manager->getPropertyModel();
        int num_points = model->rowCount();
        if (!(selection.empty() || num_points <= 0)) {
            for (int i = 0; i < num_points; i++) {
                geometry_msgs::Point32 the_clr_point;
                QModelIndex child_index = model->index(i, 0);
                rviz::Property *child = model->getProp(child_index);
                rviz::VectorProperty *subchild = (rviz::VectorProperty *) child->childAt(0);
                Ogre::Vector3 vec = subchild->getVector();
                the_clr_point.x = vec.x;
                the_clr_point.y = vec.y;
                the_clr_point.z = vec.z;
                _toSend.polygon.points.push_back(the_clr_point);
            }
        }
        _toSend.header.stamp = ros::Time::now();
        _toSend.header.frame_id = context_->getFixedFrame().toStdString();
        if (event->key() == Qt::Key_1) {
            _pub1.publish(_toSend);
        } else if (event->key() == Qt::Key_2) {
            _pub2.publish(_toSend);
        }
        return flags;
    }

} // end namespace selection_patch

#include <pluginlib/class_list_macros.h>

PLUGINLIB_EXPORT_CLASS(selection_patch::SelectionPatch, rviz::Tool)
