cmake_minimum_required(VERSION 3.5)

project(FactoryMethod LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    FactoryMethod main.cpp
    vehicles.h vehicles.cpp
    aeroplane.h aeroplane.cpp
    car.h car.cpp
    bike.h bike.cpp
    vehiclefactory.h vehiclefactory.cpp
)
