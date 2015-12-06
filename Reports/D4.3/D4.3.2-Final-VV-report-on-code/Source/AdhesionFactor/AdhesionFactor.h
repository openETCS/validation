
#ifndef ADHESIONFACTOR_H_INCLUDED
#define ADHESIONFACTOR_H_INCLUDED

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

#include "Bitstream.h"
#include "CompressedPackets.h"
#include "PacketHeader.h"

struct AdhesionFactor
{
    PacketHeader header;

    // TransmissionMedia=Any
    // This packet is used when the trackside requests a change of
    // the adhesion factor to be used in the brake model.
    // Packet Number = 71

    uint64_t   Q_DIR;            // # 2
    uint64_t  L_PACKET;         // # 13
    uint64_t   Q_SCALE;          // # 2
    uint64_t  D_ADHESION;       // # 15
    uint64_t  L_ADHESION;       // # 15
    uint64_t   M_ADHESION;       // # 1
};

typedef struct AdhesionFactor AdhesionFactor;

#define ADHESIONFACTOR_BITSIZE 48

/*@
    logic integer BitSize{L}(AdhesionFactor* p) = ADHESIONFACTOR_BITSIZE;

    logic integer MaxBitSize{L}(AdhesionFactor* p) = BitSize(p);

    predicate Separated(Bitstream* stream, AdhesionFactor* p) =
      \separated(stream, p) &&
      \separated(stream->addr + (0..stream->size-1), p);

    predicate Invariant(AdhesionFactor* p) =
      Invariant(p->Q_DIR)             &&
      Invariant(p->L_PACKET)          &&
      Invariant(p->Q_SCALE)           &&
      Invariant(p->D_ADHESION)        &&
      Invariant(p->L_ADHESION)        &&
      Invariant(p->M_ADHESION);

    predicate ZeroInitialized(AdhesionFactor* p) =
      ZeroInitialized(p->Q_DIR)             &&
      ZeroInitialized(p->L_PACKET)          &&
      ZeroInitialized(p->Q_SCALE)           &&
      ZeroInitialized(p->D_ADHESION)        &&
      ZeroInitialized(p->L_ADHESION)        &&
      ZeroInitialized(p->M_ADHESION);

    predicate EqualBits(Bitstream* stream, integer pos, AdhesionFactor* p) =
      EqualBits(stream, pos,       pos + 2,   p->Q_DIR)             &&
      EqualBits(stream, pos + 2,   pos + 15,  p->L_PACKET)          &&
      EqualBits(stream, pos + 15,  pos + 17,  p->Q_SCALE)           &&
      EqualBits(stream, pos + 17,  pos + 32,  p->D_ADHESION)        &&
      EqualBits(stream, pos + 32,  pos + 47,  p->L_ADHESION)        &&
      EqualBits(stream, pos + 47,  pos + 48,  p->M_ADHESION);

    predicate UpperBitsNotSet(AdhesionFactor* p) =
      UpperBitsNotSet(p->Q_DIR,            2)   &&
      UpperBitsNotSet(p->L_PACKET,         13)  &&
      UpperBitsNotSet(p->Q_SCALE,          2)   &&
      UpperBitsNotSet(p->D_ADHESION,       15)  &&
      UpperBitsNotSet(p->L_ADHESION,       15)  &&
      UpperBitsNotSet(p->M_ADHESION,       1);

*/

/*@
    requires valid:      \valid_read(p);
    requires invariant:  Invariant(p);

    assigns \nothing;

    ensures result:  \result <==> UpperBitsNotSet(p);
*/
int AdhesionFactor_UpperBitsNotSet(const AdhesionFactor* p);

