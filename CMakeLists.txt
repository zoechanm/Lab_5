cmake_minimum_required(VERSION 3.29)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled main.cpp
        problem1.cpp
        problem2.cpp
        problem3.cpp
        problem4.cpp
        problem5.cpp
        problems.cpp
        problem10.cpp)
add_executable(problem5 problem_5.cpp
        problem10.cpp)
