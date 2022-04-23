#include "factorial.hpp"

#include <iostream>

unsigned int calculateFactorial(unsigned int number)
{
    unsigned int factorial = number;
    for(unsigned int factor = 1; factor < number; ++factor)
    {
        factorial *= factor;
    }

    return factorial;
}