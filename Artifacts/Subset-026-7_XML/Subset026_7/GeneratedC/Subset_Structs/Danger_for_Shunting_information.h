#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Danger_for_Shunting_information
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Danger_for_Shunting_information
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Danger_for_Shunting_information
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

struct DATA_oETCS_TrackToTrain_Danger_for_Shunting_information {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=Balise
// Transmission of the aspect of a shunting signal
// Packet Number = 132

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_ASPECT;                               			// # 1	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Danger_for_Shunting_information T_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information* TP_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information  oETCS_Packet_TrackToTrain_Danger_for_Shunting_information;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information  oETCS_Packet_TrackToTrain_Danger_for_Shunting_information = new(T_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Danger_for_Shunting_information->...
// maybe : memset(oETCS_Packet_TrackToTrain_Danger_for_Shunting_information, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Danger_for_Shunting_information));
// for complete 0 content.

#endif


