#include "sportscar.h"

SportsCar::SportsCar(std::string color, std::string makeNumber)
{
    this->color = color;
    this->makeNumber = makeNumber;
}

Car *SportsCar::clone()
{
    return (new SportsCar(*this));
}

void SportsCar::set_color(std::string color)
{
    this->color = color;
}

std::string SportsCar::get_color()
{
    return this->color;
}

void SportsCar::set_make_number(std::string makeNumber)
{
    this->makeNumber = makeNumber;
}

std::string SportsCar::get_make_number()
{
    return this->makeNumber;
}

void SportsCar::get_type()
{
    std::cout<<"Sports Car\n";
}
