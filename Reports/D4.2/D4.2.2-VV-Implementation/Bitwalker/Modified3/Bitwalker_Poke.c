#include "Bitwalker_Poke.h"

int Bitwalker_Poke (unsigned int Start,
                    unsigned int Length,
                    uint8_t Bitstream[],
                    unsigned int BitstreamSize,
                    uint64_t Value)
{
  if ((Start + Length)  > 8 * BitstreamSize)
  {
    return -1;	// error: index out of range
  }

  // compute 2^Length
  const uint64_t MaxValue = (((uint64_t) 1) << Length);

  if (Value >= MaxValue)
  {
    return -2;  // error: value to big for bit sequence
  }

  /*@
    loop invariant 0 <= i <= Length;
    loop assigns i, Value, Bitstream[Start/8..(Start + Length)/8];
    loop variant i;
  */
  for (unsigned int i = Length; i > 0; i--)
  {
    unsigned int pos = Start + i - 1;
    uint8_t mask = 1 <<  inverse_modulo(pos, 8);

    if ((Value % 2) == 0)
    {
      Bitstream[pos / 8] &= ~mask;
    }
    else
    {
      Bitstream[pos / 8] |=  mask;
    }

    Value /= 2;
  }

  // assert Value == 0; // we should prove this at one point

  return 0;
}

