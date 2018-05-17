cmake_minimum_required(VERSION 2.8.3)
project(marker_detect)


find_package(OpenCV 3.1 REQUIRED)

find_package(catkin REQUIRED COMPONENTS
  cv_bridge
  geometry_msgs
  message_generation
  message_runtime
  roscpp
  rospy
  sensor_msgs
  std_msgs
  tf
)

include_directories(
  ${catkin_INCLUDE_DIRS}
  "/usr/include/eigen3/"
)


add_executable(marker_detect src/marker_detect.cpp)
target_link_libraries(marker_detect  ${catkin_LIBRARIES}
${OpenCV_LIBS} 
libARToolKitPlus.so)
