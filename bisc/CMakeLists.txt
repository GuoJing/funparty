cmake_minimum_required(VERSION 3.5)
project(bisc)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(bisc ${SOURCE_FILES})