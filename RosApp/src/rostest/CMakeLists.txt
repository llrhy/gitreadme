cmake_minimum_required(VERSION 2.8.3)
project(rostest)

## Compile as C++11, supported in ROS Kinetic and newer
add_compile_options(-std=c++11)
#SET(CMAKE_CXX_FLAGS "-std=c++11 -O2 -g -Wall ${CMAKE_CXX_FLAGS}")

find_package(Qt5Widgets REQUIRED)
find_package(Eigen3 REQUIRED)
find_package (PCL  REQUIRED)
find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  sensor_msgs
  std_msgs
  cv_bridge
  pcl_conversions
  pcl_ros
)

catkin_package(
)

###########
## Build ##
###########
include_directories(
# include
  ${catkin_INCLUDE_DIRS}
  ${EIGEN3_INCLUDE_DIR}
  ${Qt5Widgets_INCLUDE_DIRS}
  include/
  include/rostest
)

set(CMAKE_AUTOMOC ON)

add_library(align_mainwindow
        src/main_window.cc
        src/init_sub.cc
        include/rostest/main_window.h
        include/rostest/init_sub.h
        )
target_link_libraries(align_mainwindow 
       ${Qt5Widgets_LIBRARIES} 
       ${catkin_LIBRARIES} 
       ${PCL_LIBRARIES}
)

add_executable(rostest
        src/main.cc
        )
target_link_libraries(rostest 
        align_mainwindow 
        ${PCL_LIBRARIES}
        )