#ifndef BITWALKER_H
#define BITWALKER_H
#include <stdint.h>

/*
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / Bitwalker / Bitwalker.h
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright Siemens AG, 2013
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE. 
*/

uint64_t Bitwalker_Peek(unsigned int Startposition, unsigned int Length, uint8_t Bitstream[], unsigned int BitstreamSizeInBytes);
int 	 Bitwalker_Poke(unsigned int Startposition, unsigned int Length, uint8_t Bitstream[], unsigned int BitstreamSizeInBytes, uint64_t Value);

typedef struct	{	uint8_t *Bitstream;
					unsigned int Length;
					unsigned int CurrentBitposition;
				} T_Bitwalker_Incremental_Locals;

void	 Bitwalker_IncrementalWalker_Init(T_Bitwalker_Incremental_Locals *Locals, uint8_t Bitstream[], unsigned int Size, unsigned int FirstBitposition);

uint64_t Bitwalker_IncrementalWalker_Peek_Next (T_Bitwalker_Incremental_Locals *Locals, unsigned int Length);
int		 Bitwalker_IncrementalWalker_Peek_Finish (T_Bitwalker_Incremental_Locals *Locals);

int		 Bitwalker_IncrementalWalker_Poke_Next(T_Bitwalker_Incremental_Locals *Locals, unsigned int Length, uint64_t Value);
int		 Bitwalker_IncrementalWalker_Poke_Finish (T_Bitwalker_Incremental_Locals *Locals);

#endif // BITWALKER_H
