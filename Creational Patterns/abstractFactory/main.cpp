/**
 *
 * Design Pattern: Abstract Factory
 *
 *
 */


#include <iostream>
#include "abstractfactory.h"
using namespace std;

int main()
{
    Factory* fact = nullptr;
    Vehicles* vehicle = nullptr;

    fact = AbstractFactory::get_factory("BMW");

    if(fact)
    {
        vehicle = fact->build_car();
        std::cout<<"The type of vehicle created is : ";
        vehicle->print_vehicle_type();
    }

    fact = AbstractFactory::get_factory("SUZUKI");

    if(fact)
    {
        vehicle = fact->build_bike();
        std::cout<<"The type of vehicle created is : ";
        vehicle->print_vehicle_type();
    }

    return 0;
}
