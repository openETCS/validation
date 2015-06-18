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

    /*@
        loop invariant Startposition <= i <= Startposition + Length;
        loop invariant retval == BitSum(Startposition, i - Startposition, Bitstream);
        loop assigns i, retval;
        loop variant Startposition + Length - i;
    */
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

    /*@
         loop invariant -1 <= i < Startposition + Length;

         loop invariant (\at(Value, Pre) & (PowerBase2(Startposition+ Length-i))-1)
            == BitSum(i, Startposition+Length-1,Bitstream);

         loop invariant BitSum(0, Startposition, \at(Bitstream, Here))
            == BitSum(0, Startposition, \at(Bitstream, Pre));

         loop invariant BitSum(Startposition + Length, BitstreamSizeInBytes, \at(Bitstream, Here))
            == BitSum(Startposition,Startposition +Length, \at(Bitstream, Pre));

        loop invariant  \at(Value, Here) == (\at(Value, Pre)  >> (Startposition+Length-1-i));

         loop assigns i, Value,  Bitstream[StreamIndex(Startposition)..StreamIndex(Startposition + Length - 1)];

         loop variant i-Startposition;
     */

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


void Bitwalker_IncrementalWalker_Init (T_Bitwalker_Incremental_Locals *Locals, uint8_t Bitstream[], unsigned int Size, unsigned int FirstBitposition)
{
    Locals->Bitstream           = Bitstream;
    Locals->Length              = Size;
    Locals->CurrentBitposition  = FirstBitposition;
}


uint64_t Bitwalker_IncrementalWalker_Peek_Next (T_Bitwalker_Incremental_Locals *Locals, unsigned int Length)
{
    // plausibility check is done when reading the bits
    uint64_t retval = Bitwalker_Peek(Locals->CurrentBitposition, Length, Locals->Bitstream, Locals->Length);
    Locals->CurrentBitposition += Length;
    return retval;
}


int Bitwalker_IncrementalWalker_Peek_Finish (T_Bitwalker_Incremental_Locals *Locals)
{
    return Locals->CurrentBitposition;
}


int Bitwalker_IncrementalWalker_Poke_Next(T_Bitwalker_Incremental_Locals *Locals, unsigned int Length, uint64_t Value)
{
    // plausibility check is done when reading the bits
    int retval = Bitwalker_Poke(Locals->CurrentBitposition, Length, Locals->Bitstream, Locals->Length, Value);
    Locals->CurrentBitposition += Length;
    return retval;
}


int Bitwalker_IncrementalWalker_Poke_Finish(T_Bitwalker_Incremental_Locals *Locals)
{
    return Locals->CurrentBitposition;
}
