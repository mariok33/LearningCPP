#include "stringToInt.hpp"

#include <string>

int changeStringToInt(std::string phrase)
{
    int returnedChar {0};
    for(const auto& c : phrase)
    {
        returnedChar = returnedChar * 10 + (c - '0');
    }
    return returnedChar;
}