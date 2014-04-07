
void poke_bits(uint8_t* Bitstream, unsigned int index, uint64_t Value)
{
    uint8_t mask = BitwalkerBitMaskTable[index& 0x07];
    if ((Value & 0x01) == 0)
      Bitstream[index >> 3] &= ~mask;
    else
      Bitstream[index>> 3] |=  mask;
}

