#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>
#include <mutex>

class Singleton
{
public:

    static Singleton *get_instance(std::string name);
    std::string get_name();

private:

    Singleton(std::string name);

    static Singleton *instance;
    std::string name;
    static std::mutex mtx;
};

#endif // SINGLETON_H
