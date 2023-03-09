#include "singleton.h"

Singleton *Singleton::instance = nullptr;
std::mutex Singleton::mtx;

Singleton::Singleton(std::string name)
{
    this->name = name;
}

Singleton *Singleton::get_instance(std::string name)
{
    mtx.lock();

    if(instance == nullptr)
    {
        instance = new Singleton(name);
    }

    mtx.unlock();
    return instance;
}

std::string Singleton::get_name()
{
    return this->name;
}
