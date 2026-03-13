#include <iostream>

#include "include/animal.h"

int main()
{
    std::cout << "asdf" << std::endl;

    Inheritance::Animal* animal = new Inheritance::Animal();
    std::cout << animal->Name() << std::endl;

    return 0;
}