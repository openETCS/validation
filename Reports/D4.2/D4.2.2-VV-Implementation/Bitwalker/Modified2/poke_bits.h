
void poke_bits(uint8_t* Bitstream, unsigned int index, uint64_t Value)
{
    Bitstream[index >> 3] |= (Value & 0x01)<< (0x07 - (index & 0x07));
}

