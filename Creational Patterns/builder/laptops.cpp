#include "laptops.h"

Laptops::Laptops()
{
}

void Laptops::setBrand(const std::string &newBrand)
{
    brand = newBrand;
}

void Laptops::setProcessor(const std::string &newProcessor)
{
    processor = newProcessor;
}

void Laptops::setGeneration(int newGeneration)
{
    generation = newGeneration;
}

void Laptops::setRam(int newRam)
{
    ram = newRam;
}

void Laptops::setSize(int newSize)
{
    size = newSize;
}

void Laptops::setKeypadLight(bool newKeypadLight)
{
    keypadLight = newKeypadLight;
}

void Laptops::get_details()
{
    std::cout <<"\n Brand : "<< brand;
    std::cout <<"\n processor : "<< processor;
    std::cout <<"\n generation : "<< generation<<"th";
    std::cout <<"\n ram : "<< ram <<"GB";
    std::cout <<"\n size : "<< size <<"inches";
    std::cout <<"\n keypadLight : "<< keypadLight<<std::endl;

}
