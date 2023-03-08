#include <iostream>
#include "singleton.h"

int main()
{

    std::cout << "called 1st time!" << Singleton::get_instance() <<std::endl;
    std::cout << "called 2nd time!" << Singleton::get_instance() <<std::endl;
    std::cout << "called 3rd time!" << Singleton::get_instance() <<std::endl;
    std::cout << "called 4th time!" << Singleton::get_instance() <<std::endl;

    return 0;
}
