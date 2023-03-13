#ifndef LAPTOPS_H
#define LAPTOPS_H

#include <string>
#include <iostream>

class Laptops
{
public:
    Laptops();

    void setBrand(const std::string &newBrand);

    void setProcessor(const std::string &newProcessor);

    void setGeneration(int newGeneration);

    void setRam(int newRam);

    void setSize(int newSize);

    void setKeypadLight(bool newKeypadLight);

    void get_details();

protected:
    std::string brand;
    std::string processor;
    int generation;
    int ram;
    int size;
    bool keypadLight;
};

#endif // LAPTOPS_H
