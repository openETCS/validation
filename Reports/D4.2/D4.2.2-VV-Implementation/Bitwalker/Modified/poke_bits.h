
void poke_bits(uint8_t* Bitstream, unsigned int i, uint64_t Value)
{
    uint8_t mask = BitwalkerBitMaskTable[i & 0x07];

    if ((Value & 0x01) == 0)
    {
      Bitstream[i/8] &= ~mask;
    }
    else
    {
      Bitstream[i/8] |=  mask;
    }
}

