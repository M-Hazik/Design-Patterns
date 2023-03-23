#ifndef VEHICLES_H
#define VEHICLES_H

#include <iostream>

class Vehicles
{
public:
    Vehicles();
    virtual void print_vehicle_type() = 0;
};

#endif // VEHICLES_H
