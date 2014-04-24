
#include "test_bitwalker.h"

void test_peek(unsigned int start,
               unsigned int length,
               Bytestream bytes,
               uint64_t expected_value)
{
    std::stringstream msg;

    if (length >= 64)
    {
        msg << "length = " << length << " must be less than 64";
        throw std::logic_error(msg.str());
    }

    if (start >= UINT_MAX - length)
    {
        msg << "start = " << start << " must be less than " << UINT_MAX - length;
        throw std::logic_error(msg.str());
    }

    const uint64_t value = Bitwalker_Peek(start, length, bytes.data(), bytes.size());
    Bitstream original(bytes.rbegin(), bytes.rend());

    if (value != expected_value)
    {
        msg << std::endl;
        msg << "value = " << value << std::endl;
        msg << "does not match" << std::endl;
        msg << "expected_value = " << expected_value << std::endl;
        msg << "start = " << start << std::endl;
        msg << "length = " << length << std::endl;
        msg << "byte array = " << bytes << std::endl;
        throw std::runtime_error(msg.str());
    }

    test_peek_normal_case(original, value, start, length);
}

