#ifndef BITWALKER_H
#define BITWALKER_H

#include <stdint.h>
#include <limits.h>

/*@
    requires d > 0;

    assigns \nothing;

    ensures 0 <= \result < d;
*/
static inline
unsigned int inverse_modulo(unsigned int n, unsigned int d)
{
  return d - 1 - (n % d);
}


uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t* Bitstream,
                        unsigned int BitstreamSizeInBytes);



int      Bitwalker_Poke(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes,
                        uint64_t Value);


#endif // BITWALKER_H
