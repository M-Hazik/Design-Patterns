/**
 *
 *
 * Desgin Pattern : Factory Method
 *
 *
 */


#include <iostream>
#include "vehiclefactory.h"

int main()
{
    Vehicles *vehicle = nullptr;
    std::string vehicleType;

    std::cout<< "Type of vehicle : ";
    std::cin >> vehicleType;

    vehicle = VehicleFactory::build_vehicle(vehicleType);

    if(vehicle != nullptr)
    {
        vehicle->create_vehicles();
    }

    return 0;
}
