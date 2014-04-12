
#ifndef test_bitwalker_h_included
#define test_bitwalker_h_included

#include <cassert>
#include <cmath>
#include <algorithm>
#include <iterator>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <exception>
#include "boost/dynamic_bitset.hpp"
#include "boost/utility.hpp"

extern "C"
{
#include "Bitwalker.h"
}

const unsigned int BitsPerByte = 8;

typedef boost::dynamic_bitset<unsigned char> Bitset;
typedef std::vector<uint8_t> Bytestream;
typedef boost::dynamic_bitset<uint8_t> Bitstream;

inline
std::ostream& operator<<(std::ostream& stream, const Bytestream& bytes)
{
    stream << '(';

    for(auto i = bytes.begin(); i != bytes.end(); ++i)
    {
        stream << int(*i);

        if (boost::next(i) != bytes.end())
        {
            stream << ", ";
        }
    }

    stream << ')';
    return stream;
}


void test_peek_general(unsigned int start,
                       unsigned int length,
                       Bytestream bytes,
                       uint64_t expected_value);

#endif
