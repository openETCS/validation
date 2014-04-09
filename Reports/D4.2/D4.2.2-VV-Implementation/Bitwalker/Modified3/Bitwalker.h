#ifndef BITWALKER_H
#define BITWALKER_H

#include <stdint.h>



uint64_t Bitwalker_Peek(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t* Bitstream,
                        unsigned int BitstreamSizeInBytes);



int      Bitwalker_Poke(unsigned int Startposition,
                        unsigned int Length,
                        uint8_t Bitstream[],
                        unsigned int BitstreamSizeInBytes,
                        uint64_t Value);


#endif // BITWALKER_H
