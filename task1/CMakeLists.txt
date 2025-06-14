cmake_minimum_required(VERSION 3.10)
project(Task1)

add_executable(task1 main.cpp func1.cpp)

target_include_directories(task1 PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)