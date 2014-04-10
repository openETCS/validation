#include "Bitwalker.h"

int Bitwalker_Poke (unsigned int Startposition,
                    unsigned int Length,
                    uint8_t Bitstream[],
                    unsigned int BitstreamSizeInBytes,
                    uint64_t Value)
{
  // plausibility check: is last byte in range
  if ((Startposition + Length)  > 8 * BitstreamSizeInBytes)
    return -1;	// error: index out of range

  // plausibility check: is value in range
  uint64_t MaxValue = (((uint64_t) 1) << Length) - 1;

  if (MaxValue < Value)
    return -2;  // error: value to big for bit field

  // Everything ok, we can iterate bitwise from left to right
  for (int i = Length - 1; i >= 0; i--)
  {
    int pos = Startposition + i;
    uint8_t mask = 1 <<  inverse_modulo(pos, 8);

    if ((Value % 2) == 0)
      Bitstream[pos / 8] &= ~mask;
    else
      Bitstream[pos / 8] |=  mask;

    Value >>= 1;
  }

  return 0;
}


