

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
   //for(size_t i = 0; i < 9; ++i)
       //print(10, i);

   std::vector<uint8_t> bytes(4);
   bytes[1] = 13;

   size_t start = 8;
   size_t length = 8;
   for(size_t i = 0; i < length; ++i)
   {
      size_t pos = start + i;
      size_t byte_index = pos/8;
      size_t bit_index = 7 - (pos % 8);
      uint8_t shift = bytes[byte_index] >> bit_index;
      std::cout << (shift & 1);
      /*
      std::cout << byte_index << "\t" 
                << bit_index << "\t" 
                << (shift & 1) << "\t" 
                << std::endl;
      */
   }
   std::cout << std::endl;
}

