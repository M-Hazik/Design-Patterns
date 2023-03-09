/**
 *
 * Singletons are not thread safe.
 *
 * Hypothaticaly, the instnces in functions thread_1 and thread_2
 * should return same name but they dont. Their behaviour is unpredictable.
 *
 * The code demonstrates the problem of singletons in multi-threaded application.
 *
 *
 **/


#include <iostream>
#include <thread>
#include <chrono>
#include "singleton.h"

void thread_1()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton *instance = Singleton::get_instance("obj-1 ");
    std::cout<<instance->get_name()<<"\n";
}

void thread_2()
{
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    Singleton *instance = Singleton::get_instance("obj-2 ");
    std::cout<<instance->get_name()<<"\n";
}

int main()
{
    std::thread t1(thread_1);
    std::thread t2(thread_2);

    t1.join();
    t2.join();


    return 0;
}
