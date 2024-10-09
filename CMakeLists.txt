cmake_minimum_required(VERSION 3.29)
project(lab2)

set(CMAKE_CXX_STANDARD 17)

add_executable(lab2 main.cpp
        Employee.cpp
        Employee.h
        Developer.cpp
        Developer.h
        TeamLeader.cpp
        TeamLeader.h)
