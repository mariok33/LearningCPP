#include "factorial.hpp"

#include <iostream>

int calculateFactorial(int number)
{
    int factorial = number;
    if(number >= 0)
    {
        for(int factor = 1; factor < number; ++factor)
        {
            factorial *= factor;
        }
    }
    else
    {
        throw std::out_of_range("Factorial calculator don't caunt negative numbers");
    }

    return factorial;
}