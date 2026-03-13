#include "../include/animal.h"

namespace Inheritance
{
    Animal::Animal()
    {
        name = "default name";
    }

    std::string Animal::Name()
    {
        return name;
    }
}