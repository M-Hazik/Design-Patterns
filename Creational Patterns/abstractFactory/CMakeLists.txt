cmake_minimum_required(VERSION 3.5)

project(abstractFactory LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(abstractFactory main.cpp
vehicles.h vehicles.cpp
car.h car.cpp
bike.h bike.cpp
bmw.h bmw.cpp
suzuki.h suzuki.cpp
factory.h factory.cpp
abstractfactory.h abstractfactory.cpp
)
