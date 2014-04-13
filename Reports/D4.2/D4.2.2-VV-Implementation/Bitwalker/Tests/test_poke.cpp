
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

    Bitstream max_value(length);
    max_value.set();

    if (start + length > original.size())
    {
        assert(original == changed);
        assert(exit_code == -1);
    }
    else if(value > max_value.to_ulong())
    {
        assert(original == changed);
        assert(exit_code == -2);
    }
    else
    {
        Bitstream sequence(length, value);
        Bitstream cpy = original;

        for(size_t i = 0; i < sequence.size(); i++)
        {
            size_t pos = (cpy.size() - start - length) + i;
            cpy[pos] = sequence[i];
        }

        assert(cpy == changed);
        assert(exit_code == 0);

        for(int  i = cpy.size() - 1 ;  i > (int)(cpy.size() - start); i--)
            assert(original[i] == cpy[i]);

        for(int  i = cpy.size() - 1 - start; i > (int) (cpy.size() - start - length); i--)
            assert(changed[i] == cpy[i]);

        for(int  i = cpy.size() - start - length ;  i >= 0; i--)
            assert(original[i] == cpy[i]);
    }
}

