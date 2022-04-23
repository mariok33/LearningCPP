#include <algorithm>
#include <cctype>
#include <deque>
#include <iostream>
#include <string>
#include <vector>

#include "palindrome.hpp"

bool isPalindrome(const std::string& phrase)
{
    std::deque<char> phraseSecond;
    for (char c : phrase)
    {
        if (std::isalpha(c))
            phraseSecond.push_back(std::toupper(c)); 
    }

    char first{};
    char last{};

    while(phraseSecond.size() > 1)
    {
        first = phraseSecond.front();
        last = phraseSecond.back();

        phraseSecond.pop_front();
        phraseSecond.pop_back();

        if(first != last)
        {
            return false;
        }    
    }

    return true;
}