/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"

void validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */
    validateDataDirectionForS_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->Context_1[i]);
  }
}

/* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General */
void validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainRunningDirectionFromBG */Q_DIRTRAIN trainRunningDirectionFromBG,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::LRBGKnown */kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::validateDataDirection_General::coordinateSystemAssigned */kcg_bool coordinateSystemAssigned,
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  CompressedPackets_T_Common_Types_Pkg noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L10, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L12,
    &outC->_L10.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L13,
    &outC->_L10.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L14, &outC->_L10.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L15,
    &outC->_L10.radioMetadata);
  outC->_L16 = outC->_L10.source;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L99,
    &outC->_L1.packets);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L6,
    &outC->_L1.packets.PacketHeaders);
  outC->_L24 = trainRunningDirectionFromBG;
  outC->trainRunningDirectionToBG = outC->_L24;
  outC->_L25 = outC->trainRunningDirectionToBG;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L8[i4] = outC->_L25;
  }
  outC->_L81 = LRBGKnown;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L84[i3] = outC->_L81;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L18, trainPosition);
  for (i2 = 0; i2 < 30; i2++) {
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L19[i2],
      &outC->_L18);
  }
  outC->_L79 = coordinateSystemAssigned;
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L80[i1] = outC->_L79;
  }
  for (i = 0; i < 30; i++) {
    /* 1 */
    validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->_L6[i],
      outC->_L8[i],
      outC->_L84[i],
      &outC->_L19[i],
      outC->_L80[i],
      &outC->Context_1[i]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L7[i],
      &outC->Context_1[i].outMetadataElement);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L98, &outC->_L99);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L98.PacketHeaders, &outC->_L7);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->tmpPackets, &outC->_L98);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L100,
    &outC->tmpPackets);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&noname, &outC->_L12);
  outC->_L83 = LRBGKnown;
  outC->_L82 = LRBGKnown;
  outC->_L78 = coordinateSystemAssigned;
  outC->_L77 = coordinateSystemAssigned;
  outC->_L45 = outC->_L13.nid_message;
  outC->nid_message = outC->_L45;
  outC->_L76 = outC->nid_message;
  outC->_L75 = 15;
  outC->_L74 = outC->_L76 != outC->_L75;
  outC->msgSrc = outC->_L16;
  outC->_L71 = outC->msgSrc;
  outC->_L70 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L72 = outC->_L71 == outC->_L70;
  outC->_L73 = outC->_L72 & outC->_L74;
  outC->_L17 = outC->_L10.valid;
  outC->inputValid = outC->_L17;
  outC->_L69 = outC->inputValid;
  outC->_L52 = outC->nid_message;
  outC->_L53 = 15;
  outC->_L51 = outC->_L52 == outC->_L53;
  outC->_L44 = outC->_L13.q_dir;
  outC->mandatoryVariableQ_DIR = outC->_L44;
  outC->_L46 = outC->mandatoryVariableQ_DIR;
  outC->_L40 = Q_DIR_Nominal;
  outC->_L32 = outC->_L46 == outC->_L40;
  outC->_L31 = Q_DIRTRAIN_Nominal;
  outC->_L49 = outC->trainRunningDirectionToBG;
  outC->_L36 = outC->_L31 == outC->_L49;
  outC->_L62 = outC->_L18.trainPositionIsUnknown;
  outC->_L63 = !outC->_L62;
  outC->trainPositionKnown = outC->_L63;
  outC->_L35 = outC->trainPositionKnown;
  outC->_L42 = outC->_L32 & outC->_L36 & outC->_L35 & outC->_L77 & outC->_L82;
  outC->_L47 = outC->mandatoryVariableQ_DIR;
  outC->_L27 = Q_DIR_Reverse;
  outC->_L28 = outC->_L47 == outC->_L27;
  outC->_L38 = Q_DIRTRAIN_Reverse;
  outC->_L50 = outC->trainRunningDirectionToBG;
  outC->_L39 = outC->_L38 == outC->_L50;
  outC->_L43 = outC->trainPositionKnown;
  outC->_L29 = outC->_L28 & outC->_L39 & outC->_L43 & outC->_L78 & outC->_L83;
  outC->_L48 = outC->mandatoryVariableQ_DIR;
  outC->_L33 = Q_DIR_Both_directions;
  outC->_L34 = outC->_L48 == outC->_L33;
  outC->_L41 = outC->_L42 | outC->_L29 | outC->_L34;
  outC->_L56 = outC->msgSrc;
  outC->_L57 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L55 = outC->_L56 == outC->_L57;
  outC->_L54 = outC->_L51 & outC->_L41 & outC->_L55;
  outC->_L67 = outC->msgSrc;
  outC->_L66 = msrc_Eurobalise_Common_Types_Pkg;
  outC->_L65 = outC->_L67 == outC->_L66;
  outC->_L64 = outC->_L54 | outC->_L65 | outC->_L73;
  outC->_L68 = outC->_L64 & outC->_L69;
  outC->outputValid = outC->_L68;
  outC->_L60 = outC->outputValid;
  outC->_L9.valid = outC->_L60;
  outC->_L9.source = outC->_L16;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L9.radioMetadata,
    &outC->_L15);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L9.BG_Common_Header, &outC->_L14);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L9.Radio_Common_Header,
    &outC->_L13);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L9.packets,
    &outC->_L100);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

