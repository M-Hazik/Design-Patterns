#include "singleton.h"

Singleton *Singleton::instance = nullptr;

Singleton::Singleton(std::string name)
{
    this->name = name;
}

Singleton *Singleton::get_instance(std::string name)
{
    if(instance == nullptr)
    {
        instance = new Singleton(name);
    }

    return instance;
}

std::string Singleton::get_name()
{
    return this->name;
}
