
#include <stdint.h>
#include "Bitwalker.h"

int Bitwalker_Poke (unsigned int Startposition, unsigned int Length, uint8_t Bitstream[], unsigned int BitstreamSizeInBytes, uint64_t Value)
{
  // plausibility check: is last byte in range
  if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
    return -1;	// error: index out of range

  // plausibility check: is value in range
  uint64_t MaxValue = (((uint64_t)0x01) << Length) - 1;

  if (MaxValue < Value)
    return -2;  // error: value to big for bit field

  // Everything ok, we can iterate bitwise from left to right
  int i;

  for (i = Startposition + Length - 1; i >= (int)Startposition; i--)
  {
    if ((Value & 0x01) == 0)
      Bitstream[i >> 3] &= ~BitwalkerBitMaskTable[i & 0x07];
    else
      Bitstream[i >> 3] |=  BitwalkerBitMaskTable[i & 0x07];

    Value >>= 1;
  }

  return 0;
}


