cmake_minimum_required(VERSION 3.5)

project(singleton_problem LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(singleton_problem main.cpp
               singleton.h singleton.cpp)
