cmake_minimum_required(VERSION 3.5)

project(naive_singleton LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(naive_singleton main.cpp
               singleton.h singleton.cpp)
