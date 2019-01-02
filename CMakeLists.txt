cmake_minimum_required(VERSION 3.1.0)
project(autolib)

set(CMAKE_CXX_STANDARD 14)
set(EXTERNAL_PATH ${PROJECT_SOURCE_DIR}/3rdparty)

set(OpenCV_DIR ${EXTERNAL_PATH}/opencv/lib/cmake/opencv4)
find_package(OpenCV 4 REQUIRED)
message(STATUS "OpenCV_VERSION: ${OpenCV_VERSION}")

set(Eigen3_DIR ${EXTERNAL_PATH}/eigen/share/eigen3/cmake)
set(Gflags_DIR ${EXTERNAL_PATH}/gflags/lib/cmake/gflags)
set(Glog_DIR ${EXTERNAL_PATH}/glog/lib/cmake/glog)
set(PCL_DIR ${EXTERNAL_PATH}/pcl/share/pcl-1.9)
set(VTK_DIR ${EXTERNAL_PATH}/vtk/lib/vtk-8.2)
#set(Ceres_DIR ${EXTERNAL_PATH}/ceres/lib/cmake/Ceres)

find_package(Eigen3 REQUIRED)
find_package(Gflags REQUIRED)
find_package(Glog REQUIRED)
find_package(PCL REQUIRED)
find_package(VTK REQUIRED)
#find_package(Ceres REQUIRED)

include_directories(${EIGEN3_INCLUDE_DIR} ${GFLAGS_INCLUDE_DIR} ${GLOG_INCLUDE_DIR}
    ${VTK_INCLUDE_DIR} ${PCL_INCLUDE_DIR}
)

set(COMMON_LIBS ${OpenCV_LIBS} ${GLOG_LIBRARIES} ${PCL_LIBRARIES} ${CERES_LIBRARIES})

add_subdirectory(samples)