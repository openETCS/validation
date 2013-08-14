#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_International_Static_Speed_Profile
#define NESTINGMARK_oETCS_Packet_TrackToTrain_International_Static_Speed_Profile
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_International_Static_Speed_Profile
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

struct DATA_oETCS_TrackToTrain_International_Static_Speed_Profile {
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
// Static speed profile and optionally speed limits depending on the international train category.
// Packet Number = 27

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t D_STATIC;                               			// # 15	
	uint32_t V_STATIC;                               			// # 7		// Basic SSP
	uint32_t Q_FRONT;                                			// # 1	    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t Q_DIFF;                          		// # 2		// if (Q_DIFF(n) == 0)
		uint32_t NC_CDDIFF;                       		// # 4		// If Q_DIFF(n) = 0	// if ((Q_DIFF(n) == 1) or (Q_DIFF(n) == 2))
		uint32_t NC_DIFF;                         		// # 4		// If Q_DIFF(n) = 1 or 2
		uint32_t V_DIFF;                          		// # 7	        
        } a_data[33];
        } n;
    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t D_STATIC;                        		// # 15	
		uint32_t V_STATIC;                        		// # 7		// Basic SSP
		uint32_t Q_FRONT;                         		// # 1	
	struct {        
            uint32_t N_ITER;                      // N_ITER(k)            // # 5
		// # 5	
	struct {
		uint32_t Q_DIFF;                          		// # 2		// if (Q_DIFF(k,m) == 0)
		uint32_t NC_CDDIFF;                       		// # 4		// If Q_DIFF(k,m) = 0	// if ((Q_DIFF(k,m) == 1) or (Q_DIFF(k,m) == 2))
		uint32_t NC_DIFF;                         		// # 4		// If Q_DIFF(k,m) = 1 or 2
		uint32_t V_DIFF;                          		// # 7	        
        } a_data[32];
        } km;
        
        } a_data[33];
        } k;

} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_International_Static_Speed_Profile T_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile* TP_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile  oETCS_Packet_TrackToTrain_International_Static_Speed_Profile;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile  oETCS_Packet_TrackToTrain_International_Static_Speed_Profile = new(T_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_International_Static_Speed_Profile->...
// maybe : memset(oETCS_Packet_TrackToTrain_International_Static_Speed_Profile, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_International_Static_Speed_Profile));
// for complete 0 content.

#endif


