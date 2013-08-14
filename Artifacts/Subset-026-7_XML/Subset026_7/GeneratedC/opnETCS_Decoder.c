#include <stdint.h>
#include "subset026_7.h"
#include "Bitwalker.h"


/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / Decoder.c
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


//Namespace TrackToTrain starts here

void TrackToTrain_Virtual_Balise_Cover_marker (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Virtual_Balise_Cover_marker oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 0
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].NID_VBCMK                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_System_Version_order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_System_Version_order oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 2
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].M_VERSION                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_National_Values (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_National_Values oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC
// Packet Number = 3
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_VALIDNV                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].p.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].p.a_data[j].NID_C                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].p.used );
	oETCS->aPacket[i_ArrayIndex].V_NVSHUNT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_NVSTFF                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_NVONSIGHT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_NVLIMSUPERV                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_NVUNFIT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_NVREL                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].D_NVROLL                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_NVSBTSMPERM                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_NVEMRRLS                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_NVGUIPERM                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_NVSBFBPERM                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_NVINHSMICPERM                             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].V_NVALLOWOVTRP                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_NVSUPOVTRP                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].D_NVOVTRP                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].T_NVOVTRP                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].D_NVPOTRP                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_NVCONTACT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].T_NVCONTACT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].M_NVDERUN                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_NVSTFF                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_NVDRIVER_ADHES                            = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].A_NVMAXREDADH1                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	oETCS->aPacket[i_ArrayIndex].A_NVMAXREDADH2                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	oETCS->aPacket[i_ArrayIndex].A_NVMAXREDADH3                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	oETCS->aPacket[i_ArrayIndex].Q_NVLOCACC                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	oETCS->aPacket[i_ArrayIndex].M_NVAVADH                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
	oETCS->aPacket[i_ArrayIndex].M_NVEBCL                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].Q_NVKINT                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NVKINT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].Q_NVKVINTSET                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NVKVINTSET == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].A_NVP12                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	oETCS->aPacket[i_ArrayIndex].A_NVP23                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	}
	oETCS->aPacket[i_ArrayIndex].V_NVKVINT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].M_NVKVINT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].n.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].V_NVKVINT                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].M_NVKVINT                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].n.used );
    j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NVKVINTSET                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NVKVINTSET == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].A_NVP12                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].A_NVP23                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].V_NVKVINT                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_NVKVINT                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
        oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.N_ITER = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
        uint32_t Loopend  = oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.N_ITER;      // das ist N_ITER(k)
        uint32_t i        = 0;
        for ( i=0; i < Loopend; i++ ) 
        {
        if ( i == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].V_NVKVINT           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  7);
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].M_NVKVINT           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  7);
		}		// end for
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	oETCS->aPacket[i_ArrayIndex].L_NVKRINT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
	oETCS->aPacket[i_ArrayIndex].M_NVKRINT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
    j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].l.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].l.a_data[j].L_NVKRINT                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
		oETCS->aPacket[i_ArrayIndex].l.a_data[j].M_NVKRINT                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].l.used );
	oETCS->aPacket[i_ArrayIndex].M_NVKTINT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Linking (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Linking oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 5
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_LINK                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
	oETCS->aPacket[i_ArrayIndex].NID_BG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].Q_LINKORIENTATION                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_LINKREACTION                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_LOCACC                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_LINK                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_C                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_BG                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_LINKORIENTATION               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_LINKREACTION                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_LOCACC                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Virtual_Balise_Cover_order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Virtual_Balise_Cover_order oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 6
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_VBCO                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].NID_VBCMK                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 6);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    if ( oETCS->aPacket[i_ArrayIndex].Q_VBCO == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].T_VBC                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Level_1_Movement_Authority (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_1_Movement_Authority oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, Loop, RIU
// Packet Number = 12
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].V_MAIN                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].V_LOA                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].T_LOA                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_SECTION                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SECTIONTIMER                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].T_SECTIONTIMER                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_SECTIONTIMERSTOPLOC           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	oETCS->aPacket[i_ArrayIndex].L_ENDSECTION                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_SECTIONTIMER                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].T_SECTIONTIMER                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_SECTIONTIMERSTOPLOC                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_ENDTIMER                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].T_ENDTIMER                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_ENDTIMERSTARTLOC                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_DANGERPOINT                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_DP                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].V_RELEASEDP                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].Q_OVERLAP                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_STARTOL                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].T_OL                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_OL                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].V_RELEASEOL                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Staff_Responsible_distance_Information_from_loop (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Staff_Responsible_distance_Information_from_loop oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Loop
// Packet Number = 13
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY0                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY0 == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_C0                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
	oETCS->aPacket[i_ArrayIndex].NID_BG0                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY1                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY1 == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_C1                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
	oETCS->aPacket[i_ArrayIndex].NID_BG1                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].D_SR                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY  == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_C                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_BG                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_SR                            = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Level_23_Movement_Authority (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_23_Movement_Authority oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 15
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].V_LOA                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].T_LOA                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_SECTION                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SECTIONTIMER                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].T_SECTIONTIMER                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_SECTIONTIMERSTOPLOC           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	oETCS->aPacket[i_ArrayIndex].L_ENDSECTION                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_SECTIONTIMER                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].T_SECTIONTIMER                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_SECTIONTIMERSTOPLOC                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_ENDTIMER                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].T_ENDTIMER                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_ENDTIMERSTARTLOC                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_DANGERPOINT                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_DP                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].V_RELEASEDP                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].Q_OVERLAP                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_STARTOL                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].T_OL                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_OL                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].V_RELEASEOL                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Repositioning_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Repositioning_Information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 16
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_SECTION                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Gradient_Profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Gradient_Profile oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 21
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_GRADIENT                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_GDIR                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].G_A                                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_GRADIENT                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_GDIR                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].G_A                             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_International_Static_Speed_Profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_International_Static_Speed_Profile oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 27
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_STATIC                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].V_STATIC                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].Q_FRONT                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].n.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].Q_DIFF                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].n.a_data[j].Q_DIFF == 0 ) 
    {
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].NC_CDDIFF                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	}
    if (( oETCS->aPacket[i_ArrayIndex].n.a_data[j].Q_DIFF == 1 )  || ( oETCS->aPacket[i_ArrayIndex].n.a_data[j].Q_DIFF == 2 ))  
    {
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].NC_DIFF                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	}
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].V_DIFF                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].n.used );
    j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_STATIC                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].V_STATIC                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_FRONT                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
        oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.N_ITER = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
        uint32_t Loopend  = oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.N_ITER;      // das ist N_ITER(k)
        uint32_t i        = 0;
        for ( i=0; i < Loopend; i++ ) 
        {
        if ( i == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].Q_DIFF              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  2);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].Q_DIFF == 0 ) 
    {
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].NC_CDDIFF           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  4);
	}
    if (( oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].Q_DIFF == 1 )  || ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].Q_DIFF == 2 ))  
    {
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].NC_DIFF             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  4);
	}
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].V_DIFF              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  7);
		}		// end for
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Track_Condition_Change_of_traction_system (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Change_of_traction_system oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 39
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_TRACTION                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_VOLTAGE                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
    if ( oETCS->aPacket[i_ArrayIndex].M_VOLTAGE != 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_CTRACTION                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Track_Condition_Change_of_allowed_current_consumption (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Change_of_allowed_current_consumption oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 40
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_CURRENT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_CURRENT                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Level_Transition_Order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_Transition_Order oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 41
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_LEVELTR                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_LEVELTR                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVELTR == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
	oETCS->aPacket[i_ArrayIndex].L_ACKLEVELTR                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_LEVELTR                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_LEVELTR == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_NTC                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_ACKLEVELTR                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Session_Management (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Session_Management oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC
// Packet Number = 42
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_RBC                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_RBC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].NID_RADIO                                   = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,64);
	oETCS->aPacket[i_ArrayIndex].Q_SLEEPSESSION                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Data_used_by_applications_outside_the_ERTMSETCS_system oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 44
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_XUSER                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 9);
    if ( oETCS->aPacket[i_ArrayIndex].NID_XUSER == 102 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
	oETCS->aPacket[i_ArrayIndex].Other_data_depending_on__NID_XUSER          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 0);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Radio_Network_registration (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Radio_Network_registration oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC, RIU
// Packet Number = 45
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_MN                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,24);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Conditional_Level_Transition_Order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Conditional_Level_Transition_Order oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 46
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].M_LEVELTR                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVELTR == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_LEVELTR                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_LEVELTR == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_NTC                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_List_of_balises_for_SH_Area (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_List_of_balises_for_SH_Area oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 49
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_C                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_BG                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Axle_Load_Speed_Profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Axle_Load_Speed_Profile oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 51
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_AXLELOAD                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_AXLELOAD                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_FRONT                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].n.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].M_AXLELOADCAT                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].V_AXLELOAD                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].n.used );
    j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_AXLELOAD                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_AXLELOAD                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_FRONT                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
        oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.N_ITER = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5);
        uint32_t Loopend  = oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.N_ITER;      // das ist N_ITER(k)
        uint32_t i        = 0;
        for ( i=0; i < Loopend; i++ ) 
        {
        if ( i == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].M_AXLELOADCAT       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  7);
			oETCS->aPacket[i_ArrayIndex].k.a_data[j].km.a_data[i].V_AXLELOAD          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,  7);
		}		// end for
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Permitted_Braking_Distance_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Permitted_Braking_Distance_Information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 52
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_PBD                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_GDIR                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].G_PBDSR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_PBDSR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_PBDSR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_PBDSR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_PBD                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_GDIR                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].G_PBDSR                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_PBDSR                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_PBDSR                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_PBDSR                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Movement_Authority_Request_Parameters (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Movement_Authority_Request_Parameters oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 57
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].T_MAR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].T_TIMEOUTRQST                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].T_CYCRQST                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Position_Report_Parameters (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Position_Report_Parameters oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 58
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].T_CYCLOC                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].D_CYCLOC                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_LOC                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_LOC                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_LGTLOC                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_List_of_Balises_in_SR_Authority (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_List_of_Balises_in_SR_Authority oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 63
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_C                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_BG                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Inhibition_of_revocable_TSRs_from_balises_in_L23 (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Inhibition_of_revocable_TSRs_from_balises_in_L23 oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 64
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Temporary_Speed_Restriction (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Temporary_Speed_Restriction oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 65
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].NID_TSR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].D_TSR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_TSR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_FRONT                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].V_TSR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Temporary_Speed_Restriction_Revocation (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Temporary_Speed_Restriction_Revocation oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 66
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_TSR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Track_Condition_Big_Metal_Masses (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Big_Metal_Masses oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 67
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Track_Condition (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 68
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Track_Condition_Station_Platforms (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Condition_Station_Platforms oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 69
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_TRACKCOND                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_PLATFORM                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].Q_PLATFORM                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_TRACKCOND                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_PLATFORM                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_PLATFORM                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Route_Suitability_Data (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Route_Suitability_Data oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 70
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_TRACKINIT                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TRACKINIT == 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].D_SUITABILITY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_SUITABILITY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].Q_SUITABILITY == 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].M_LINEGAUGE                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_SUITABILITY == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].M_AXLELOADCAT                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_SUITABILITY == 2 ) 
    {
	oETCS->aPacket[i_ArrayIndex].M_VOLTAGE                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	}
    if (( oETCS->aPacket[i_ArrayIndex].Q_SUITABILITY == 2 )  && ( oETCS->aPacket[i_ArrayIndex].M_VOLTAGE != 0 ))  
    {
	oETCS->aPacket[i_ArrayIndex].NID_CTRACTION                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_SUITABILITY                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SUITABILITY                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SUITABILITY == 0 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_LINEGAUGE                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SUITABILITY == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_AXLELOADCAT                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	}
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SUITABILITY == 2 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_VOLTAGE                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	}
    if (( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_SUITABILITY == 2 )  && ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_VOLTAGE != 0 ))  
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_CTRACTION                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Adhesion_factor (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Adhesion_factor oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 71
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_ADHESION                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_ADHESION                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_ADHESION                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Packet_for_sending_plain_text_messages (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC
// Packet Number = 72
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TEXTCLASS                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_MODETEXTDISPLAY0                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY0                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY0 == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC0                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
	oETCS->aPacket[i_ArrayIndex].L_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].T_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].M_MODETEXTDISPLAY1                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY1                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY1 == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC1                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
	oETCS->aPacket[i_ArrayIndex].Q_TEXTCONFIRM                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TEXTCONFIRM != 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].Q_CONFTEXTDISPLAY                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_TEXTREPORT                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TEXTREPORT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_TEXTMESSAGE                             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_RBC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	}
	oETCS->aPacket[i_ArrayIndex].L_TEXT                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].X_TEXT                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Packet_for_sending_fixed_text_messages (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Packet_for_sending_fixed_text_messages oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC
// Packet Number = 76
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TEXTCLASS                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].D_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_MODETEXTDISPLAY0                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY0                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY0 == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC0                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
	oETCS->aPacket[i_ArrayIndex].L_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].T_TEXTDISPLAY                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].M_MODETEXTDISPLAY1                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY1                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVELTEXTDISPLAY1 == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC1                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
	oETCS->aPacket[i_ArrayIndex].Q_TEXTCONFIRM                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if ( oETCS->aPacket[i_ArrayIndex].Q_TEXTCONFIRM != 0 ) 
    {
	oETCS->aPacket[i_ArrayIndex].Q_CONFTEXTDISPLAY                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_TEXTREPORT                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_TEXTREPORT == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_TEXTMESSAGE                             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_RBC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	}
	oETCS->aPacket[i_ArrayIndex].Q_TEXT                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Geographical_Position_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Geographical_Position_Information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC
