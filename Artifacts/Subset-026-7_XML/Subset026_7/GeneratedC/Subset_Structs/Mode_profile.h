#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Mode_profile
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Mode_profile
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Mode_profile
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

struct DATA_oETCS_TrackToTrain_Mode_profile {
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
// Mode profile associated to an MA
// Packet Number = 80

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t D_MAMODE;                               			// # 15	
	uint32_t M_MAMODE;                               			// # 2		// OS, LS, SH
	uint32_t V_MAMODE;                               			// # 7	
	uint32_t L_MAMODE;                               			// # 15	
	uint32_t L_ACKMAMODE;                            			// # 15	
	uint32_t Q_MAMODE;                               			// # 1	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t D_MAMODE;                        		// # 15	
		uint32_t M_MAMODE;                        		// # 2		// OS, LS, SH
		uint32_t V_MAMODE;                        		// # 7	
		uint32_t L_MAMODE;                        		// # 15	
		uint32_t L_ACKMAMODE;                     		// # 15	
		uint32_t Q_MAMODE;                        		// # 1	        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Mode_profile T_DATA_oETCS_TrackToTrain_Mode_profile;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Mode_profile* TP_DATA_oETCS_TrackToTrain_Mode_profile;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Mode_profile  oETCS_Packet_TrackToTrain_Mode_profile;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Mode_profile  oETCS_Packet_TrackToTrain_Mode_profile = new(T_DATA_oETCS_TrackToTrain_Mode_profile);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Mode_profile->...
// maybe : memset(oETCS_Packet_TrackToTrain_Mode_profile, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Mode_profile));
// for complete 0 content.

#endif


