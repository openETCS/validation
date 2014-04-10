void poke_bits(uint8_t* Bitstream, unsigned int index, uint64_t Value)
{
    uint8_t mask = 1 <<  (7 - (index % 8));

    if ((Value % 2) == 0)
      Bitstream[index / 8] &= ~mask;
    else
      Bitstream[index / 8] |=  mask;
}

