
#include "Bitwalker.h"
#include <stdio.h>

int main()
{
    unsigned int Startposition = 8;
    unsigned int Length = 32;
    uint8_t Bitstream[] = {254, 7, 13, 9};
    unsigned int BitstreamSizeInBytes = 4;

    uint64_t result = Bitwalker_Peek(Startposition, Length, Bitstream, BitstreamSizeInBytes);

    printf("result = %lu\n", result);

}

