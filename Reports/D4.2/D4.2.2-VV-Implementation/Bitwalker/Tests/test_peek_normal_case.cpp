
#include "test_bitwalker.h"

void test_peek_normal_case(const Bitstream& original,
                           const uint64_t value,
                           const size_t start,
                           const size_t length)
{

    if (start + length > original.size())
        assert(value == 0);
    else if (length ==  original.size())
        assert(value == original.to_ulong());
    else
    {
        Bitstream sequence(length);

        for(size_t i = 0; i < sequence.size(); i++)
        {
            size_t pos = (original.size() - start - sequence.size()) + i;
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

