cmake_minimum_required(VERSION 3.10)
project(MemoryManagement)

set(CMAKE_CXX_STANDARD 17)

add_executable(MemoryManagement main.cpp Person.h Person.cpp Resource.cpp Resource.h)