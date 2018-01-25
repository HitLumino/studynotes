cmake_minimum_required(VERSION 2.8.3)
project(tailimage)

set( CMAKE_BUILD_TYPE Debug )
set( CMAKE_CXX_FLAGS "-std=c++11 -O3" )

# opencv 
find_package( OpenCV REQUIRED )
include_directories( ${OpenCV_INCLUDE_DIRS} )

add_executable( tailimage tailimage.cpp )
target_link_libraries( tailimage ${OpenCV_LIBS} )
