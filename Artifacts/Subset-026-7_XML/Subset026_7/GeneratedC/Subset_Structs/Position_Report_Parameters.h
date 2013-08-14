#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Position_Report_Parameters
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Position_Report_Parameters
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Position_Report_Parameters
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

struct DATA_oETCS_TrackToTrain_Position_Report_Parameters {
  int vUsed_idx;                             // aktueller Fuellgrad von aPacket

  struct 
  {
          uint32_t v_TOccurence;            // Zeitpunkt des Empfangs
          uint64_t v_DOccurrence;           // Ort des Empfangs
          uint32_t vState;                  // Bearbeitungszustände  
  } info;

  struct 
 { 
// TransmissionMedia=RBC
// This packet is intended to give parameters telling when and how often the position has to be reported.
// Packet Number = 58

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t T_CYCLOC;                               			// # 8	
	uint32_t D_CYCLOC;                               			// # 15	
	uint32_t M_LOC;                                  			// # 3	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t D_LOC;                           		// # 15	
		uint32_t Q_LGTLOC;                        		// # 1	        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Position_Report_Parameters T_DATA_oETCS_TrackToTrain_Position_Report_Parameters;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Position_Report_Parameters* TP_DATA_oETCS_TrackToTrain_Position_Report_Parameters;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Position_Report_Parameters  oETCS_Packet_TrackToTrain_Position_Report_Parameters;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Position_Report_Parameters  oETCS_Packet_TrackToTrain_Position_Report_Parameters = new(T_DATA_oETCS_TrackToTrain_Position_Report_Parameters);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Position_Report_Parameters->...
// maybe : memset(oETCS_Packet_TrackToTrain_Position_Report_Parameters, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Position_Report_Parameters));
// for complete 0 content.

#endif


