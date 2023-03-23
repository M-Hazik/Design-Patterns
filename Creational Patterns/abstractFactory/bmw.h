#ifndef BMW_H
#define BMW_H

#include "factory.h"

class BMW : public Factory
{
public:
    BMW();
    Vehicles *build_car();
    Vehicles *build_bike();
};

#endif // BMW_H
