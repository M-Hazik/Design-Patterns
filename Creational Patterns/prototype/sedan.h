#ifndef SEDAN_H
#define SEDAN_H

#include "car.h"
#include <iostream>

class Sedan : public Car
{
public:
    Sedan(std::string color, std::string makeNumber);

    Car* clone();

    std::string get_color();
    void set_color(std::string color);

    void set_make_number(std::string);
    std::string get_make_number();

    void get_type();

private:
    std::string color;
    std::string makeNumber;
};

#endif // SEDAN_H
