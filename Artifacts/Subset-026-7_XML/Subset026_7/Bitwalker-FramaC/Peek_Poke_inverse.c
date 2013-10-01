#include "Bitwalker.h"

/*@
    requires IsValidRange(Bitstream, BitstreamSizeInBytes);
    requires Value <= PowerBase2(Length) - 1;
    requires !OutOfRange(StreamIndex(Startposition + Length - 1), BitstreamSizeInBytes);
    requires Length <= 64;

    ensures \result == Value; 
*/
uint64_t peek_poke_inverse (unsigned int Startposition, unsigned int Length, uint8_t Bitstream[],
    unsigned int BitstreamSizeInBytes, uint64_t Value)
{
    Bitwalker_Poke(Startposition, Length, Bitstream, BitstreamSizeInBytes, Value);
    return Bitwalker_Peek(Startposition, Length, Bitstream, BitstreamSizeInBytes);
}

/*@
    requires IsValidRange(Bitstream1, BitstreamSizeInBytes1);
    requires IsValidRange(Bitstream2, BitstreamSizeInBytes2);
    requires Length <= 64;
    requires !OutOfRange(StreamIndex(Startposition1 + Length - 1), BitstreamSizeInBytes1);
    requires !OutOfRange(StreamIndex(Startposition2 + Length - 1), BitstreamSizeInBytes2);

    ensures BitSum(Startposition1, Length, Bitstream1) == BitSum(Startposition2, Length, Bitstream2);
*/
void poke_peek_inverse (unsigned int Startposition1, unsigned int Startposition2, 
    unsigned int Length, uint8_t Bitstream1[], uint8_t Bitstream2[], 
    unsigned int BitstreamSizeInBytes1, unsigned int BitstreamSizeInBytes2)
{
    uint64_t x = Bitwalker_Peek(Startposition1, Length, Bitstream1, BitstreamSizeInBytes1);
    //@ assert x <= PowerBase2(Length) - 1;
    Bitwalker_Poke(Startposition2, Length, Bitstream2, BitstreamSizeInBytes2, x);
}