// Packet Number = 79
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
	oETCS->aPacket[i_ArrayIndex].NID_BG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].D_POSOFF                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_MPOSITION                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].M_POSITION                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,24);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_NEWCOUNTRY == 1 ) 
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_C                           = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_BG                          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_POSOFF                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_MPOSITION                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_POSITION                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,24);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Mode_profile (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Mode_profile oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 80
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_MAMODE                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].M_MAMODE                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].V_MAMODE                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].L_MAMODE                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_ACKMAMODE                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_MAMODE                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].D_MAMODE                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_MAMODE                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].V_MAMODE                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_MAMODE                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].L_ACKMAMODE                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].Q_MAMODE                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Level_Crossing_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Level_Crossing_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 88
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].NID_LX                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].D_LX                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_LX                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_LXSTATUS                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_LXSTATUS == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].V_LX                                        = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].Q_STOPLX                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	}
    if ( oETCS->aPacket[i_ArrayIndex].Q_STOPLX == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].L_STOPLX                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Track_Ahead_Free_up_to_level_23_transition_location (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Track_Ahead_Free_up_to_level_23_transition_location oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 90
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
	oETCS->aPacket[i_ArrayIndex].NID_BG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_RBC_transition_order (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_RBC_transition_order oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, RBC
// Packet Number = 131
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_RBCTR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_RBC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].NID_RADIO                                   = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,64);
	oETCS->aPacket[i_ArrayIndex].Q_SLEEPSESSION                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Danger_for_Shunting_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Danger_for_Shunting_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 132
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_ASPECT                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Radio_infill_area_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Radio_infill_area_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 133
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_RIU                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_RIU                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].NID_RADIO                                   = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,64);
	oETCS->aPacket[i_ArrayIndex].D_INFILL                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].NID_BG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_EOLM_Packet (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_EOLM_Packet oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 134
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].NID_LOOP                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].D_LOOP                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_LOOP                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_LOOPDIR                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].Q_SSCODE                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Stop_Shunting_on_desk_opening (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Stop_Shunting_on_desk_opening oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 135
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Infill_location_reference (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Infill_location_reference oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, Loop, RIU
// Packet Number = 136
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    if ( oETCS->aPacket[i_ArrayIndex].Q_NEWCOUNTRY == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
	oETCS->aPacket[i_ArrayIndex].NID_BG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Stop_if_in_Staff_Responsible (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Stop_if_in_Staff_Responsible oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 137
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SRSTOP                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Reversing_area_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Reversing_area_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 138
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_STARTREVERSE                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_REVERSEAREA                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Reversing_supervision_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Reversing_supervision_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Any
// Packet Number = 139
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].D_REVERSE                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].V_REVERSE                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Train_running_number_from_RBC (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Train_running_number_from_RBC oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 140
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_OPERATIONAL                             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,32);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Default_Gradient_for_Temporary_Speed_Restriction (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Default_Gradient_for_Temporary_Speed_Restriction oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 141
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_GDIR                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].G_TSR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Session_Management_with_neighbouring_Radio_Infill_Unit (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Session_Management_with_neighbouring_Radio_Infill_Unit oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RIU
// Packet Number = 143
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_RIU                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 1);
	oETCS->aPacket[i_ArrayIndex].NID_C                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_RIU                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,14);
	oETCS->aPacket[i_ArrayIndex].NID_RADIO                                   = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,64);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Inhibition_of_balise_group_message_consistency_reaction (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Inhibition_of_balise_group_message_consistency_reaction oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise
// Packet Number = 145
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrackToTrain_Default_balise_or_Loop_or_RIU_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrackToTrain_Default_balise_or_Loop_or_RIU_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, Loop, RIU
// Packet Number = 254
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].Q_DIR                                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

