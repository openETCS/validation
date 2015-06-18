
#include "test_bitwalker.h"

void test_poke(unsigned int start,
               unsigned int length,
               Bytestream bytes,
               uint64_t value,
               int expected_code)
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

    const Bitstream original(bytes.rbegin(), bytes.rend());
    const int exit_code = Bitwalker_Poke(start, length, bytes.data(), bytes.size(), value);

    if (exit_code != expected_code)
    {
        msg << std::endl;
        msg << "exit_code = " << exit_code << std::endl;
        msg << "does not match" << std::endl;
        msg << "expected_code = " << expected_code << std::endl;
        msg << "start = " << start << std::endl;
        msg << "length = " << length << std::endl;
        msg << "value = " << value << std::endl;
        msg << "byte array = " << bytes << std::endl;
        throw std::runtime_error(msg.str());
    }

    const Bitstream changed(bytes.rbegin(), bytes.rend());
    test_poke_normal_case(original, changed, exit_code, value, start, length);
}

