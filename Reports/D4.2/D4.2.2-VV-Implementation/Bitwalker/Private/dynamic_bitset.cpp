

#include "boost/dynamic_bitset.hpp"
#include <iostream>

void print(size_t width, size_t value)
{
    boost::dynamic_bitset<uint8_t>b (width, value);
    std::cout << width << "\t"
              << value << "\t"
              << b     << "\t"
              << b.to_ulong()  << "\t"
              << std::endl;
}

int main()
{
   for(size_t i = 0; i < 16; ++i)
       print(6, i);
}

