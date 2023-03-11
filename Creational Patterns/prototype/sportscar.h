#ifndef SPORTSCAR_H
#define SPORTSCAR_H

#include "car.h"
#include <iostream>

class SportsCar : public Car
{
public:
    SportsCar(std::string color, std::string makeNumber);

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

#endif // SPORTSCAR_H
