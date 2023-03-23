#ifndef ABSTRACTFACTORY_H
#define ABSTRACTFACTORY_H

#include "factory.h"
#include "bmw.h"
#include "suzuki.h"

class AbstractFactory
{
public:
    AbstractFactory();
    static Factory *get_factory(std::string factoryName);
};

#endif // ABSTRACTFACTORY_H
