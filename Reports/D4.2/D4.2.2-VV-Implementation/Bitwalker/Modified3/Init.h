#ifndef INIT_H
#define INIT_H

#include "Locals.h"
#include "ValidIncrementalLocals.h"

/*@
  requires \valid(Locals);
  requires \valid(Bitstream + (0..Size-1));
  requires 8 * Size <= UINT_MAX;
  requires 8 * FirstBitposition <= Size;

  assigns  Locals->Bitstream;
  assigns  Locals->Length;
  assigns  Locals->CurrentBitposition;

  ensures  Locals->Bitstream == Bitstream;
  ensures  Locals->Length == Size;
  ensures  Locals->CurrentBitposition == FirstBitposition;
  ensures  Valid(Locals);
*/
void Bitwalker_IncrementalWalker_Init(
  T_Bitwalker_Incremental_Locals*  Locals,
  uint8_t                          Bitstream[],
  unsigned int                     Size,
  unsigned int                     FirstBitposition);

#endif // INIT_H

