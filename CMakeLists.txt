cmake_minimum_required(VERSION 3.15)
project(Bicycle)

set(CMAKE_CXX_STANDARD 14)

set(CMAKE_CXX_FLAGS "-fprofile-arcs -ftest-coverage")

add_executable(Bicycle main.cpp bicycle.h bicycle.cpp)