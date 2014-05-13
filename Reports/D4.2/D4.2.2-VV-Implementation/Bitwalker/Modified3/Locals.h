#ifndef LOCALS_H
#define LOCALS_H

#include <stdint.h>
#include <limits.h>

struct BitwalkerLocals
{
  uint8_t *Bitstream;
  unsigned int Length;
  unsigned int CurrentBitposition;
};

typedef struct BitwalkerLocals T_Bitwalker_Incremental_Locals;

#endif
