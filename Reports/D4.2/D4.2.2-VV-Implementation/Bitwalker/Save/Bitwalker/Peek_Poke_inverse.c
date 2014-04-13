#include "Bitwalker.h"

/*@
    requires 0 < Length < UINT_MAX;
    requires Startposition + Length <=  UINT_MAX;
    requires IsValidRange(Bitstream, BitstreamSizeInBytes);
    requires !TooBig(Value, Length);
    requires \separated(Bitstream+(0..BitstreamSizeInBytes-1), &BitwalkerBitMaskTable[0..7]);
    requires ValidBitIndex(Startposition, Length, BitstreamSizeInBytes);
    requires Length <= 64;

    ensures \result == Value;
*/
uint64_t peek_poke_inverse (unsigned int Startposition, unsigned int Length, uint8_t Bitstream[],
                            unsigned int BitstreamSizeInBytes, uint64_t Value)
{
    Bitwalker_Poke(Startposition, Length, Bitstream, BitstreamSizeInBytes, Value);
    //@ assert BitSum(Startposition, Length, Bitstream) == Value;
    return Bitwalker_Peek(Startposition, Length, Bitstream, BitstreamSizeInBytes);
}

/*@
    requires 0 < Length < UINT_MAX;
    requires Startposition1 + Length <=  UINT_MAX;
    requires Startposition2 + Length <=  UINT_MAX;
    requires IsValidRange(Bitstream1, BitstreamSizeInBytes1);
    requires IsValidRange(Bitstream2, BitstreamSizeInBytes2);
    requires \separated(Bitstream2+(0..BitstreamSizeInBytes2-1), &BitwalkerBitMaskTable[0..7]);
    requires \separated(Bitstream1+(0..BitstreamSizeInBytes1-1), Bitstream2 + (0..BitstreamSizeInBytes2-1));
    requires Length <= 64;
    requires ValidBitIndex(Startposition1, Length, BitstreamSizeInBytes1);
    requires ValidBitIndex(Startposition2, Length, BitstreamSizeInBytes2);

    ensures BitSum{Old}(Startposition1, Length, Bitstream1) == BitSum(Startposition2, Length, Bitstream2);
*/
void poke_peek_inverse (unsigned int Startposition1, unsigned int Startposition2,
                        unsigned int Length, uint8_t Bitstream1[], uint8_t Bitstream2[],
                        unsigned int BitstreamSizeInBytes1, unsigned int BitstreamSizeInBytes2)
{
    uint64_t x = Bitwalker_Peek(Startposition1, Length, Bitstream1, BitstreamSizeInBytes1);

    Bitwalker_Poke(Startposition2, Length, Bitstream2, BitstreamSizeInBytes2, x);
}