//Namespace TrackToTrain ends here

//Namespace TrainToTrack starts here

void TrainToTrack_Position_Report (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Position_Report oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC, RIU
// Packet Number = 0
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].NID_LRBG                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_LRBG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_DIRLRBG                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_DLRBG                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_DOUBTOVER                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_DOUBTUNDER                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_LENGTH                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if (( oETCS->aPacket[i_ArrayIndex].Q_LENGTH == 1 )  || ( oETCS->aPacket[i_ArrayIndex].Q_LENGTH == 2 ))  
    {
	oETCS->aPacket[i_ArrayIndex].L_TRAININT                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
	oETCS->aPacket[i_ArrayIndex].V_TRAIN                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].Q_DIRTRAIN                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].M_MODE                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].M_LEVEL                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVEL == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Position_Report_based_on_two_balise_groups (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Position_Report_based_on_two_balise_groups oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC, RIU
// Packet Number = 1
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].Q_SCALE                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].NID_LRBG                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].NID_PRVLRBG                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	oETCS->aPacket[i_ArrayIndex].D_LRBG                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_DIRLRBG                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].Q_DLRBG                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].L_DOUBTOVER                                 = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_DOUBTUNDER                                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].Q_LENGTH                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
    if (( oETCS->aPacket[i_ArrayIndex].Q_LENGTH == 1 )  || ( oETCS->aPacket[i_ArrayIndex].Q_LENGTH == 2 ))  
    {
	oETCS->aPacket[i_ArrayIndex].L_TRAININT                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	}
	oETCS->aPacket[i_ArrayIndex].V_TRAIN                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].Q_DIRTRAIN                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].M_MODE                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].M_LEVEL                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 3);
    if ( oETCS->aPacket[i_ArrayIndex].M_LEVEL == 1 ) 
    {
	oETCS->aPacket[i_ArrayIndex].NID_NTC                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	}
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Onboard_telephone_numbers (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Onboard_telephone_numbers oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC, RIU
// Packet Number = 3
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_RADIO                       = Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,64);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Error_reporting (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Error_reporting oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 4
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].M_ERROR                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Train_running_number (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Train_running_number oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 5
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_OPERATIONAL                             = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,32);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Level_23_transition_information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Level_23_transition_information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 9
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_LTRBG                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Validated_train_data (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Validated_train_data oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC
// Packet Number = 11
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NC_CDTRAIN                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
	oETCS->aPacket[i_ArrayIndex].NC_TRAIN                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,15);
	oETCS->aPacket[i_ArrayIndex].L_TRAIN                                     = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,12);
	oETCS->aPacket[i_ArrayIndex].V_MAXTRAIN                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].M_LOADINGGAUGE                              = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].M_AXLELOADCAT                               = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 7);
	oETCS->aPacket[i_ArrayIndex].M_AIRTIGHT                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 2);
	oETCS->aPacket[i_ArrayIndex].N_AXLE                                      = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
    uint32_t j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].k.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_VOLTAGE                       = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 4);
    if (( oETCS->aPacket[i_ArrayIndex].k.a_data[j].M_VOLTAGE != 0 )  && ( oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_CTRACTION != 0 ))  
    {
		oETCS->aPacket[i_ArrayIndex].k.a_data[j].NID_CTRACTION                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,10);
	}
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].k.used );
    j = 0;
    do 
    {
        if ( j == 0 ) {
             oETCS->aPacket[i_ArrayIndex].n.used                = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 5) + 1;
        }
		oETCS->aPacket[i_ArrayIndex].n.a_data[j].NID_NTC                         = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    } while ( ++j < oETCS->aPacket[i_ArrayIndex].n.used );
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

