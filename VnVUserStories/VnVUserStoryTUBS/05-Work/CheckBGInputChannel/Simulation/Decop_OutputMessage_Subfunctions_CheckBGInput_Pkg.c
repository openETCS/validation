/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg.h"

void Decop_OutputMessage_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 1 */ CAST_N_TOTAL_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_NID_C_to_int_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ CAST_NID_BG_to_int_reset_TM_conversions(&outC->Context_1);
}

/* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage */
void Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Decop_OutputMessage::ReceivedMessage */ReceivedMessage_T_Common_Types_Pkg *ReceivedMessage,
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg *outC)
{
  RadioMetadata_T_Common_Types_Pkg noname;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg _1_noname;
  M_VERSION _2_noname;
  Q_MEDIA _3_noname;
  odometry_T_Obu_BasicTypes_Pkg _4_noname;
  Q_NVLOCACC _5_noname;
  kcg_bool _6_noname;
  Q_DIRLRBG _7_noname;
  Q_DIRTRAIN _8_noname;
  CompressedPacketData_T_Common_Types_Pkg _9_noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, ReceivedMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L1.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L6,
    &outC->_L1.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L5, &outC->_L1.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_L1.radioMetadata);
  outC->_L3 = outC->_L1.source;
  outC->_L22 = outC->_L5.trainRunningDirectionToBG;
  outC->_L21 = outC->_L5.trainOrientationToBG;
  outC->_L20 = outC->_L5.noCoordinateSystemHasBeenAssigned;
  outC->_L19 = outC->_L5.q_nvlocacc;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L18,
    &outC->_L5.BG_centerDetectionInaccuraccuracies);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L17, &outC->_L5.bgPosition);
  outC->_L16 = outC->_L5.q_link;
  outC->_L15 = outC->_L5.nid_bg;
  outC->_L14 = outC->_L5.nid_c;
  outC->_L13 = outC->_L5.m_mcount;
  outC->_L12 = outC->_L5.n_total;
  outC->_L11 = outC->_L5.q_media;
  outC->_L10 = outC->_L5.m_version;
  outC->_L9 = outC->_L5.q_updown;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L24,
    &outC->_L7.PacketData);
  outC->_L27 = outC->_L18.d_max;
  outC->_L26 = outC->_L18.d_min;
  /* 1 */ CAST_NID_BG_to_int_TM_conversions(outC->_L15, &outC->Context_1);
  outC->_L30 = outC->Context_1.nid_bg_int;
  /* 1 */ CAST_NID_C_to_int_TM_conversions(outC->_L14, &outC->_1_Context_1);
  outC->_L29 = outC->_1_Context_1.nid_c_int;
  /* 1 */ CAST_N_TOTAL_to_int_TM_conversions(outC->_L12, &outC->_2_Context_1);
  outC->_L28 = outC->_2_Context_1.n_total_int;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&_9_noname, &outC->_L24);
  _8_noname = outC->_L22;
  _7_noname = outC->_L21;
  _6_noname = outC->_L20;
  _5_noname = outC->_L19;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&_4_noname, &outC->_L17);
  outC->_L25 = outC->_L18.nominal;
  _3_noname = outC->_L11;
  _2_noname = outC->_L10;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L23, &outC->_L7.PacketHeaders);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_1_noname, &outC->_L6);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&noname, &outC->_L4);
  outC->_L8 = outC->_L5.valid;
  outC->_L2 = outC->_L1.valid;
  outC->valid = outC->_L2;
  outC->Source = outC->_L3;
  outC->validBG = outC->_L8;
  outC->UPDOWN = outC->_L9;
  outC->TOTAL = outC->_L28;
  outC->MCOUNT = outC->_L13;
  outC->NIDC = outC->_L29;
  outC->NIDBG = outC->_L30;
  outC->LINK = outC->_L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->PacketHeader, &outC->_L23);
  outC->LocNominal = outC->_L25;
  outC->LocMin = outC->_L26;
  outC->LocMax = outC->_L27;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

