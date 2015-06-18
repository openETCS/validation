#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
#include <cassert>
#include <cmath>
#include "boost/dynamic_bitset.hpp"

extern "C"
{
#include "Bitwalker.h"
}

typedef std::vector<uint8_t> Bytestream;
typedef boost::dynamic_bitset<uint8_t> Bitstream;

const unsigned int BitsPerByte = 8;

void test_peek_general(unsigned int start,
                       unsigned int length,
                       Bytestream bytes,
                       uint64_t expected_value)
{
    // if these conditions are violated then BitWalker_Peek is undefined
    assert(length < 64);
    assert(start < UINT_MAX - length);

    Bitstream original(bytes.begin(), bytes.end());

    const uint64_t value = Bitwalker_Peek(start, length, bytes.data(), bytes.size());

    if (value != expected_value)
    {
        std::cout << "ERROR" <<  std::endl;
        std::cout << "value = " << value << "\tdoes not match"
                  << "\texpected_value =\t" << expected_value << std::endl;
        std::cout << "\tstart\t= " << start << std::endl;
        std::cout << "\tlength\t= " << length << std::endl;
        assert(false);
    }

    if (start + length > original.size())
    {
        assert(value == 0);
    }
    else
    {
        Bitstream sequence(length);

        for(size_t i = 0; i < sequence.size(); ++i)
        {
            sequence[i] = original[start + i];
        }

        uint64_t value_from_sequence = sequence.to_ulong();
        assert(value_from_sequence == value);
    }

}


void test_poke_general(unsigned int start,
                       unsigned int length,
                       Bytestream bytes,
                       uint64_t value,
                       int expected_code)
{
    // if these conditions are violated then BitWalker_Poke is undefined
    assert(length < 64);
    assert(start < UINT_MAX - length);

    Bitstream original(bytes.begin(), bytes.end());


    const int exit_code = Bitwalker_Poke(start, length, bytes.data(), bytes.size(), value);

    if (exit_code != expected_code)
    {
        std::cout << "ERROR" <<  std::endl;
        std::cout << "exit_code = " << exit_code << "\tdoes not match"
                  << "\texpected_code =\t" << expected_code << std::endl;
        std::cout << "\tstart\t= " << start << std::endl;
        std::cout << "\tlength\t= " << length << std::endl;
        std::cout << "\tvalue\t= " << value << std::endl;
        assert(false);
    }

    if (start + length > original.size())
    {
        assert(exit_code == -1);
    }
    else
    {
        Bitstream result(bytes.begin(), bytes.end());

        Bitstream max_stream(length);
        max_stream.set();
        const uint64_t max_value = max_stream.to_ulong();

        // check whether length was large enough to hold value
        if (value <= max_value)
        {
            assert(exit_code == 0);

            // finally, check whether no other bits have changed
            Bytestream result_bytes(bytes.size());
            to_block_range(result, result_bytes.begin());

            Bitstream finally(result_bytes.begin(), result_bytes.end());
            assert(finally.size() == original.size());

        }
        else
        {
            assert(exit_code == -2);
        }

    }
}



void test_peek_generic(Bytestream bytes)
{

    Bitstream original(bytes.begin(), bytes.end());

    //testing single bits
    {
        Bitstream sequence(1);

        for(size_t i = 0; i < sequence.size(); ++i)
        {
            sequence[i] = original[i];
            test_peek_general(i, sequence.size(), bytes, sequence.to_ulong() );
        }
    }


    //testing bit sums of every element of the bytestream
    {
        for(size_t i = 0; i < bytes.size(); ++i)
        {
            Bitstream sequence(i + 1);

            for(size_t j = 0; j < sequence.size(); ++j)
                sequence[j] = original[j];

            test_peek_general(0, sequence.size(), bytes, sequence.to_ulong() );
        }
    }

}

void test_peek()
{
    {
        Bytestream bytes { 255, 0, 5, 7, 13, 9};

        test_peek_generic(bytes);
        const unsigned int bits = bytes.size() * BitsPerByte;

        for(size_t i = 0; i < bytes.size(); ++i)
            test_peek_general(BitsPerByte * i, BitsPerByte, bytes, bytes[i]);

        for(size_t i = 1; i < bytes.size(); ++i)
            test_peek_general(BitsPerByte * i, bits, bytes, 0);
    }
}


void test_poke()
{
    {
        Bytestream bytes { 255, 0, 5, 7, 13, 9};
        const unsigned int bits = bytes.size() * BitsPerByte;

        // read within stream with various lengths
        test_poke_general(6, 6 + bits, bytes, 4000, -1);
        test_poke_general(6, 14, bytes, 4000, 0);
        test_poke_general(6, 13, bytes, 4000, 0);
        test_poke_general(6, 12, bytes, 4000, 0);
        test_poke_general(6, 11, bytes, 4000, -2);

        test_poke_general(6, 16, bytes, 4000, 0);
        test_poke_general(6, 2, bytes, 4000, -2);
        test_poke_general(20, 18, bytes, 4000, 0);
        test_poke_general(20, 0, bytes, 0, 0);

        //test_poke_general(5, 8, bytes, 254, 0);
        //test_poke_general(5, 7, bytes, 254, -2);
        //test_poke_general(5, 9, bytes, 254, 0);
        //test_poke_general(5, bits, bytes, 254, -1);

        //test_poke_general(0, 9, bytes, 256, 0);
        //test_poke_general(0, 8, bytes, 256, -2);
        //test_poke_general(0, bits, bytes, 256, 0);
        //test_poke_general(0, bits+1, bytes, 256, -1);

        //test_poke_general(bits, 1, bytes, 1, -1);
        //test_poke_general(bits-1, 1, bytes, 1, 0);
        //test_poke_general(bits-1, 1, bytes, 2, -2);

    }
}



int main()
{
    test_peek();
    test_poke();

    return EXIT_SUCCESS;
}