void TrainToTrack_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_TrainToTrack_Data_used_by_applications_outside_the_ERTMS_or_ETCS_system oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=RBC, RIU
// Packet Number = 44
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
	oETCS->aPacket[i_ArrayIndex].L_PACKET                                    = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals,13);
	oETCS->aPacket[i_ArrayIndex].NID_XUSER                                   = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 9);
	oETCS->aPacket[i_ArrayIndex].Other_data_depending_on__NID_XUSER          = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 0);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

//Namespace TrainToTrack ends here

//Namespace BothWays starts here

void BothWays_End_of_Information (void* p_Telegramm, uint32_t bitindex, uint32_t i_akt_dim, uint32_t i_ArrayIndex, TP_DATA_oETCS_BothWays_End_of_Information oETCS) 
{ 
 
    T_Bitwalker_Incremental_Locals PeekLocals;
    Bitwalker_IncrementalWalker_Init(&PeekLocals, p_Telegramm, i_akt_dim, bitindex);

// TransmissionMedia=Balise, Loop
// Packet Number = 255
	oETCS->aPacket[i_ArrayIndex].NID_PACKET                                  = (int) Bitwalker_IncrementalWalker_Peek_Next(&PeekLocals, 8);
    Bitwalker_IncrementalWalker_Peek_Finish (&PeekLocals);
    return;
    }
// =======================

//Namespace BothWays ends here