/*@
    requires valid_stream:      Writeable(stream);
    requires stream_invariant:  Invariant(stream, MaxBitSize(p));
    requires valid_package:     \valid_read(p);
    requires invariant:         Invariant(p);
    requires separation:        Separated(stream, p);

    assigns stream->bitpos;
    assigns stream->addr[0..(stream->size-1)];

    behavior normal_case:
      assumes Normal{Pre}(stream, MaxBitSize(p)) && UpperBitsNotSet{Pre}(p);

      assigns stream->bitpos;
      assigns stream->addr[0..(stream->size-1)];

      ensures result:     \result == 1;
      ensures increment:  stream->bitpos == \old(stream->bitpos) + BitSize(p);
      ensures left:       Unchanged{Here,Old}(stream, 0, \old(stream->bitpos));
      ensures middle:     EqualBits(stream, \old(stream->bitpos), p);
      ensures right:      Unchanged{Here,Old}(stream, stream->bitpos, 8 * stream->size);

    behavior values_too_big:
      assumes Normal{Pre}(stream, MaxBitSize(p)) && !UpperBitsNotSet{Pre}(p);

      assigns \nothing;

      ensures result:        \result == -2;

    behavior invalid_bit_sequence:
      assumes !Normal{Pre}(stream, MaxBitSize(p));

      assigns \nothing;

      ensures result:       \result == -1;

    complete behaviors;
    disjoint behaviors;
*/
int AdhesionFactor_EncodeBit(const AdhesionFactor* p, Bitstream* stream);

/*@
    requires valid_stream:      Readable(stream);
    requires stream_invariant:  Invariant(stream, MaxBitSize(p));
    requires valid_package:     \valid(p);
    requires separation:        Separated(stream, p);

    assigns stream->bitpos;
    assigns *p;

    ensures unchanged:          Unchanged{Here,Old}(stream, 0, 8*stream->size);

    behavior normal_case:
      assumes Normal{Pre}(stream, MaxBitSize(p));

      assigns stream->bitpos;
      assigns *p;

      ensures invariant:  Invariant(p);
      ensures result:     \result == 1;
      ensures increment:  stream->bitpos == \old(stream->bitpos) + BitSize(p);
      ensures equal:      EqualBits(stream, \old(stream->bitpos), p);
      ensures upper:      UpperBitsNotSet(p);

    behavior error_case:
      assumes !Normal{Pre}(stream, MaxBitSize(p));

      assigns \nothing;

      ensures result: \result == 0;

    complete behaviors;
    disjoint behaviors;
*/
int AdhesionFactor_DecodeBit(AdhesionFactor* p, Bitstream* stream);

#ifndef FRAMAC_IGNORE

AdhesionFactor*  AdhesionFactor_New(void);

void   AdhesionFactor_Delete(AdhesionFactor*);

static inline void AdhesionFactor_Init(AdhesionFactor* p)
{
    p->header.NID_PACKET = 71;
    p->header.list = TRACKTOTRAIN;
    p->Q_DIR = 0;
    p->L_PACKET = 0;
    p->Q_SCALE = 0;
    p->D_ADHESION = 0;
    p->L_ADHESION = 0;
    p->M_ADHESION = 0;
}

static inline void AdhesionFactor_Print(const AdhesionFactor* p, FILE* stream)
{
    PacketHeader_Print(&p->header, stream);
    fprintf(stream, "(%lu,%lu,%lu,%lu,%lu,%lu)",
            p->Q_DIR,
            p->L_PACKET,
            p->Q_SCALE,
            p->D_ADHESION,
            p->L_ADHESION,
            p->M_ADHESION);
}

static inline int AdhesionFactor_Equal(const AdhesionFactor* a, const AdhesionFactor* b)
{
    int status = PacketHeader_Equal(&a->header, &b->header);
    
    status = status && (a->Q_DIR == b->Q_DIR);
    status = status && (a->L_PACKET == b->L_PACKET);
    status = status && (a->Q_SCALE == b->Q_SCALE);
    status = status && (a->D_ADHESION == b->D_ADHESION);
    status = status && (a->L_ADHESION == b->L_ADHESION);
    status = status && (a->M_ADHESION == b->M_ADHESION);

    return status;
}

static inline uint32_t AdhesionFactor_Length(const AdhesionFactor* p)
{
    return (uint32_t)(p->L_PACKET);
}

int AdhesionFactor_EncodeInt(const AdhesionFactor* p, Metadata* data, kcg_int* stream);

int AdhesionFactor_DecodeInt(AdhesionFactor* p, const Metadata* data, const kcg_int* stream);

#endif // FRAMAC_IGNORE

#endif // ADHESIONFACTOR_H_INCLUDED


