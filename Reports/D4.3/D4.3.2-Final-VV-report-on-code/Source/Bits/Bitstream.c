
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Bitstream.c
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) 

- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): Fraunhofer FOKUS

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.       
============================================================================= */

#include "Bitstream.h"

void
Bitstream_Init(Bitstream* stream, uint8_t* addr, uint32_t size, uint32_t bitpos)
{
    stream->addr    = addr;
    stream->size    = size;
    stream->bitpos  = bitpos;
}


int
Bitstream_Normal(const Bitstream* stream, uint32_t length)
{
    return stream->bitpos + length <= 8 * stream->size;
}


uint64_t
Bitstream_Read(Bitstream* s, uint32_t length)
{
    uint64_t value =  Bitwalker_Read(s->addr, s->size, s->bitpos, length);

    s->bitpos += length;

    return value;
}


void
Bitstream_Write(Bitstream* stream, uint32_t length, uint64_t value)
{
    Bitwalker_Write(stream->addr, stream->size, stream->bitpos, length, value);
    //@ assert EqualBits(stream, stream->bitpos, stream->bitpos + length, value);

    stream->bitpos += length;
    //@ assert EqualBits(stream, \at(stream->bitpos,Pre), stream->bitpos, value);
}

