#ifndef VEHICLEFACTORY_H
#define VEHICLEFACTORY_H

#include "car.h"
#include "bike.h"
#include "aeroplane.h"

class VehicleFactory
{
public:
    static Vehicles *build_vehicle(std::string vehicleType);
};

#endif // VEHICLEFACTORY_H
