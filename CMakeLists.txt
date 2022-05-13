cmake_minimum_required(VERSION 3.21)
project(LCFULL)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20 -fopenmp")
set(SOURCE_FILES main.cpp src/array/LC1260.h src/tree/LC700.h src/design/LC225.h src/array/nsums/LC1.h src/array/LC1209.h src/linklist/LC117.h)

add_executable(LCFULL model/linkedlist.h src/linklist/LC21.h src/linklist/LC82.h src/linklist/LC141.h ${SOURCE_FILES})
