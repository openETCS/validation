#include "Bitwalker.h"
#include "extract_bit.h"

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
    retval = (retval << 1) +  extract_bit(Bitstream, i);
  }

  return retval;
}
