
#include "test_bitwalker.h"

void test_peek_general(unsigned int start,
                       unsigned int length,
                       Bytestream bytes,
                       uint64_t expected_value)
{
    // if these conditions are violated then BitWalker_Peek is undefined
    if (length >= 64)
    {
        std::stringstream msg;
        msg << "length = " << length << " is expected to be less than 64";
        throw std::logic_error(msg.str());
    }

    if (start >= UINT_MAX - length)
    {
        std::stringstream msg;
        msg << "start = " << start << " is expected to be less than " << UINT_MAX - length;
        throw std::logic_error(msg.str());
    }

    const uint64_t value = Bitwalker_Peek(start, length, bytes.data(), bytes.size());
    Bitstream original(bytes.rbegin(), bytes.rend());

    if (value != expected_value)
    {
        std::stringstream msg;
        msg << std::endl;
        msg << "value = " << value << std::endl;
        msg << "does not match" << std::endl;
        msg << "expected_value = " << expected_value << std::endl;
        msg << "start = " << start << std::endl;
        msg << "length = " << length << std::endl;
        msg << "byte array = " << bytes << std::endl;

        throw std::runtime_error(msg.str());
    }

    if (start + length > original.size())
        assert(value == 0);
    else if (length ==  original.size())
        assert(value == original.to_ulong());
    else
    {
        Bitstream sequence(length);

        for(size_t i = 0; i < sequence.size(); i++)
        {
            size_t pos = (original.size() - start - length) + i;
            sequence[i] = original[pos];

        }

        uint64_t value_from_sequence = sequence.to_ulong();

        if(value_from_sequence != value)
        {
            std::cout << "ERROR" <<  std::endl;
            std::cout << "value = " << value << "\tdoes not match"
                      << "\tvalue_from_sequence =\t" << value_from_sequence << std::endl;
            assert(false);
        }
    }
}
