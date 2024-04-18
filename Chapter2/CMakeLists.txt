cmake_minimum_required(VERSION 3.27)
project(Chapter2)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chapter2 Reference.cpp
        Reference.cpp)

add_executable(Reference Reference.cpp)
add_executable(Reference2 Reference2.cpp)