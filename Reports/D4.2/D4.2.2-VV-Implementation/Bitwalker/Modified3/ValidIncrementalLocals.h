
#include "Locals.h"

/*@
  predicate Valid(T_Bitwalker_Incremental_Locals* ptr) =
    \valid(ptr->Bitstream + (0..ptr->Length-1)) &&
    8 * ptr->Length <= UINT_MAX &&
    8 * ptr->CurrentBitposition <= ptr->Length &&
    \separated(ptr->Bitstream + (0..ptr->Length-1), ptr);
*/

