cmake_minimum_required(VERSION 3.5)

project(thread-safe_singleton LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(thread-safe_singleton main.cpp
               singleton.h singleton.cpp)
