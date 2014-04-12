
#include "test_bitwalker.h"

void test_poke(unsigned int start,
               unsigned int length,
               Bytestream bytes,
               uint64_t value,
               int expected_code)
{
    // if these conditions are violated then BitWalker_Poke is undefined
    assert(length < 64);
    assert(start < UINT_MAX - length);

    const Bitstream original(bytes.rbegin(), bytes.rend());
    const int exit_code = Bitwalker_Poke(start, length, bytes.data(), bytes.size(), value);
    const Bitstream changed(bytes.rbegin(), bytes.rend());
    Bitstream temp(length);
    const Bitstream max_value = temp.set();

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

