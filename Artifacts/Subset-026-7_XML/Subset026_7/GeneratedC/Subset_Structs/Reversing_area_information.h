#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Reversing_area_information
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Reversing_area_information
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Reversing_area_information
- Description: UNISIG SUBSET-026-7, ISSUE : 3.3.0, 3.5 ERTMS/ETCS language) 
- Copyright (c) Siemens AG, 2013, All Rights Reserved
 	
- Licensed under the EUPL V.1.1 ( http://joinup.ec.europa.eu/software/page/eupl/licence-eupl )
- Gist URL: none
- Cryptography: No
- Author(s): SiemensRailAutomation

Disclaimer:

The use of this software is limited to NON-vital applications. 
It has NOT been developed for vital operation purposes and MUST NOT be used for applications 
which may cause harm to people, physical accidents or financial loss. 

THEREFORE, NO LIABILITY WILL BE GIVEN FOR SUCH AND ANY OTHER KIND OF USE.  	
============================================================================= */
#include <stdint.h>

struct DATA_oETCS_TrackToTrain_Reversing_area_information {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=Any
// Used to send start and length of reversing area to the on-board
// Packet Number = 138

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t D_STARTREVERSE;                         			// # 15	
	uint32_t L_REVERSEAREA;                          			// # 15	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Reversing_area_information T_DATA_oETCS_TrackToTrain_Reversing_area_information;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Reversing_area_information* TP_DATA_oETCS_TrackToTrain_Reversing_area_information;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Reversing_area_information  oETCS_Packet_TrackToTrain_Reversing_area_information;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Reversing_area_information  oETCS_Packet_TrackToTrain_Reversing_area_information = new(T_DATA_oETCS_TrackToTrain_Reversing_area_information);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Reversing_area_information->...
// maybe : memset(oETCS_Packet_TrackToTrain_Reversing_area_information, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Reversing_area_information));
// for complete 0 content.

#endif


