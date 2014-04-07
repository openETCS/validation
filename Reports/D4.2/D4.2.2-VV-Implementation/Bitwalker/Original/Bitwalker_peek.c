#include "Bitwalker.h"

uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes)
{
  if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
    return 0;	// error: index out of range

  uint64_t retval = 0;

  unsigned int i;

  for (i = Startposition; i < Startposition + Length; i++)
  {
    uint8_t CurrentValue = Bitstream[i >> 3] & BitwalkerBitMaskTable[i & 0x07];

    retval = (retval << 1) + (uint8_t)(CurrentValue != 0);
  }

  return retval;
}
