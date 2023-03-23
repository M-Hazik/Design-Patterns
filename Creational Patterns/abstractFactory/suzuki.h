#ifndef SUZUKI_H
#define SUZUKI_H

#include "factory.h"

class SUZUKI : public Factory
{
public:
    SUZUKI();
    Vehicles *build_car();
    Vehicles *build_bike();
};

#endif // SUZUKI_H
