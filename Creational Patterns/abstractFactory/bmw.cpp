#include "bmw.h"

BMW::BMW()
{
    std::cout<<"BMW factory created\n";
}

Vehicles *BMW::build_car()
{
    return new Car();
}

Vehicles *BMW::build_bike()
{
    return new Bike();
}
