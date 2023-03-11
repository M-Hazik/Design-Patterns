cmake_minimum_required(VERSION 3.5)

project(prototype LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(prototype main.cpp
    car.h
    sedan.h sedan.cpp
    sportscar.h sportscar.cpp
)
