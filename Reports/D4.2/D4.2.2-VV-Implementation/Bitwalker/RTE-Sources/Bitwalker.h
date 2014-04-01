#ifndef BITWALKER_H
#define BITWALKER_H

#include <stdint.h>
#include <limits.h>

static const uint8_t BitwalkerBitMaskTable[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};
// syntax does not work
// ghost InitMask:

#include "Bitwalker_Logics.spec"


/*@
    requires IsValidRange(Bitstream, BitstreamSizeInBytes);
    requires Startposition + Length <=  UINT_MAX;
    requires Length <= 64;
    assigns \nothing;

    behavior out_of_range:
        assumes !ValidBitIndex(Startposition, Length, BitstreamSizeInBytes);
        ensures \result == 0;

    behavior normal:
        assumes ValidBitIndex(Startposition, Length, BitstreamSizeInBytes);
        ensures \result == BitSum(Startposition, Length, Bitstream);
        ensures !TooBig(\result, Length);

    complete behaviors;
    disjoint behaviors;
*/
uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t* Bitstream,
                        unsigned int BitstreamSizeInBytes);


/*@
    requires 0 < Length < UINT_MAX;
    requires Startposition + Length <= UINT_MAX;
    requires IsValidRange(Bitstream, BitstreamSizeInBytes);
    requires \separated(Bitstream+(0..BitstreamSizeInBytes-1), &BitwalkerBitMaskTable[0..7]);

    assigns Bitstream[StreamIndex(Startposition)..StreamIndex(Startposition + Length - 1)];
    ensures Value == \old(Value);

    behavior out_of_range:
        assumes !ValidBitIndex(Startposition,  Length, BitstreamSizeInBytes);

        assigns \nothing;

        ensures \result == -1;

    behavior value_too_big:
        assumes TooBig(Value, Length);
        assumes ValidBitIndex(Startposition,  Length, BitstreamSizeInBytes);

        assigns \nothing;

        ensures \result == -2;

    behavior normal:
        assumes ValidBitIndex(Startposition, Length, BitstreamSizeInBytes);
        assumes !TooBig(Value, Length);

        assigns Bitstream[StreamIndex(Startposition)..StreamIndex(Startposition + Length - 1)];

        ensures BitSum(Startposition, Length, Bitstream) == Value;
        ensures BitSum(0, Startposition, \old(Bitstream)) == BitSum(0, Startposition, Bitstream);
        ensures BitSum(Startposition+Length, BitstreamSizeInBytes,
        \old(Bitstream)) == BitSum(Startposition+Length, BitstreamSizeInBytes, Bitstream);
        ensures \result == 0;

    complete behaviors;
    disjoint behaviors;
*/


int      Bitwalker_Poke(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes,
                        uint64_t Value);

typedef struct
{
    uint8_t *Bitstream;
    unsigned int Length;
    unsigned int CurrentBitposition;
} T_Bitwalker_Incremental_Locals;

/*@ predicate T_Bitwalker_Incremental_Locals_inv(T_Bitwalker_Incremental_Locals *Locals)=
        ValidBitIndex(Locals->CurrentBitposition, 0, Locals->Length);

*/

void     Bitwalker_IncrementalWalker_Init(
    T_Bitwalker_Incremental_Locals *Locals,
    uint8_t Bitstream[],
    unsigned int Size,
    unsigned int FirstBitposition);

/*@
    requires T_Bitwalker_Incremental_Locals_inv(Locals);
    ensures T_Bitwalker_Incremental_Locals_inv(Locals);
*/
uint64_t Bitwalker_IncrementalWalker_Peek_Next(
    T_Bitwalker_Incremental_Locals *Locals,
    unsigned int Length);

/*@
    requires T_Bitwalker_Incremental_Locals_inv(Locals);
    ensures T_Bitwalker_Incremental_Locals_inv(Locals);
*/
int Bitwalker_IncrementalWalker_Peek_Finish (T_Bitwalker_Incremental_Locals *Locals);

/*@
    requires T_Bitwalker_Incremental_Locals_inv(Locals);
    ensures T_Bitwalker_Incremental_Locals_inv(Locals);
*/
int Bitwalker_IncrementalWalker_Poke_Next(
    T_Bitwalker_Incremental_Locals *Locals,
    unsigned int Length,
    uint64_t Value);

/*@
    requires T_Bitwalker_Incremental_Locals_inv(Locals);
    ensures T_Bitwalker_Incremental_Locals_inv(Locals);
*/
int Bitwalker_IncrementalWalker_Poke_Finish (T_Bitwalker_Incremental_Locals *Locals);

#endif // BITWALKER_H



