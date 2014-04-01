#include "Bitwalker.h"


uint64_t Bitwalker_Peek (unsigned int Startposition, unsigned int Length,
                         uint8_t* Bitstream, unsigned int BitstreamSizeInBytes)
{
    // plausibility check: is last byte in range
    if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
        return 0;   // index out of range

    // Everything ok, we can iterate bitwise
    uint64_t retval = 0;

    unsigned int i;

    for (i = Startposition; i < Startposition + Length; i++)
    {
        uint8_t CurrentValue = Bitstream[i >> 3] & BitwalkerBitMaskTable[i & 0x07];

        retval = (retval << 1) + (uint8_t)(CurrentValue != 0);
        // conversion bool to int (Zero or One):
        // false == 0, true == 1 ==> if bit is set, than 1, else 0
    }

    return retval;
}

int Bitwalker_Poke (unsigned int Startposition, unsigned int Length, uint8_t Bitstream[], unsigned int BitstreamSizeInBytes, uint64_t Value)
{
    // plausibility check: is last byte in range
    if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
        return -1;  // error: index out of range

    // plausibility check: is value in range
    uint64_t MaxValue = (((uint64_t)0x01) << Length) - 1;

    if (MaxValue < Value)
        return -2;      // error: value to big for bit field

    // everything ok, we can iterate bitwise from right to left
    int i;

    for (i = Startposition + Length - 1; i >= (int)Startposition; i--)
    {
        // distinction between even and odd number
        if ((Value & 0x01) == 0)
            Bitstream[i >> 3] &= ~BitwalkerBitMaskTable[i & 0x07];
        else
            Bitstream[i >> 3] |=  BitwalkerBitMaskTable[i & 0x07];

        Value >>= 1;
    }

    return 0;
}

