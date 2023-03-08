#include "singleton.h"

Singleton *Singleton::instance = nullptr;

Singleton::Singleton()
{
    std::cout << "Creating instance :" << instance;
}

Singleton *Singleton::get_instance()
{
    if(instance == nullptr)
    {
        instance = new Singleton();
    }

    return instance;
}
