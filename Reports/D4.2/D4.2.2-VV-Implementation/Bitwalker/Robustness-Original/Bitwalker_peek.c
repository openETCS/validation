#include "limits.h"
#include "Bitwalker.h"

/*@
   requires 1 <= Length < 64;
   requires 8*(Startposition + Length) < UINT_MAX;
   requires \valid(Bitstream + (0..BitstreamSizeInBytes-1));

   assigns \nothing;
*/
uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes)
{
  if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
    return 0;	// error: index out of range

  uint64_t retval = 0;

  /*@
    loop invariant Startposition <= i <= Startposition + Length;
    loop assigns i, retval;
    loop variant Startposition + Length - i;
  */
  for (unsigned int i = Startposition; i < Startposition + Length; i++)
  {
    uint8_t CurrentValue = Bitstream[i >> 3] &
                           BitwalkerBitMaskTable[i & 0x07];

    retval = (retval << 1) + (uint8_t)(CurrentValue != 0);
  }

  return retval;
}
