#include <stdio.h>
#include "Bitwalker.h"
#include "opnETCS_Decoder.h"
#include "System_Version_order.h"

/*
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / Bitwalker / main.c
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright Siemens AG, 2013
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: ---
- Cryptography: No

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE. 
*/

int main(void)
{
	//	uint8_t Teststream[] = {0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
	//							0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff
	//						   };
	uint8_t Teststream[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,

							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
							0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
						   };

	int size = sizeof(Teststream);

	uint64_t Testwort = 0;
	uint64_t TestwortRetval = 0;

	T_Bitwalker_Incremental_Locals PeekLocals;
	T_Bitwalker_Incremental_Locals PokeLocals;

	Bitwalker_IncrementalWalker_Init(&PeekLocals, Teststream, size, 0);
	Bitwalker_IncrementalWalker_Init(&PokeLocals, Teststream, size, 0);

    {
        //
        // Für Testzwecke
        //
        //	Testwort = 1;
        //	Bitwalker_IncrementalWalker_Poke_Next(&PokeLocals, 8, Testwort);
        //	TestwortRetval = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);

        //	Testwort = 2;
        //	Bitwalker_IncrementalWalker_Poke_Next(&PokeLocals, 8, Testwort);
        //	TestwortRetval = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);

        //	Testwort = 4;
        //	Bitwalker_IncrementalWalker_Poke_Next(&PokeLocals, 8, Testwort);
        //	TestwortRetval = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);

        //	Testwort = 8;
        //	Bitwalker_IncrementalWalker_Poke_Next(&PokeLocals, 8, Testwort);
        //	TestwortRetval = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);

        //	Testwort = 16;
        //	Bitwalker_IncrementalWalker_Poke_Next(&PokeLocals, 8, Testwort);
        //	TestwortRetval = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);

        //	Testwort = 32;
        //	Bitwalker_IncrementalWalker_Poke_Next(&PokeLocals, 8, Testwort);
        //	TestwortRetval = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    }
    // create bitstream of telegram "System Version order"

    uint32_t Bitlength   = 30; //  net bitlength of telegram "System Version order" without header
    uint32_t Bytelength  = Bitlength / 8 + 1;
    uint32_t FirstBitPos = 0;
    uint32_t ArrayIndex  = 0;

    // <Packet Number="2" Name="System Version order" TransmissionMedia="Balise" ><TlgVar Name="NID_PACKET" Length="8"  />
    Bitwalker_IncrementalWalker_Poke_Next(&PeekLocals, 8, 2);
    // <TlgVar Name="Q_DIR" Length="2"  /> <Special Value="01"  Description="Nominal" />
    Bitwalker_IncrementalWalker_Poke_Next(&PeekLocals, 2, 1);
    // Telegrammlänge in Bit ( normalerweise incl. Header; Den haben wir aber noch nicht)
    Bitwalker_IncrementalWalker_Poke_Next(&PeekLocals, 13, Bitlength);
    // <Special Value="010 0000"  Description="Version 2_0 introduced in SRS 3_3_0" />
    Bitwalker_IncrementalWalker_Poke_Next(&PeekLocals, 7, 32);

    T_DATA_oETCS_TrackToTrain_System_Version_order oETCS;

     TrackToTrain_System_Version_order(&Teststream, FirstBitPos, Bytelength, ArrayIndex,  &oETCS);

     Testwort = oETCS.aPacket[ArrayIndex].NID_PACKET;  // shall be  2
     Testwort = oETCS.aPacket[ArrayIndex].Q_DIR;       // shall be  1
     Testwort = oETCS.aPacket[ArrayIndex].L_PACKET;    // shall be 30
     Testwort = oETCS.aPacket[ArrayIndex].M_VERSION;   // shall be 32


	return TestwortRetval;
}

