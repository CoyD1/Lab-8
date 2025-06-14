cmake_minimum_required(VERSION 3.10)
project(Task2)

add_executable(task2 main.cpp func2.cpp)

target_include_directories(task2 PRIVATE 
    ${CMAKE_CURRENT_SOURCE_DIR}
)