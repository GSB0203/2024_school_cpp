cmake_minimum_required(VERSION 3.27)
project(Chapter1)

set(CMAKE_CXX_STANDARD 17)

add_executable(Chapter1 stringIO.cpp
        functionOverloading.cpp
        Quiz_swap.cpp)

add_executable(functionOverloading functionOverloading.cpp)
add_executable(Quiz_swap Quiz_swap.cpp)