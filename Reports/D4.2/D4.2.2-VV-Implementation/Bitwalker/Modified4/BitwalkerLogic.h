
#include "stdint.h"

logic ExtractBit(uint8_t* a, i) = (a[i/8] >> (7 - i%8)) & 1;

/*@
  axiomatic PeekAxiomatic
  {
    logic integer Peek{L}(uint8_t* a, integer i, integer k) 
       reads a[i/8..j/8]; // reads clause not quite right

    axiom PeekEmpty:
      \forall uint8_t* a, integer i, j;
        i >= j ==> Peek(a, i, j) == 0;

    axiom PeekOne:
      \forall uint8_t* a, integer i;
         Peek(a, 0, i+1) = 2 * Peek(a, 0, i) + ExtractBit(a, i);

    // do we need this at all?
    axiom PeekUnion:
      \forall uint8_t* a, i, j, k;
        0 <= i <= j <= k ==>
          Peek(a, v, i ,k) == power2(j-i) * Peek(a, i, j) + Peek(a, j, k);
  }
