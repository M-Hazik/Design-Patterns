#include "sedan.h"

Sedan::Sedan(std::string color, std::string makeNumber)
{
    this->color = color;
    this->makeNumber = makeNumber;
}

Car *Sedan::clone()
{
    return (new Sedan(*this));
}

void Sedan::set_color(std::string color)
{
    this->color = color;
}

std::string Sedan::get_color()
{
    return this->color;
}

void Sedan::set_make_number(std::string makeNumber)
{
    this->makeNumber = makeNumber;
}

std::string Sedan::get_make_number()
{
    return this->makeNumber;
}

void Sedan::get_type()
{
    std::cout<<"Sedan\n";
}
