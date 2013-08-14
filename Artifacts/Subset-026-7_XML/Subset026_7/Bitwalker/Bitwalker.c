#include "Bitwalker.h"
/*
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / Bitwalker.c
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

// switch between easily debugable code and compact code with reduced number of local variables and intensified bit manipulation

static const uint8_t BitwalkerBitMaskTable[] = {0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01};

uint64_t Bitwalker_Peek (unsigned int Startposition, unsigned int Length, uint8_t Bitstream[], unsigned int BitstreamSizeInBytes)
{
	// plausibility check: is last byte in range
	if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
		return 0;	// error: index out of range

	// Everything ok, we can iterate bitwise
	uint64_t retval = 0;

	unsigned int i;
	for (i = Startposition; i < Startposition + Length; i++)
	{
		uint8_t CurrentValue = Bitstream[i >> 3] & BitwalkerBitMaskTable[i & 0x07];

		retval = (retval << 1) + (uint8_t)(CurrentValue != 0);	// tricky conversion bool to int (Zero or One):
																// false == 0, true == 1 ==> if bit is set, than 1, else 0
	}

	return retval;
}


int Bitwalker_Poke (unsigned int Startposition, unsigned int Length, uint8_t Bitstream[], unsigned int BitstreamSizeInBytes, uint64_t Value)
{
	// plausibility check: is last byte in range
	if (((Startposition + Length - 1) >> 3) >= BitstreamSizeInBytes)
		return -1;	// error: index out of range

	// plausibility check: is value in range
	uint64_t MaxValue = (((uint64_t)0x01) << Length) - 1;
	if (MaxValue < Value)
		return -2;		// error: value to big for bit field

	// Everything ok, we can iterate bitwise from left to right
	int i;
	for (i = Startposition + Length - 1; i >= (int)Startposition; i--)
	{
		if ((Value & 0x01) == 0)
			 Bitstream[i >> 3] &= ~BitwalkerBitMaskTable[i & 0x07];
		else Bitstream[i >> 3] |=  BitwalkerBitMaskTable[i & 0x07];

		Value >>= 1;	//prepare next iteration with value without written bit
	}

	return 0;
}


void Bitwalker_IncrementalWalker_Init (T_Bitwalker_Incremental_Locals *Locals, uint8_t Bitstream[], unsigned int Size, unsigned int FirstBitposition)
{
	Locals->Bitstream			= Bitstream;
	Locals->Length				= Size;
	Locals->CurrentBitposition	= FirstBitposition;
}


uint64_t Bitwalker_IncrementalWalker_Peek_Next (T_Bitwalker_Incremental_Locals *Locals, unsigned int Length)
{
	// plausibility check is done when reading the bits
	uint64_t retval = Bitwalker_Peek(Locals->CurrentBitposition, Length, Locals->Bitstream, Locals->Length);
	Locals->CurrentBitposition += Length;
	return retval;
}


int Bitwalker_IncrementalWalker_Peek_Finish (T_Bitwalker_Incremental_Locals *Locals)
{
	return Locals->CurrentBitposition;
}


int Bitwalker_IncrementalWalker_Poke_Next(T_Bitwalker_Incremental_Locals *Locals, unsigned int Length, uint64_t Value)
{
	// plausibility check is done when reading the bits
	int retval = Bitwalker_Poke(Locals->CurrentBitposition, Length, Locals->Bitstream, Locals->Length, Value);
	Locals->CurrentBitposition += Length;
	return retval;
}


int Bitwalker_IncrementalWalker_Poke_Finish(T_Bitwalker_Incremental_Locals *Locals)
{
	return Locals->CurrentBitposition;
}
