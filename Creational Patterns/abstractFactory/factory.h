#ifndef FACTORY_H
#define FACTORY_H

#include "vehicles.h"
#include "bike.h"
#include "car.h"

class Factory
{
public:
    Factory();
    virtual Vehicles *build_car() = 0;
    virtual Vehicles *build_bike() = 0;

};

#endif // FACTORY_H
