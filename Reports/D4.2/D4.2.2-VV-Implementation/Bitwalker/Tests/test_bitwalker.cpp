
#include "test_bitwalker.h"

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

Bytestream fill_bitstream(const std::string  &buffer)
{
    Bitstream bitstream = Bitstream(buffer);
    Bytestream bytes;
    // Copy bytes to buffer
    boost::to_block_range(bitstream, std::back_inserter(bytes));
    return bytes;
}


uint64_t bin_to_ulong(std::string bitstream)
{
    return Bitstream(bitstream).to_ulong();
}

void test_peek_generic(Bytestream byte)
{
    //testing single Bits
    {
        Bitstream bitstream(byte.rbegin(), byte.rend());

        for(size_t i = 0; i < bitstream.size(); i++)
        {
            try
            {
                test_peek(i, 1, byte, bitstream[bitstream.size() - 1 - i]);
            }
            catch(std::exception& e)
            {
                std::cerr << "ERROR" << e.what() << std::endl;
                std::terminate();
            }
        }
    }
    //testing bitsums
    {
        Bitstream bitstream(byte.rbegin(), byte.rend());

        for(size_t i = 0; i <= bitstream.size(); i++)
        {
            try
            {
                Bitstream sequence(i);

                for(size_t j = 0; j < sequence.size(); j++)
                    sequence[j] = bitstream[bitstream.size() - i + j];

                test_peek(0, i, byte, sequence.to_ulong());
            }
            catch(std::exception& e)
            {
                std::cerr << "ERROR" << e.what() << std::endl;
                std::terminate();
            }
        }
    }
}


void test_peek_param(unsigned int start,
                     unsigned int length,
                     unsigned int  bytestream_size_in_byte,
                     unsigned int value)
{
    Bitstream bitstream(bytestream_size_in_byte * BitsPerByte);
    Bitstream sequence(length, value);

    for(size_t i = 0; i < length; i++)
    {
        bitstream[bitstream.size() - start - length + i] = sequence[i];
    }

    Bytestream bytes(bytestream_size_in_byte);
    boost::to_block_range(bitstream, bytes.rbegin());

    try
    {
        test_peek(start, length, bytes, value);
    }
    catch(std::exception& e)
    {
        std::cerr << "ERROR" << e.what() << std::endl;
        std::terminate();
    }
}

void test_peek()
{
    try
    {
        Bytestream bytes {254 , 7, 13, 9};
        const unsigned int bits = bytes.size() * BitsPerByte;
        test_peek_generic(bytes);

        {
            const unsigned int bits = bytes.size() * BitsPerByte;
            test_peek(0, bits, bytes, 4261874953);

            for(size_t i = 0; i < bytes.size(); ++i)
                test_peek(BitsPerByte * i, BitsPerByte, bytes, bytes[i]);

            for(size_t i = 1; i < bytes.size(); ++i)
                test_peek(BitsPerByte * i, bits, bytes, 0);
        }

        {
            size_t len =  5;
            unsigned int value = 6;
            size_t size = 4;

            for(size_t start = 0; start <= size * BitsPerByte - len; start++)
                test_peek_param(start, len, size, value);
        }

        {
            size_t len =  12;
            unsigned int value = 3025;
            size_t size = 4;

            for(size_t start = 0; start <= size * BitsPerByte - len; start++)
                test_peek_param(start, len, size, value);
        }


        {
            size_t len =  3;
            unsigned int value = 7;
            size_t size = 4;

            for(size_t start = 0; start <= size * BitsPerByte - len; start++)
                test_peek_param(start, len, size, value);
        }

        {
            test_peek( 0, 5, fill_bitstream("11101000"), bin_to_ulong("11101"));
            test_peek(16, 3, bytes, 0);
            test_peek(16, 7, bytes, 6);
            test_peek(20, 4, bytes, 13);
            test_peek(bits, 0, bytes, 0);
            test_peek(0, 0, bytes, 0);


            // testing invalid parameters
            test_peek(0, bits + 1, bytes, 0);
            test_peek(bits, 1, bytes, 0);
        }
    }
    catch(std::exception& e)
    {
        std::cerr << "ERROR" << e.what() << std::endl;
        std::terminate();
    }
}


void test_poke()
{


    Bytestream bytes {254 , 7, 13, 9};
    const unsigned int bits = bytes.size() * BitsPerByte;
    test_poke( 0, bits + 1, bytes, 7, -1);
    test_poke( 0, 1, bytes, 7, -2);
    test_poke( 0, 8, bytes, 0, 0);
    test_poke( 5, 8, bytes, 24, 0);
}



int main()
{
    try
    {
        test_peek();
        test_poke();
    }
    catch(std::exception& e)
    {
        std::cerr << "something happend" << std::endl;
        std::terminate();
    }

    return EXIT_SUCCESS;
}

