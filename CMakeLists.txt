cmake_minimum_required(VERSION 3.0)

set(SOURCES
    src/Tire.h
    src/Tire.cpp
    src/main.cpp
)

add_definitions(-std=c++11)

add_executable(Tire ${SOURCES})
