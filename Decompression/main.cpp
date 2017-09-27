#include <iostream>

const std::string test1 = "3[abc]4[ab]";
const std::string test2 = "10[a]";
const std::string test3 = "2[3[a]b]";

std::string decompress(const std::string& inputString);
std::string decompressRecursive(const std::string& currentLeft, std::string::const_iterator& iter);

int main()
{
    std::cout << decompress(test3);
    return 0;
}

std::string decompress(const std::string& inputString)
{
    auto iter = inputString.begin();
    return decompressRecursive(inputString, iter);
}

std::string decompressRecursive(const std::string& inputString, std::string::const_iterator& iter)
{
    std::string returnString = "";
    while(iter != inputString.end())
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
        else if(ch == ']')
            return returnString;

        iter++;
    }
    return returnString;
}