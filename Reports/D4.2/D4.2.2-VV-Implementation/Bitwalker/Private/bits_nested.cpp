
#include <vector>
#include <iostream>
#include <cmath>
#include "boost/lexical_cast.hpp"

static const uint8_t BitwalkerBitMaskTable[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};

int main(int argc, char** argv)
{
    assert(argc == 3);

    const size_t start = boost::lexical_cast<size_t>(argv[1]);
    const size_t length = boost::lexical_cast<size_t>(argv[2]);
    const size_t size = start + length;

    std::cout << "start  = " << start << std::endl;
    std::cout << "length = " << length << std::endl;

    std::vector<uint8_t> bytes(size);
    std::cout << "bit stream size = " << 8 * bytes.size() << std::endl;

    for(size_t byte_index = start/8; byte_index <= (start + length)/8; ++byte_index)
    {
        const uint8_t byte = bytes[byte_index];
        for(size_t bit_index = start
        size_t i = pos - start;
        std::cout << i << "\t"
                  << pos << "\t"
                  << (pos >> 3) << "\t"
                  << (pos / 8) << "\t"
                  << (pos & 0x07) << "\t"
                  << int(BitwalkerBitMaskTable[pos & 0x07]) << "\t"
                  << log2(int(BitwalkerBitMaskTable[pos & 0x07])) << "\t"
                  << 7 - (pos % 8) << "\t"
                  << std::endl;
    }

    return EXIT_SUCCESS;

}
