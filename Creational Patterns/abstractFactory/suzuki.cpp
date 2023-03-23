#include "suzuki.h"

SUZUKI::SUZUKI()
{
    std::cout<<"SUZUKI factory created\n";
}

Vehicles *SUZUKI::build_car()
{
    return new Car();
}

Vehicles *SUZUKI::build_bike()
{
    return new Bike();
}
