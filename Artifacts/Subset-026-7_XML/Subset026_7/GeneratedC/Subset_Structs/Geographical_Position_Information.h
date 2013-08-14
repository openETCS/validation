#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Geographical_Position_Information
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Geographical_Position_Information
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Geographical_Position_Information
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

struct DATA_oETCS_TrackToTrain_Geographical_Position_Information {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=Balise, RBC
// This packet gives geographical location information for one or multiple references to the train.
// Packet Number = 79

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t Q_NEWCOUNTRY;                           			// # 1		// if (Q_NEWCOUNTRY == 1)
	uint32_t NID_C;                                  			// # 10		// if Q_NEWCOUNTRY = 1
	uint32_t NID_BG;                                 			// # 14		// Geographical Position Reference Balise Group
	uint32_t D_POSOFF;                               			// # 15	
	uint32_t Q_MPOSITION;                            			// # 1		// Geographical Position counting direction
	uint32_t M_POSITION;                             			// # 24		// Track kilometre reference value    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t Q_NEWCOUNTRY;                    		// # 1		// if (Q_NEWCOUNTRY(k) == 1)
		uint32_t NID_C;                           		// # 10		// if Q_NEWCOUNTRY(k) = 1
		uint32_t NID_BG;                          		// # 14		// Geographical Position Reference Balise Group
		uint32_t D_POSOFF;                        		// # 15	
		uint32_t Q_MPOSITION;                     		// # 1		// Geographical Position counting direction
		uint32_t M_POSITION;                      		// # 24		// Track kilometre reference value        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Geographical_Position_Information T_DATA_oETCS_TrackToTrain_Geographical_Position_Information;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Geographical_Position_Information* TP_DATA_oETCS_TrackToTrain_Geographical_Position_Information;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Geographical_Position_Information  oETCS_Packet_TrackToTrain_Geographical_Position_Information;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Geographical_Position_Information  oETCS_Packet_TrackToTrain_Geographical_Position_Information = new(T_DATA_oETCS_TrackToTrain_Geographical_Position_Information);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Geographical_Position_Information->...
// maybe : memset(oETCS_Packet_TrackToTrain_Geographical_Position_Information, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Geographical_Position_Information));
// for complete 0 content.

#endif


