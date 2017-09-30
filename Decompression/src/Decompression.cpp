#include "Decompression.h"

std::string decompress(const std::string& inputString)
{
    auto iter = inputString.begin();
    return decompressRecursive(inputString, iter);
}

std::string decompressRecursive(const std::string& inputString, std::string::const_iterator& iter)
{
    std::string returnString = "";
    while(iter != inputString.end() && *iter != ']')
    {
        const char& ch = *iter;
        if(isalpha(ch))
            returnString += ch;
        else if (isdigit(ch))
        {
            std::string number = "";
            do
            {
                char digit = *iter;
                number += digit;
                iter++;
            }while (isdigit(*iter));

            std::string stringInsideBrackets = decompressRecursive(inputString, iter);
            int bracketsMultiplier = stoi(number);
            for (int i = 0; i < bracketsMultiplier; i++)
                returnString += stringInsideBrackets;
        }

        iter++;
    }
    return returnString;
}