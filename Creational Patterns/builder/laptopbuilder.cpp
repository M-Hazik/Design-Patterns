#include "laptopbuilder.h"

LaptopBuilder::LaptopBuilder()
{
    reset();
}

LaptopBuilder::~LaptopBuilder()
{
    delete laptops;
}

void LaptopBuilder::set_ram(int ram)
{
    this->laptops->setRam(ram);
}

void LaptopBuilder::set_size(int size)
{
    this->laptops->setSize(size);
}

void LaptopBuilder::set_brand(std::string brand)
{
    this->laptops->setBrand(brand);
}

void LaptopBuilder::set_processor(std::string processor)
{
    this->laptops->setProcessor(processor);
}

void LaptopBuilder::set_generation(int generation)
{
    this->laptops->setGeneration(generation);
}

void LaptopBuilder::set_keypadLight(bool keypadLight)
{
    this->laptops->setKeypadLight(keypadLight);
}

Laptops *LaptopBuilder::get_laptop()
{
    return this->laptops;
}

void LaptopBuilder::reset()
{
    laptops = new Laptops();
}
