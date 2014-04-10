
#include <vector>
#include <iostream>
#include "boost/lexical_cast.hpp"

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

    for(size_t i = 0; i < length; ++i)
    {
        size_t pos = start + i;
        std::cout << i << "\t" << pos << "\t" << (pos >> 3) << std::endl;
    }

}
