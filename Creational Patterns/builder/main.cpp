#include <iostream>
#include "laptopbuilder.h"

using namespace std;

int main()
{
    LaptopBuilder builder;
    builder.set_brand("DELL");
    builder.set_processor("i9");
    builder.set_generation(9);
    builder.set_ram(16);
    builder.set_size(17);
    builder.set_keypadLight(true);

    Laptops *laptop = builder.get_laptop();
    laptop->get_details();

    return 0;
}
