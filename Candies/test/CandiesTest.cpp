#include "Candies.h"
#define BOOST_TEST_MODULE test candies distribution
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(SimpleTest)
{
    std::vector<int> candies{1,1,2,2,3,3};
    BOOST_CHECK(distributeCandies(candies) == 3);
    candies = {1,1,2,3};
    BOOST_CHECK(distributeCandies(candies) == 2);
    candies = {3,1,2,1};
    BOOST_CHECK(distributeCandies(candies) == 2);
    candies = {1,1};
    BOOST_CHECK(distributeCandies(candies) == 1);
    candies = {-15, 0, 15, 2, 2, 15, 0, 0, -15, -15};
    BOOST_CHECK(distributeCandies(candies) == 4);
    candies = {1,1,1,1,1,1,1,1,1,1};
    BOOST_CHECK(distributeCandies(candies) == 1);
}