#ifndef INIT_H
#define INIT_H

#include "Locals.h"

/*@
  requires  \valid(Locals);

  assigns  Locals->Bitstream;
  assigns  Locals->Length;
  assigns  Locals->CurrentBitposition;

  ensures  Locals->Bitstream == Bitstream;
  ensures  Locals->Length == Size;
  ensures  Locals->CurrentBitposition == FirstBitposition;
*/

void Bitwalker_IncrementalWalker_Init(
  T_Bitwalker_Incremental_Locals  *Locals,
  uint8_t                          Bitstream[],
  unsigned int                     Size,
  unsigned int                     FirstBitposition);

#endif // INIT_H
