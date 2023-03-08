#ifndef SINGLETON_H
#define SINGLETON_H

#include <iostream>


class Singleton
{
public:

    static Singleton *get_instance();

private:

    Singleton();

    static Singleton *instance;
};

#endif // SINGLETON_H
