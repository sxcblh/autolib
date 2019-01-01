cmake_minimum_required(VERSION 2.8.12)

project(samples)

add_executable(hello_opencv hello_opencv.cpp)
target_link_libraries(hello_opencv ${OpenCV_LIBS})