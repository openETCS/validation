
uint64_t extract_bit(uint8_t Bitstream[], unsigned int index)
{
  return (Bitstream[index >> 3] & BitwalkerBitMaskTable[index & 0x07]) != 0;
}

