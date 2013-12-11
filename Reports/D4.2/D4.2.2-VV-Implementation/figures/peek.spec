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
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes);
