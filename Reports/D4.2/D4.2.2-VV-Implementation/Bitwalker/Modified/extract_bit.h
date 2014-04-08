
uint64_t extract_bit(uint8_t Bitstream[], unsigned int i)
{
  uint8_t CurrentValue = Bitstream[i >> 3] & BitwalkerBitMaskTable[i & 0x07];
  return CurrentValue != 0;
}

