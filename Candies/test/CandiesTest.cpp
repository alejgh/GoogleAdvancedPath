#include "Candies.h"
#define BOOST_TEST_MODULE test candies distribution
#include <boost/test/included/unit_test.hpp>

BOOST_AUTO_TEST_CASE(SimpleTest)
{
    BOOST_CHECK(distributeCandies({1, 1, 2, 2, 3, 3}) == 3);
    BOOST_CHECK(distributeCandies({1, 1, 2, 3}) == 2);
    BOOST_CHECK(distributeCandies({3, 1, 2, 1}) == 2);
    BOOST_CHECK(distributeCandies({1,1}) == 1);
    BOOST_CHECK(distributeCandies({-15, 0, 15, 2, 2, 1, 0, 0, -15, -15}) == 4);
}