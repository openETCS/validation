/* logic functions */

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
    logic integer Bit(integer BitAbs, uint8_t* Stream) =
        ((Stream[StreamIndex(BitAbs)] & BitwalkerBitMaskTable[BitPosRel(BitAbs)]) == 0)? 0 : 1;
*/



/* axioms */

/*@  axiomatic BitSummation
    {
        logic integer BitSum(integer i, integer l, uint8_t* s);

        axiom BaseCase:
            \forall integer i, l, uint8_t* s;
                (l <= 0) ==> BitSum(i, l, s) == 0;

        axiom RecursiveCase:
            \forall integer i, l, uint8_t* s;
                (l > 0) ==> BitSum(i, l, s) ==
                    Bit(i, s) * PowerBase2(l-1) + BitSum(i+1, l-1, s);
    }
*/


/*predicates*/

/*@
    predicate TooBig(integer i, integer Length) =
        i > PowerBase2(Length) - 1;
*/

/*@
    predicate OutOfRange(integer Index, integer Size) =
        Index >= Size;
*/

/*@
    predicate IsValidRange(uint8_t* a, integer n) =
    (0 <= n) && \valid(a+(0.. n-1));
*/


/*lemmas*/

/*
    lemma LeftShift:
        \forall integer i, j; i <= 0 && j < 0 ==> i  << j == i*PowerBase2(j);

    lemma RightShift:
        \forall integer i, j; i <= 0 && j < 0 ==> i >> j == i/PowerBase2(j);

    lemma Modulo:
        \forall integer x, n; x >= 0 && n > 0
            ==> Mod(x, PowerBase2(n)) == BitAnd(x, PowerBase2(n) - 1);

    lemma BitIndex:
        \forall integer BitAbs;
            0 <= BitAbs ==> StreamIndex(BitAbs) * 8 + BitPosRel(BitAbs) == BitAbs;
*/

