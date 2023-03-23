#include "abstractfactory.h"

AbstractFactory::AbstractFactory()
{

}

Factory *AbstractFactory::get_factory(std::string factoryName)
{
    if(factoryName == "BMW")
    {
        return new BMW();
    }
    else if(factoryName == "SUZUKI")
    {
        return new SUZUKI();
    }

    return nullptr;
}
