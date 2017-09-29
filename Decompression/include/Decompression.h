#ifndef GOOGLEADVANCEDPATH_DECOMPRESSION_H
#define GOOGLEADVANCEDPATH_DECOMPRESSION_H

#include <string>

std::string decompress(const std::string& inputString);
std::string decompressRecursive(const std::string& currentLeft, std::string::const_iterator& iter);

#endif //GOOGLEADVANCEDPATH_DECOMPRESSION_H
