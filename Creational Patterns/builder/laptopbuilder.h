#ifndef LAPTOPBUILDER_H
#define LAPTOPBUILDER_H

#include "builder.h"
#include "laptops.h"

class LaptopBuilder : public Builder
{
public:
    LaptopBuilder();
    ~LaptopBuilder();

    void set_ram(int ram);
    void set_size(int size);
    void set_brand(std::string brand);
    void set_processor(std::string processor);
    void set_generation(int generation);
    void set_keypadLight(bool keypadLight);
    Laptops *get_laptop();
    void reset();
private :
    Laptops *laptops;
};

#endif // LAPTOPBUILDER_H
