cmake_minimum_required(VERSION 3.27)
project(cpp_unit_test)

set(CMAKE_CXX_STANDARD 17)

# Include boost
set(Boost_INCLUDE_DIR /opt/boost_1_84_0)
find_package(Boost 1.84.0)
include_directories(${Boost_INCLUDE_DIR})

add_executable(cpp_unit_test main.cpp
        boost_test.cpp
        adder.cpp
        adder.h
)
