#include "Bitwalker.h"
#include "limits.h"

/*@
    requires d > 0;

    assigns \nothing;

    ensures 0 <= \result < d;
*/
unsigned int inverse_modulo(unsigned int n, unsigned int d)
{
  return d - 1 - (n % d);
}

/*@
   requires 8 * BitstreamSizeInBytes < UINT_MAX;
   requires Startposition + Length < UINT_MAX;
   requires 0 <= Length < 64;
   requires \valid(Bitstream + (0..BitstreamSizeInBytes-1));

   assigns \nothing;

   ensures \result <= (1 << Length);
*/
uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes)
{
  if ((Startposition + Length)  > 8 * BitstreamSizeInBytes)
    return 0;	// error: index out of range

  uint64_t retval = 0;

  /*@
    loop invariant 0 <= i <= Length;
    loop invariant 0 <= retval < 1 << i;
    loop assigns i, retval;
    loop variant Length - i;
  */
  for (unsigned int i = 0; i < Length; i++)
  {
    unsigned int pos = Startposition + i;

    unsigned int bit_index  = inverse_modulo(pos, 8);
    uint8_t shift = Bitstream[pos / 8] >> bit_index;
    uint8_t bit_as_byte = shift & 1;
    //@ assert bit_as_byte == 0 || bit_as_byte == 1;

    retval = 2 * retval + bit_as_byte;
  }

  return retval;
}

