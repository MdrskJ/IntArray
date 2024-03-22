cmake_minimum_required(VERSION 3.26)
project(test_struct_and_class)

set(CMAKE_CXX_STANDARD 20)

add_executable(
        test_struct_and_class main.cpp
        IntArray.cpp
        IntArray.h
)
