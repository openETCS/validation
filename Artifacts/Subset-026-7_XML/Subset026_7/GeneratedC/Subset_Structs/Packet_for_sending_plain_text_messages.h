#ifndef NESTINGMARK_oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages
#define NESTINGMARK_oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages
/* =============================================================================
Formalization of Subset-026-7 (Chapter 7: ERTMS/ETCS language)

- Name: Subset-026-7 / TrackToTrain_Packet_for_sending_plain_text_messages
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

struct DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages {
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
// Packet Number = 72

	uint32_t NID_PACKET;                      		// # 8	
	uint32_t Q_DIR;                                  			// # 2	
	uint32_t L_PACKET;                               			// # 13	
	uint32_t Q_SCALE;                                			// # 2	
	uint32_t Q_TEXTCLASS;                            			// # 2	
	uint32_t Q_TEXTDISPLAY;                          			// # 1		// Start/end events relation
	uint32_t D_TEXTDISPLAY;                          			// # 15		// Start event
		uint32_t M_MODETEXTDISPLAY0;              		// # 4		// Start event
		uint32_t M_LEVELTEXTDISPLAY0;             		// # 3		// Start event	// if (M_LEVELTEXTDISPLAY(0) == 1)
		uint32_t NID_NTC0;                        		// # 8		// If M_LEVELTEXTDISPLAY(0) = 1
	uint32_t L_TEXTDISPLAY;                          			// # 15		// End event
	uint32_t T_TEXTDISPLAY;                          			// # 10		// End event
		uint32_t M_MODETEXTDISPLAY1;              		// # 4		// End event
		uint32_t M_LEVELTEXTDISPLAY1;             		// # 3		// End event	// if (M_LEVELTEXTDISPLAY(1) == 1)
		uint32_t NID_NTC1;                        		// # 8		// If M_LEVELTEXTDISPLAY(1) = 1
	uint32_t Q_TEXTCONFIRM;                          			// # 2		// if (Q_TEXTCONFIRM != 0)
	uint32_t Q_CONFTEXTDISPLAY;                      			// # 1		// If Q_TEXTCONFIRM != 0
	uint32_t Q_TEXTREPORT;                           			// # 1		// If Q_TEXTCONFIRM != 0	// if (Q_TEXTREPORT == 1)
	uint32_t NID_TEXTMESSAGE;                        			// # 8		// Only If Q_TEXTREPORT = 1
	uint32_t NID_C;                                  			// # 10		// Only If Q_TEXTREPORT = 1
	uint32_t NID_RBC;                                			// # 14		// Only If Q_TEXTREPORT = 1
	uint32_t L_TEXT;                                 			// # 8	
	uint32_t X_TEXT;                                 			// # 8		// Length is L_TEXT
} 


   aPacket[2];       // Instanz der Sturkur mit dem content
};

// struct -> type
typedef struct DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages T_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages;
// typ -> ptrtyp
typedef  T_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages* TP_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages;
// declaration of variable of ptrtyp
extern TP_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages  oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages;
// instatiate this ptrtype variable like this: (get memory and fill memory)
// TP_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages  oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages = new(T_DATA_oETCS_TrackToTrain_Packet_for_sending_plain_text_messages);
// and now fill in the content to start with ...
// Access variable like this: oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages->...
// maybe : memset(oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages, 0, sizeof(T_DATA_oETCS_Packet_TrackToTrain_Packet_for_sending_plain_text_messages));
// for complete 0 content.

#endif


