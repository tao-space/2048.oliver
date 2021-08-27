cmake_minimum_required(VERSION 3.13) # CMake Version Check
project(2048)
# set(CMAKE_CXX_STANDARD 11) 

set(SOURCES src/main.cpp) # 

add_executable(2048 ${SOURCES})
