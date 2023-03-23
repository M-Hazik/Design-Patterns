#include "vehiclefactory.h"

Vehicles *VehicleFactory::build_vehicle(std::string vehicleType)
{
    Vehicles *vehicle = nullptr;

    if(vehicleType == "car")
    {
        vehicle = new Car();
    }
    else if(vehicleType == "bike")
    {
        vehicle = new Bike();
    }
    else if(vehicleType == "aeroplane")
    {
        vehicle = new Aeroplane();
    }

    return vehicle;
}
