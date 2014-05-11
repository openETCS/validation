#ifndef LOCALS_H
#define LOCALS_H

#include <stdint.h>

typedef struct
{
  uint8_t *Bitstream;
  unsigned int Length;
  unsigned int CurrentBitposition;
} T_Bitwalker_Incremental_Locals;


#endif // LOCALS_H
