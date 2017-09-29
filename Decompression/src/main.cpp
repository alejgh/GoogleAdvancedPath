#include "../include/Decompression.h"
#include <iostream>

int main()
{
    std::cout << decompress("2[3[a]b]");
    return 0;
}