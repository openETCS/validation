#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Track_Condition_Big_Metal_Masses
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

struct DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses {
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
// The packet gives details concerning where to ignore integrity check alarms of balise transmission due to big metal masses trackside.
// Packet Number = 67

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t D_TRACKCOND;                            			// # 15	
	uint32_t L_TRACKCOND;                            			// # 15		// The distance for which integrity check alarms of balise transmission shall be ignored    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t D_TRACKCOND;                     		// # 15	
		uint32_t L_TRACKCOND;                     		// # 15		// The distance for which integrity check alarms of balise transmission shall be ignored        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses T_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses* TP_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses  oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses  oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses = new(T_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses->...
// maybe : memset(oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Track_Condition_Big_Metal_Masses));
// for complete 0 content.

#endif


