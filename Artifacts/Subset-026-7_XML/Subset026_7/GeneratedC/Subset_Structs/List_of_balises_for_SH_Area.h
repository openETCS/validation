#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area
#define NESTINGMARK_oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_List_of_balises_for_SH_Area
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

struct DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area {
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
// Used to list balise group(s) which the train can pass over in SH mode
// Packet Number = 49

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t Q_NEWCOUNTRY;                    		// # 1		// if (Q_NEWCOUNTRY(k) == 1)
		uint32_t NID_C;                           		// # 10		// if Q_NEWCOUNTRY(k) = 1
		uint32_t NID_BG;                          		// # 14	        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area T_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area* TP_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area  oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area  oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area = new(T_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area->...
// maybe : memset(oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_List_of_balises_for_SH_Area));
// for complete 0 content.

#endif


