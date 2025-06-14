cmake_minimum_required(VERSION 3.10.0)
project(lab8 VERSION 0.1.0 LANGUAGES C CXX)

find_package(OpenCV REQUIRED)
find_package(OpenSSL REQUIRED)

add_subdirectory(task1)
add_subdirectory(task2)
add_subdirectory(task3)