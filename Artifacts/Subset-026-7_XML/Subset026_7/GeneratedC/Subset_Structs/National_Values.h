#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_National_Values
#define NESTINGMARK_oETCS_Packet_TrackToTrain_National_Values
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_National_Values
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

struct DATA_oETCS_TrackToTrain_National_Values {
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
// Downloads a set of National Values to the train
// Packet Number = 3

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t D_VALIDNV;                              			// # 15	
	uint32_t NID_C;                                  			// # 10		// Identification of national areas to which the set applies    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t NID_C;                           		// # 10		// Identification of additional national area(s) to which the set applies        
        } a_data[33];
        } p;

	uint32_t V_NVSHUNT;                              			// # 7	
	uint32_t V_NVSTFF;                               			// # 7	
	uint32_t V_NVONSIGHT;                            			// # 7	
	uint32_t V_NVLIMSUPERV;                          			// # 7	
	uint32_t V_NVUNFIT;                              			// # 7	
	uint32_t V_NVREL;                                			// # 7	
	uint32_t D_NVROLL;                               			// # 15	
	uint32_t Q_NVSBTSMPERM;                          			// # 1	
	uint32_t Q_NVEMRRLS;                             			// # 1	
	uint32_t Q_NVGUIPERM;                            			// # 1	
	uint32_t Q_NVSBFBPERM;                           			// # 1	
	uint32_t Q_NVINHSMICPERM;                        			// # 1	
	uint32_t V_NVALLOWOVTRP;                         			// # 7	
	uint32_t V_NVSUPOVTRP;                           			// # 7	
	uint32_t D_NVOVTRP;                              			// # 15	
	uint32_t T_NVOVTRP;                              			// # 8	
	uint32_t D_NVPOTRP;                              			// # 15	
	uint32_t M_NVCONTACT;                            			// # 2	
	uint32_t T_NVCONTACT;                            			// # 8	
	uint32_t M_NVDERUN;                              			// # 1	
	uint32_t D_NVSTFF;                               			// # 15	
	uint32_t Q_NVDRIVER_ADHES;                       			// # 1	
	uint32_t A_NVMAXREDADH1;                         			// # 6	
	uint32_t A_NVMAXREDADH2;                         			// # 6	
	uint32_t A_NVMAXREDADH3;                         			// # 6	
	uint32_t Q_NVLOCACC;                             			// # 6	
	uint32_t M_NVAVADH;                              			// # 5	
	uint32_t M_NVEBCL;                               			// # 4	
	uint32_t Q_NVKINT;                               			// # 1		// if (Q_NVKINT == 1)
	uint32_t Q_NVKVINTSET;                           			// # 2		// Only if Q_NVKINT = 1, Q_NVKVINTSET and the following variables follow	// if (Q_NVKVINTSET == 1)
	uint32_t A_NVP12;                                			// # 6		// Only if Q_NVKVINTSET = 1
	uint32_t A_NVP23;                                			// # 6		// Only if Q_NVKVINTSET = 1
	uint32_t V_NVKVINT;                              			// # 7		// = 0 km/h
	uint32_t M_NVKVINT;                              			// # 7		// Valid between V_NVKVINT and V_NVKVINT(1)If Q_NVKVINTSET = 1, gives the correction factor if maximum emergency brake deceleration is lower than A_NVP12    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t V_NVKVINT;                       		// # 7	
		uint32_t M_NVKVINT;                       		// # 7		// Valid between V_NVKVINT(n) and V_NVKVINT(n+1)If Q_NVKVINTSET = 1, gives the correction factor if maximum emergency brake deceleration is lower than A_NVP12        
        } a_data[33];
        } n;
    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t Q_NVKVINTSET;                    		// # 2		// if (Q_NVKVINTSET(k) == 1)
		uint32_t A_NVP12;                         		// # 6		// Only if Q_NVKVINTSET(k) = 1
		uint32_t A_NVP23;                         		// # 6		// Only if Q_NVKVINTSET(k) = 1
		uint32_t V_NVKVINT;                       		// # 7		// = 0km/h
		uint32_t M_NVKVINT;                       		// # 7		// If Q_NVKVINTSET(k) = 1; Valid between V_NVKVINT(k) and V_NVKVINT(k,1). Gives the correction factor if maximum emergency brake deceleration is lower than A_NVP12(k).
	struct {        
            uint32_t N_ITER;                      // N_ITER(k)            // # 5
		// # 5	
	struct {
		uint32_t V_NVKVINT;                       		// # 7	
		uint32_t M_NVKVINT;                       		// # 7		// If Q_NVKVINTSET(k) = 1.Valid between V_NVKVINT(k,m) and V_NVKVINT(k,m+1)gives the correction factor if maximum emergency brake deceleration is lower than A_NVP12(k)        
        } a_data[32];
        } km;
        
        } a_data[33];
        } k;

	uint32_t L_NVKRINT;                              			// # 5		// = 0m
	uint32_t M_NVKRINT;                              			// # 5		// Valid between L_NVKRINT and L_NVKRINT(1)    
        struct {
            uint32_t used;                        //N_ITER+1              // # 5
            struct {

		uint32_t L_NVKRINT;                       		// # 5	
		uint32_t M_NVKRINT;                       		// # 5		// Valid between L_NVKRINT(l) and L_NVKRINT(l+1)        
        } a_data[33];
        } l;

	uint32_t M_NVKTINT;                              			// # 5	
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_National_Values T_DATA_oETCS_TrackToTrain_National_Values;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_National_Values* TP_DATA_oETCS_TrackToTrain_National_Values;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_National_Values  oETCS_Packet_TrackToTrain_National_Values;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_National_Values  oETCS_Packet_TrackToTrain_National_Values = new(T_DATA_oETCS_TrackToTrain_National_Values);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_National_Values->...
// maybe : memset(oETCS_Packet_TrackToTrain_National_Values, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_National_Values));
// for complete 0 content.

#endif


