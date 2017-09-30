#include "Candies.h"

#include <cassert>
#include <unordered_set>


int distributeCandies(const std::vector<int>& candiesArray)
{
    assert(candiesArray.size() % 2 == 0);

    std::unordered_set<int> differentCandyTypes;
    for (int candyType : candiesArray)
        differentCandyTypes.insert(candyType);

    int maxCandiesForTheSister = candiesArray.size() / 2;
    return differentCandyTypes.size() < maxCandiesForTheSister ? differentCandyTypes.size() : maxCandiesForTheSister;

}

std::string getStringFromCandy(int candieType)
{
    return candieNames[candieType];
}