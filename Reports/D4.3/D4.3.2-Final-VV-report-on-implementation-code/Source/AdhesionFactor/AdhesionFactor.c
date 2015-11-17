
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_AdhesionFactor
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


#include "AdhesionFactor.h"
#include "Bit64.h"


int AdhesionFactor_UpperBitsNotSet(const AdhesionFactor* p)
{
    int status = 1;

    status = status && UpperBitsNotSet64(p->Q_DIR,             2) ;
    status = status && UpperBitsNotSet64(p->L_PACKET,          13);
    status = status && UpperBitsNotSet64(p->Q_SCALE,           2) ;
    status = status && UpperBitsNotSet64(p->D_ADHESION,        15);
    status = status && UpperBitsNotSet64(p->L_ADHESION,        15);
    status = status && UpperBitsNotSet64(p->M_ADHESION,        1) ;

    if (status)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int AdhesionFactor_EncodeBit(const AdhesionFactor* p, Bitstream* stream)
{
    if (Bitstream_Normal(stream, ADHESIONFACTOR_BITSIZE))
    {
        if (AdhesionFactor_UpperBitsNotSet(p))
        {
            //@ ghost const uint32_t pos = stream->bitpos;

            Bitstream_Write(stream, 2,  p->Q_DIR);
            Bitstream_Write(stream, 13, p->L_PACKET);
            Bitstream_Write(stream, 2,  p->Q_SCALE);
            Bitstream_Write(stream, 15, p->D_ADHESION);
            Bitstream_Write(stream, 15, p->L_ADHESION);
            Bitstream_Write(stream, 1,  p->M_ADHESION);


            //@ assert Q_DIR:             EqualBits(stream, pos,       pos + 2,   p->Q_DIR);
            //@ assert L_PACKET:          EqualBits(stream, pos + 2,   pos + 15,  p->L_PACKET);
            //@ assert Q_SCALE:           EqualBits(stream, pos + 15,  pos + 17,  p->Q_SCALE);
            //@ assert D_ADHESION:        EqualBits(stream, pos + 17,  pos + 32,  p->D_ADHESION);
            //@ assert L_ADHESION:        EqualBits(stream, pos + 32,  pos + 47,  p->L_ADHESION);
            //@ assert M_ADHESION:        EqualBits(stream, pos + 47,  pos + 48,  p->M_ADHESION);

            return 1;
        }
        else
        {
            return -2;
        }
    }
    else
    {
        return -1;
    }
}

int AdhesionFactor_DecodeBit(AdhesionFactor* p, Bitstream* stream)
{
    if (Bitstream_Normal(stream, ADHESIONFACTOR_BITSIZE))
    {
        //@ ghost const uint32_t pos = stream->bitpos;

        /*@
          requires Q_DIR:          stream->bitpos == pos + 0;
          assigns                  stream->bitpos;
          assigns                  p->Q_DIR;
          ensures  Q_DIR:          stream->bitpos == pos + 2;
          ensures  Q_DIR:          EqualBits(stream, pos + 0, pos + 2, p->Q_DIR);
          ensures  Q_DIR:          UpperBitsNotSet(p->Q_DIR, 2);
        */
        {
            p->Q_DIR        = Bitstream_Read(stream, 2);
        }

        /*@
          requires L_PACKET:       stream->bitpos == pos + 2;
          assigns                  stream->bitpos;
          assigns                  p->L_PACKET;
          ensures  L_PACKET:       stream->bitpos == pos + 15;
          ensures  L_PACKET:       EqualBits(stream, pos + 2, pos + 15, p->L_PACKET);
          ensures  L_PACKET:       UpperBitsNotSet(p->L_PACKET, 13);
        */
        {
            p->L_PACKET        = Bitstream_Read(stream, 13);
        }

        /*@
          requires Q_SCALE:        stream->bitpos == pos + 15;
          assigns                  stream->bitpos;
          assigns                  p->Q_SCALE;
          ensures  Q_SCALE:        stream->bitpos == pos + 17;
          ensures  Q_SCALE:        EqualBits(stream, pos + 15, pos + 17, p->Q_SCALE);
          ensures  Q_SCALE:        UpperBitsNotSet(p->Q_SCALE, 2);
        */
        {
            p->Q_SCALE        = Bitstream_Read(stream, 2);
        }

        /*@
          requires D_ADHESION:     stream->bitpos == pos + 17;
          assigns                  stream->bitpos;
          assigns                  p->D_ADHESION;
          ensures  D_ADHESION:     stream->bitpos == pos + 32;
          ensures  D_ADHESION:     EqualBits(stream, pos + 17, pos + 32, p->D_ADHESION);
          ensures  D_ADHESION:     UpperBitsNotSet(p->D_ADHESION, 15);
        */
        {
            p->D_ADHESION        = Bitstream_Read(stream, 15);
        }

        /*@
          requires L_ADHESION:     stream->bitpos == pos + 32;
          assigns                  stream->bitpos;
          assigns                  p->L_ADHESION;
          ensures  L_ADHESION:     stream->bitpos == pos + 47;
          ensures  L_ADHESION:     EqualBits(stream, pos + 32, pos + 47, p->L_ADHESION);
          ensures  L_ADHESION:     UpperBitsNotSet(p->L_ADHESION, 15);
        */
        {
            p->L_ADHESION        = Bitstream_Read(stream, 15);
        }

        /*@
          requires M_ADHESION:     stream->bitpos == pos + 47;
          assigns                  stream->bitpos;
          assigns                  p->M_ADHESION;
          ensures  M_ADHESION:     stream->bitpos == pos + 48;
          ensures  M_ADHESION:     EqualBits(stream, pos + 47, pos + 48, p->M_ADHESION);
          ensures  M_ADHESION:     UpperBitsNotSet(p->M_ADHESION, 1);
        */
        {
            p->M_ADHESION        = Bitstream_Read(stream, 1);
        }

        //@ assert Q_DIR:             EqualBits(stream, pos,       pos + 2,   p->Q_DIR);
        //@ assert L_PACKET:          EqualBits(stream, pos + 2,   pos + 15,  p->L_PACKET);
        //@ assert Q_SCALE:           EqualBits(stream, pos + 15,  pos + 17,  p->Q_SCALE);
        //@ assert D_ADHESION:        EqualBits(stream, pos + 17,  pos + 32,  p->D_ADHESION);
        //@ assert L_ADHESION:        EqualBits(stream, pos + 32,  pos + 47,  p->L_ADHESION);
        //@ assert M_ADHESION:        EqualBits(stream, pos + 47,  pos + 48,  p->M_ADHESION);

        //@ assert Q_DIR:             UpperBitsNotSet(p->Q_DIR,             2);
        //@ assert L_PACKET:          UpperBitsNotSet(p->L_PACKET,          13);
        //@ assert Q_SCALE:           UpperBitsNotSet(p->Q_SCALE,           2);
        //@ assert D_ADHESION:        UpperBitsNotSet(p->D_ADHESION,        15);
        //@ assert L_ADHESION:        UpperBitsNotSet(p->L_ADHESION,        15);
        //@ assert M_ADHESION:        UpperBitsNotSet(p->M_ADHESION,        1);

        //@ assert final: EqualBits(stream, pos, p);

        return 1;
    }
    else
    {
        return 0;
    }
}

#ifndef FRAMAC_IGNORE

int AdhesionFactor_EncodeInt(const AdhesionFactor* p, Metadata* data, kcg_int* stream)
{
    data->nid_packet = 71;
    data->q_dir = p->Q_DIR;
    data->valid = 1;

    kcg_int startAddress = data->startAddress;

    stream[startAddress++] = p->header.NID_PACKET;

    stream[startAddress++] = p->Q_DIR;
    stream[startAddress++] = p->L_PACKET;
    stream[startAddress++] = p->Q_SCALE;
    stream[startAddress++] = p->D_ADHESION;
    stream[startAddress++] = p->L_ADHESION;
    stream[startAddress++] = p->M_ADHESION;

    data->endAddress = startAddress-1;

    return 1;
}

int AdhesionFactor_DecodeInt(AdhesionFactor* p, const Metadata* data, const kcg_int* stream)
{
    if(data->nid_packet != 71)
    {
         return 0;
    }

    kcg_int startAddress = data->startAddress;
    p->header.NID_PACKET = stream[startAddress++];

    p->Q_DIR = stream[startAddress++];
    p->L_PACKET = stream[startAddress++];
    p->Q_SCALE = stream[startAddress++];
    p->D_ADHESION = stream[startAddress++];
    p->L_ADHESION = stream[startAddress++];
    p->M_ADHESION = stream[startAddress++];

    if(startAddress-1 != data->endAddress)
    {
         return 0;
    }

    return 1;
}

// number of cells in allocation memory
#define AdhesionFactorMemoryMax		8

// end-of-freelist indicator
#define AdhesionFactorMemoryNil		(-1)

// allocation memory
static AdhesionFactor AdhesionFactorMemory[AdhesionFactorMemoryMax];

// lowest unused cell of allocation memory
static uint64_t AdhesionFactorMemoryTop = 0;

// index of first element of freelist
static uint64_t AdhesionFactorMemoryFreeList = AdhesionFactorMemoryNil;

AdhesionFactor* AdhesionFactor_New(void)
{
    AdhesionFactor* ptr;

    if (AdhesionFactorMemoryFreeList != AdhesionFactorMemoryNil)
    {
        // allocate from freelist
        ptr = &AdhesionFactorMemory[AdhesionFactorMemoryFreeList];
        AdhesionFactorMemoryFreeList = AdhesionFactorMemory[AdhesionFactorMemoryFreeList].header.NID_PACKET;
    }
    else if (AdhesionFactorMemoryTop < AdhesionFactorMemoryMax)
    {
        // allocate from top
        ptr = &AdhesionFactorMemory[AdhesionFactorMemoryTop];
        AdhesionFactorMemoryTop += 1;
    }
    else
    {
        // memory exhausted
        return 0;
    }

    AdhesionFactor_Init(ptr);

    return ptr;
}


void AdhesionFactor_Delete(AdhesionFactor* ptr)
{
    // prepend to freelist
    ptr->header.NID_PACKET = AdhesionFactorMemoryFreeList;
    AdhesionFactorMemoryFreeList = ptr - AdhesionFactorMemory;
}

#endif // FRAMAC_IGNORE

