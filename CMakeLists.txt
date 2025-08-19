cmake_minimum_required(VERSION 3.5)
project(Image_convert)

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(Image_convert main.cpp)

target_link_libraries(Image_convert ${OpenCV_LIBS})