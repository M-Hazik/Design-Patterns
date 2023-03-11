/**
 *
 *
 *
 * This Is the prototype class.
 *
 *
 * */

#ifndef CAR_H
#define CAR_H

#include <string>

class Car
{
public:
    virtual Car* clone() = 0;

    virtual std::string get_color() = 0;
    virtual void set_color(std::string color) = 0;

    virtual void set_make_number(std::string) = 0;
    virtual std::string get_make_number() = 0;

    virtual void get_type() = 0;
};

#endif // CAR_H
