cmake_minimum_required(VERSION 3.26)
project(Public_Transport)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Public_Transport
        main.cpp
        mainclass.h
        tasks.txt
        taxi.h)
