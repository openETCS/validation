#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Permitted_Braking_Distance_Information
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

struct DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information {
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
// This packet requests the on-board calculation of speed restrictions which ensure a given permitted brake distance in case of an EB, or SB, intervention
// Packet Number = 52

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t Q_TRACKINIT;                            			// # 1		// if (Q_TRACKINIT == 1)
	uint32_t D_TRACKINIT;                            			// # 15		// Only if Q_TRACKINIT = 1	// if (Q_TRACKINIT == 0)
	uint32_t D_PBD;                                  			// # 15		// Only if Q_TRACKINIT = 0 D_PBD and the following variables follow
	uint32_t Q_GDIR;                                 			// # 1		// 0 = downhill, 1 = uphill
	uint32_t G_PBDSR;                                			// # 8		// Gradient value to be used for the calculation
	uint32_t Q_PBDSR;                                			// # 1	
	uint32_t D_PBDSR;                                			// # 15	
	uint32_t L_PBDSR;                                			// # 15	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t D_PBD;                           		// # 15	
		uint32_t Q_GDIR;                          		// # 1		// 0 = downhill, 1 = uphill
		uint32_t G_PBDSR;                         		// # 8		// Gradient value to be used for the calculation
		uint32_t Q_PBDSR;                         		// # 1	
		uint32_t D_PBDSR;                         		// # 15	
		uint32_t L_PBDSR;                         		// # 15	        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information T_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information* TP_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information  oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information  oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information = new(T_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information->...
// maybe : memset(oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Permitted_Braking_Distance_Information));
// for complete 0 content.

#endif


