#ifndef BUILDER_H
#define BUILDER_H

#include <string>

class Builder
{
public:
    Builder();

    virtual void set_ram(int ram) = 0;
    virtual void set_size(int brand) = 0;
    virtual void set_brand(std::string brand) = 0;
    virtual void set_processor(std::string processor) = 0;
    virtual void set_generation(int generation) = 0;
    virtual void set_keypadLight(bool keypadLight) = 0;

};

#endif // BUILDER_H
