
#ifndef BITLOGIC_INCLUDED
#define BITLOGIC_INCLUDED

/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: BitLogic.h
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) 

- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): Fraunhofer FOKUS

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.       
============================================================================= */

#include <stdint.h>
#include <limits.h>

/*@ axiomatic b4fc_bit
  @ {
  @   logic       boolean LogicalBitTest(integer v, integer n);
  @
  @   predicate   BitTest(integer v, integer n);
  @ }
*/

/*@
   predicate Bit8{A}(uint8_t v, integer n)  = BitTest(v, 7 - n);

   predicate Bit64{A}(uint64_t v, integer n) = BitTest(v, 63 - n);

   predicate Bit8Array{A}(uint8_t* a, integer n) = Bit8(a[n / 8],n % 8);
*/


/*@
   predicate Invariant{A}(uint64_t x) = \true;

   predicate ZeroInitialized{A}(uint64_t x) = x == 0;

   predicate
     Unchanged{A,B}(uint8_t* addr, integer first, integer last) =
        \forall integer i; first <= i < last ==>
           (\at(Bit8Array(addr, i), A) <==> \at(Bit8Array(addr, i), B));

   predicate
     EqualBits8{A}(uint8_t x, uint8_t y, integer first, integer last) =
        \forall integer i; 8 - last <= i < 8 - first ==> (BitTest(x, i) <==> BitTest(y, i));

   predicate
     EqualBits64{A}(uint64_t x, uint64_t y, integer first, integer last) =
        \forall integer i; 64 - last <= i < 64 - first ==> (BitTest(x, i) <==> BitTest(y, i));

   predicate EqualBits{A}(uint8_t* addr, integer first, integer last,
                          uint64_t value, integer length) =
        \forall integer i; first <= i < last ==>
           (Bit8Array(addr, i) <==> BitTest(value, length + first - 1 - i));

   // overloaded version
   predicate EqualBits{A}(uint8_t* addr, integer first, integer last, uint64_t value) =
        \forall integer i; first <= i < last ==>
           (Bit8Array(addr, i) <==> BitTest(value, last - 1 - i));

   predicate
     UpperBitsNotSet{A}(integer value, integer length) =
       \forall integer i; length <= i ==> !BitTest(value, i);

   axiomatic BitProperties
   {
     axiom equal_bits64_0:
       \forall uint64_t x, y;
         EqualBits64(x, y, 0, 64) ==> x == y;

     axiom equal_bits64_1:
       \forall uint64_t x, y, integer p, q;
         (\forall integer k; p <= k < q ==> \let j = q-1-k; (BitTest(x, j) <==> BitTest(y, j)))
         ==> EqualBits64(x, y, 64-(q-p), 64);

      axiom upper_bits_less_than:
        \forall integer x, n; x >= 0 ==> n >= 0 ==>
           (UpperBitsNotSet(x, n) <==> x < (1 << n));
   }
*/

#endif  // BITLOGIC_INCLUDED

