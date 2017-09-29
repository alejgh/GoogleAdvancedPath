#include "Decompression.h"
#define BOOST_TEST_MODULE DecompressionTest
#include <boost/test/unit_test.hpp>

using namespace boost::unit_test_framework;

BOOST_AUTO_TEST_CASE(SimpleTest)
{
    BOOST_CHECK(decompress("") == "");
    BOOST_CHECK(decompress("10[a]") == "aaaaaaaaaa");
    BOOST_CHECK(decompress("2[3[a]b]") == "aaabaaab");
    BOOST_CHECK(decompress("3[abc]3[ab]c") == "abcabcabcabababc");
    BOOST_CHECK(decompress("2[3[4[bd]2[c]e]ac]c") ==
                        "bdbdbdbdccebdbdbdbdccebdbdbdbdcceacbdbdbdbdccebdbdbdbdccebdbdbdbdcceacc");
}