#ifndef NESTINGMARK_oETCS_Packet_TrainToTrack_Onboard_telephone_numbers
#define NESTINGMARK_oETCS_Packet_TrainToTrack_Onboard_telephone_numbers
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrainToTrack_Onboard_telephone_numbers
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

struct DATA_oETCS_TrainToTrack_Onboard_telephone_numbers {
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
// Telephone numbers associated to the onboard equipment
// Packet Number = 3

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t L_PACKET;                               			// # 13	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t NID_RADIO;                       		// # 64	        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrainToTrack_Onboard_telephone_numbers T_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers* TP_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers  oETCS_Packet_TrainToTrack_Onboard_telephone_numbers;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers  oETCS_Packet_TrainToTrack_Onboard_telephone_numbers = new(T_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrainToTrack_Onboard_telephone_numbers->...
// maybe : memset(oETCS_Packet_TrainToTrack_Onboard_telephone_numbers, 0, sizeof(T_DATA_oETCS_Packet_TrainToTrack_Onboard_telephone_numbers));
// for complete 0 content.

#endif


