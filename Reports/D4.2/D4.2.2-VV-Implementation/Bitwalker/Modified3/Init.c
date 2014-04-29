#include "Init.h"

void
Bitwalker_IncrementalWalker_Init(
     T_Bitwalker_Incremental_Locals  *Locals,
     uint8_t                          Bitstream[],
     unsigned int                     Size,
     unsigned int                     FirstBitposition)
{
  Locals->Bitstream             = Bitstream;
  Locals->Length                = Size;
  Locals->CurrentBitposition    = FirstBitposition;
}

