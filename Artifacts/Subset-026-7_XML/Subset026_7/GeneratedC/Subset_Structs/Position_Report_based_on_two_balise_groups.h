#ifndef NESTINGMARK_oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups
#define NESTINGMARK_oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrainToTrack_Position_Report_based_on_two_balise_groups
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

struct DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=RBC, RIU
// This packet is an extension of the 'standard position report ' packet 0. It is used in case of single balise groups if the orientation of the LRBG is unknown but the on-board equipment is able to report a second balise group (the one detected before) to give a direction reference for the directional information in the position report.
// Packet Number = 1

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t NID_LRBG;                               			// # 10+14	
	uint32_t NID_PRVLRBG;                            			// # 10+14		// Used as reference for all directional information in the packet: a move from PRVLRBG towards the LRBG  defines the 'nominal' direction
	uint32_t D_LRBG;                                 			// # 15	
	uint32_t Q_DIRLRBG;                              			// # 2		// Train orientation according to reference direction
	uint32_t Q_DLRBG;                                			// # 2		// Train front position according to reference direction
	uint32_t L_DOUBTOVER;                            			// # 15	
	uint32_t L_DOUBTUNDER;                           			// # 15	
	uint32_t Q_LENGTH;                               			// # 2		// if ((Q_LENGTH == 1) OR (Q_LENGTH == 2))
	uint32_t L_TRAININT;                             			// # 15		// If Q_LENGTH = 1 OR 2
	uint32_t V_TRAIN;                                			// # 7	
	uint32_t Q_DIRTRAIN;                             			// # 2		// Actual running direction according to reference direction
	uint32_t M_MODE;                                 			// # 4	
	uint32_t M_LEVEL;                                			// # 3		// if (M_LEVEL == 1)
	uint32_t NID_NTC;                                			// # 8		// If M_LEVEL = 1
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups T_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups* TP_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups  oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups  oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups = new(T_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups->...
// maybe : memset(oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups, 0, sizeof(T_DATA_oETCS_Packet_TrainToTrack_Position_Report_based_on_two_balise_groups));
// for complete 0 content.

#endif


