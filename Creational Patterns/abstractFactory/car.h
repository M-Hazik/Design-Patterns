#ifndef CAR_H
#define CAR_H

#include "vehicles.h"

class Car : public Vehicles
{
public:
    Car();
    void print_vehicle_type();
};

#endif // CAR_H
