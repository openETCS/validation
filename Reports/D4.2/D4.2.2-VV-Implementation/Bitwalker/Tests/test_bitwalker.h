
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

typedef std::vector<uint8_t> Bytestream;
typedef boost::dynamic_bitset<uint8_t> Bitstream;

std::ostream& operator<<(std::ostream& stream, const Bytestream& bytes);


void test_peek_normal_case(const Bitstream& original,
                           const uint64_t value,
                           const size_t start,
                           const size_t length);

void test_peek(unsigned int start,
               unsigned int length,
               Bytestream bytes,
               uint64_t expected_value);

void test_poke_normal_case(const Bitstream& original,
                           const Bitstream& changed,
                           const int exit_code,
                           const uint64_t value,
                           const size_t start,
                           const size_t length);

void test_poke(unsigned int start,
               unsigned int length,
               Bytestream bytes,
               uint64_t value,
               int expected_code);

#endif
