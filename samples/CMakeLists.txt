cmake_minimum_required(VERSION 3.1.0)

project(samples)

add_executable(hello_opencv hello_opencv.cpp)
target_link_libraries(hello_opencv ${OpenCV_LIBS})

add_executable(hello_gflags hello_gflags.cpp)
target_link_libraries(hello_gflags ${GFLAGS_LIBRARIES})

add_executable(hello_glog hello_glog.cpp)
target_link_libraries(hello_glog ${GLOG_LIBRARY})

add_executable(hello_eigen hello_eigen.cpp)

add_executable(hello_pcl hello_pcl.cpp)
target_link_libraries(hello_pcl ${PCL_LIBRARIES})