cmake_minimum_required(VERSION 2.8.12)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

project(autolib)

set(OpenCV_DIR /home/chris/projects/autolib/3rdparty/opencv/lib/cmake/opencv4)
find_package(OpenCV 4 REQUIRED)
message(STATUS "OpenCV_VERSION: ${OpenCV_VERSION}")

add_subdirectory(samples)