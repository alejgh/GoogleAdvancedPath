#include "Candies.h"

#include <iostream>


int main()
{
    std::vector<int> candies{Lollipop, Asian_Candy, Sugar_Free, Jawbreaker_Candy, Asian_Candy,
                             Sugar_Free, Sugar_Free, Asian_Candy, Jawbreaker_Candy, Lollipop};

    std::cout << "Kinds of candies we have:\n";
    for (std::vector<int>::iterator iter = candies.begin(); iter != candies.end(); iter++)
    {
        std::cout << getStringFromCandy(*iter);
        if (iter == candies.end() - 1)
            std::cout << '\n';
        else
            std::cout << ", ";
    }

    int candieTypes = distributeCandies(candies);
    std::cout << "\nMaximum different kinds of candies for the sister: " << candieTypes << std::endl;
    return 0;
}