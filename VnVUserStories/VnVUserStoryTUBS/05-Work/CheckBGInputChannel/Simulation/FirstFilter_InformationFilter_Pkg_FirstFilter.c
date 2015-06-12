/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FirstFilter_InformationFilter_Pkg_FirstFilter.h"

void FirstFilter_reset_InformationFilter_Pkg_FirstFilter(
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* SetValidFlag */
    SetValidFlag_reset_InformationFilter_Pkg_Common(
      &outC->Context_SetValidFlag[i]);
  }
  for (i = 0; i < 30; i++) {
    /* 1 */
    LevelFilter_reset_InformationFilter_Pkg_FirstFilter(&outC->_1_Context_1[i]);
  }
  for (i = 0; i < 30; i++) {
    /* 1 */ GetPacketId_reset_InformationFilter_Pkg_Common(&outC->Context_1[i]);
  }
}

/* InformationFilter_Pkg::FirstFilter::FirstFilter */
void FirstFilter_InformationFilter_Pkg_FirstFilter(
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingAckOfTrainData */kcg_bool inPendingAckOfTrainData,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::FirstFilter::FirstFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  outC_FirstFilter_InformationFilter_Pkg_FirstFilter *outC)
{
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_bool noname;
  kcg_bool _5_noname;
  kcg_bool _6_noname;
  kcg_bool _7_noname;
  kcg_int _8_noname;
  kcg_bool _9_noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L2, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L81,
    &outC->_L2.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L82,
    &outC->_L2.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L9, &outC->_L2.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L8,
    &outC->_L2.radioMetadata);
  outC->_L5 = outC->_L2.source;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->packets, &outC->_L81);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L85, &outC->packets);
  outC->_L7 = inLevel;
  outC->level = outC->_L7;
  outC->_L47 = outC->level;
  for (i4 = 0; i4 < 30; i4++) {
    outC->_L45[i4] = outC->_L47;
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L98, &outC->_L81.PacketHeaders);
  for (i3 = 0; i3 < 30; i3++) {
    /* 1 */
    GetPacketId_InformationFilter_Pkg_Common(
      &outC->_L98[i3],
      &outC->Context_1[i3]);
    outC->_L49[i3] = outC->Context_1[i3].outPacketId;
  }
  outC->source = outC->_L5;
  outC->_L48 = outC->source;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L46[i2] = outC->_L48;
  }
  for (i1 = 0; i1 < 30; i1++) {
    /* 1 */
    LevelFilter_InformationFilter_Pkg_FirstFilter(
      outC->_L45[i1],
      outC->_L49[i1],
      outC->_L46[i1],
      &outC->_1_Context_1[i1]);
    outC->_L1[i1] = outC->_1_Context_1[i1].outPacketAccept;
  }
  for (i = 0; i < 30; i++) {
    /* SetValidFlag */
    SetValidFlag_InformationFilter_Pkg_Common(
      outC->_L1[i],
      &outC->_L98[i],
      &outC->Context_SetValidFlag[i]);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L73[i],
      &outC->Context_SetValidFlag[i].outPacket);
  }
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L105, &outC->_L85);
  if (kcg_true) {
    kcg_copy_Metadata_T_Common_Types_Pkg(
      &outC->_L105.PacketHeaders,
      &outC->_L73);
  }
  outC->_L91 = inPendingNTCTransition;
  _9_noname = outC->_L91;
  outC->_L90 = inLastAckTextMessageId;
  _8_noname = outC->_L90;
  outC->_L89 = inEmergencyStopAccepted;
  _7_noname = outC->_L89;
  outC->_L88 = inPendingAckOfTrainData;
  _6_noname = outC->_L88;
  outC->_L87 = inPendingL2L3Transition;
  _5_noname = outC->_L87;
  outC->_L86 = inPendingL1Transition;
  noname = outC->_L86;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->radio_header,
    &outC->_L82);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L84,
    &outC->radio_header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->radio_metadata, &outC->_L8);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->_L83, &outC->radio_metadata);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->bg_header, &outC->_L9);
  outC->_L79 = kcg_false;
  outC->outStoreInTransitionBuffer = outC->_L79;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L78, &outC->bg_header);
  outC->_L77 = outC->source;
  outC->_L6 = outC->_L2.valid;
  outC->valid = outC->_L6;
  outC->_L76 = outC->valid;
  outC->_L58.valid = outC->_L76;
  outC->_L58.source = outC->_L77;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L58.radioMetadata,
    &outC->_L83);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L58.BG_Common_Header, &outC->_L78);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L58.Radio_Common_Header,
    &outC->_L84);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L58.packets,
    &outC->_L105);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L58);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FirstFilter_InformationFilter_Pkg_FirstFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

