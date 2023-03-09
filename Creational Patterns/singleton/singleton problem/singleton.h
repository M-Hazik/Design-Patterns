#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>


class Singleton
{
public:

    static Singleton *get_instance(std::string name);
    std::string get_name();

private:

    Singleton(std::string name);
    std::string name;

    static Singleton *instance;
};

#endif // SINGLETON_H
