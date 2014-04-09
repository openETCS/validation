
/*@
    logic integer StreamIndex(integer Bit) =
        Bit >> 3;
*/

/*@
    logic integer BitPosRel(integer Bit) =
        Bit & 0x07;
*/

/*@
    logic integer PowerBase2(integer n) =
        1 << n;
*/

/*@
    logic integer PowerBase2r(integer i) =
            (i == 0) ? 1:
            (2* PowerBase2r(i-1));
*/

/*@
 lemma Powerbase2_def_equal:
    \forall integer i; 0 <= i ==> PowerBase2r(i) == PowerBase2(i);
 */

/*@
  axiomatic BitMaskTable
  {
    logic integer initBitMask(integer i) reads BitwalkerBitMaskTable[0 .. 7];

    axiom Bt1:
        \forall integer i; 0 <= i < 8  ==> initBitMask(i) == BitwalkerBitMaskTable[i];
 }
*/

/*
    lemma StructureBitMaskTable:
        \forall integer i; 0 <= i < 8  ==> BitwalkerBitMaskTable[i] == PowerBase2(7-i);
*/

/*@
    logic integer Bit(integer BitAbs, uint8_t* Stream) =
        ((Stream[StreamIndex(BitAbs)] & initBitMask(BitPosRel(BitAbs))) == 0)? 0 : 1;
*/

/*@  axiomatic BitSummation
    {
        logic integer BitSum(integer i, integer l, uint8_t* s) reads s[i ..i+l-1], BitwalkerBitMaskTable[0.. 7];

        axiom BaseCase:
            \forall integer i, l, uint8_t* s;
                (l <= 0) ==> BitSum(i, l, s) == 0;

        axiom RecursiveCase:
            \forall integer i, l, uint8_t* s;
                (l > 0) ==> BitSum(i, l, s) ==
                    Bit(i, s) * PowerBase2(l-1) + BitSum(i+1, l-1, s);
    }
*/

/*@
    predicate TooBig(integer i, integer Length) =
        i > PowerBase2(Length) - 1;
*/

/*@
    predicate ValidBitIndex(integer Start, integer Length, integer Size) =
        StreamIndex(Start + Length - 1) < Size;
*/

/*@
    predicate IsValidRange(uint8_t* a, integer n) =
        (0 <= n) && \valid(a+(0.. n-1));
*/

/*@
    lemma BitSumUpperBound:
        \forall integer i, l, uint8_t* s;
            BitSum(i, l, s) <= PowerBase2(l) - 1;
*/

/*
  lemma Modulo1:
      \forall integer x, n; 0 <= x  && 0 <= n  ==>  0 <= (x % PowerBase2(n)) ==  (x & (PowerBase2(n)-1)) < PowerBase2(n);

  lemma Modulo2:
        \forall integer x, n; 0 <=  x && 1 <= n  && ((n &(n-1)) == 0) ==>  (x & (n-1)) == (x % n) ;
*/

/*
  lemma ShiftLeft1:
        \forall integer i, j;  0 <= i && 0 <= j   ==> (i << j)  == (i * PowerBase2(j));

  lemma ShiftRight1:
        \forall integer i, j; 0 <= i && 0 <= j  ==> (i >> j)  == (i / PowerBase2(j));
*/


