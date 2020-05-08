

#ifndef PUBLISH_SELECTION_PATCH_H
#define PUBLISH_SELECTION_PATCH_H

#ifndef Q_MOC_RUN  // See: https://bugreports.qt-project.org/browse/QTBUG-22829

# include <ros/node_handle.h>
# include <ros/publisher.h>

# include "rviz/tool.h"

# include <QCursor>
# include <QObject>

#endif

#include "rviz/default_plugin/tools/selection_tool.h"

namespace selection_patch {

    class SelectionPatch;

    class SelectionPatch : public rviz::SelectionTool {
    Q_OBJECT
    public:
        SelectionPatch();

        virtual ~SelectionPatch();

        /*
         * Hooks on rviz::SelectionTool::processMouseEvent() to get and publish
         * selected points
         */


        virtual int processKeyEvent(QKeyEvent *event, rviz::RenderPanel *panel);

    public Q_SLOTS:

        /*
         * Creates the ROS topic
         */
        void updateTopic();

    protected:
        ros::NodeHandle nh_;
        ros::Publisher _pub1;
        ros::Publisher _pub2;
        std::string cloud1_topic;
        std::string cloud2_topic;
    };
} // end namespace publish_selected_patch

#endif // PUBLISH_SELECTED_PATCH_H

////////////////////////////////////////////////////////////////////////////////

