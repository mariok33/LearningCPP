#include "charToInt.hpp"

#include <string>

int changeCharToInt(char& character)
{
    int returnedChar;
    returnedChar = character - '0';
    return returnedChar;
}