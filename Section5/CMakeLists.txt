cmake_minimum_required(VERSION 3.24)
project(Section5)

set(CMAKE_CXX_STANDARD 17)

add_executable(Section5 without_namespace.cpp)
add_executable(Section5_1 using_namespace.cpp)
add_executable(Section5_2 using_qualified_namespace.cpp)
add_executable(Section5_3 Basic_Output.cpp)
add_executable(Section5_4 Basic_Input.cpp)
