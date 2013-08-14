#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Stop_Shunting_on_desk_opening
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

struct DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszust�nde  
  } info;

  struct 
 { 
// TransmissionMedia=Balise
// Packet to stop Shunting on desk opening.
// Packet Number = 135

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening T_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening* TP_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening  oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening  oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening = new(T_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening->...
// maybe : memset(oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Stop_Shunting_on_desk_opening));
// for complete 0 content.

#endif


