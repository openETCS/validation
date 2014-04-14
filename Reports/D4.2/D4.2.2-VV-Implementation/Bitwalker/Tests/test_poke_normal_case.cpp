#include "test_bitwalker.h"

void test_poke_normal_case(const Bitstream& original,
                           const Bitstream& changed,
                           const int exit_code,
                           const uint64_t value,
                           const size_t start,
                           const size_t length)
{

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

        for(size_t  i = cpy.size()-start;  i < cpy.size(); i++)
            assert(original[i] == cpy[i]);

        for(size_t  i = cpy.size()-start-length; i < cpy.size()-start; i++)
            assert(changed[i] == cpy[i]);

        for(size_t  i = 0;  i < cpy.size()-start-length; i++)
            assert(original[i] == cpy[i]);
    }
}










