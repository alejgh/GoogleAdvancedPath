#ifndef GOOGLEADVANCEDPATH_CANDIES_H
#define GOOGLEADVANCEDPATH_CANDIES_H

#include <string>
#include <vector>

int distributeCandies(const std::vector<int>& candiesArray);


// used in main to show an example
enum CandieTypes
{
    Lollipop,
    Jelly_Bean,
    Rock_Candy,
    Gummy_Bear,
    Candy_Scoop,
    Candy_Sticks,
    Gum,
    Jawbreaker_Candy,
    Sugar_Free,
    Asian_Candy
};

static const std::string candieNames[] { "Lollipop", "Jelly_Bean", "Rock_Candy", "Gummy_Bear", "Candy_Scoop",
                            "Candy_Sticks", "Gum", "Jawbreaker_Candy", "Sugar_Free", "Asian_Candy"};

std::string getStringFromCandy(int candieType);

#endif //GOOGLEADVANCEDPATH_CANDIES_H
