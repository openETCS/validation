/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InformationFilter_InformationFilter_Pkg.h"

void InformationFilter_reset_InformationFilter_Pkg(
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  outC->init = kcg_true;
  /* 1 */
  ThirdFilter_reset_InformationFilter_Pkg_ThirdFilter(&outC->_6_Context_1);
  /* 1 */
  TransitionBuffer_reset_InformationFilter_Pkg_Common(&outC->_5_Context_1);
  /* 2 */ TransitionBuffer_reset_InformationFilter_Pkg_Common(&outC->Context_2);
  /* 1 */
  LevelTransitionEffective_reset_InformationFilter_Pkg(&outC->_4_Context_1);
  /* 1 */
  RbcTransitionEffective_reset_InformationFilter_Pkg(&outC->_3_Context_1);
  /* 1 */
  SecondFilter_reset_InformationFilter_Pkg_SecondFilter(&outC->_2_Context_1);
  /* 1 */
  FirstFilter_reset_InformationFilter_Pkg_FirstFilter(&outC->_1_Context_1);
  /* 1 */ MessageBuffer_reset_InformationFilter_Pkg(&outC->Context_1);
}

/* InformationFilter_Pkg::InformationFilter */
void InformationFilter_InformationFilter_Pkg(
  /* InformationFilter_Pkg::InformationFilter::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* InformationFilter_Pkg::InformationFilter::inLevel */M_LEVEL inLevel,
  /* InformationFilter_Pkg::InformationFilter::inModus */M_MODE inModus,
  /* InformationFilter_Pkg::InformationFilter::inSupervisingDevice */kcg_int inSupervisingDevice,
  /* InformationFilter_Pkg::InformationFilter::inPendingL1Transition */kcg_bool inPendingL1Transition,
  /* InformationFilter_Pkg::InformationFilter::inPendingL2L3Transition */kcg_bool inPendingL2L3Transition,
  /* InformationFilter_Pkg::InformationFilter::inPendingAckOfTrainDataFromRBC */kcg_bool inPendingAckOfTrainDataFromRBC,
  /* InformationFilter_Pkg::InformationFilter::inEmergencyStopAccepted */kcg_bool inEmergencyStopAccepted,
  /* InformationFilter_Pkg::InformationFilter::inLastAckTextMessageId */kcg_int inLastAckTextMessageId,
  /* InformationFilter_Pkg::InformationFilter::inPendingNTCTransition */kcg_bool inPendingNTCTransition,
  /* InformationFilter_Pkg::InformationFilter::inActiveCab */kcg_int inActiveCab,
  /* InformationFilter_Pkg::InformationFilter::inTrainDataValid */kcg_bool inTrainDataValid,
  outC_InformationFilter_InformationFilter_Pkg *outC)
{
  kcg_bool tmp2;
  kcg_bool tmp1;
  ReceivedMessage_T_Common_Types_Pkg tmp;
  ReceivedMessage_T_Common_Types_Pkg tmp3;
  kcg_bool tmp4;
  kcg_bool tmp5;
  ReceivedMessage_T_Common_Types_Pkg noname;
  kcg_bool _6_noname;
  kcg_int _7_noname;
  kcg_bool _8_noname;
  kcg_bool _9_noname;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L51,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L52, &outC->_L51);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L52, &outC->_L37);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->TbMessage, &outC->_L52);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L43, &outC->TbMessage);
  if (outC->init) {
    outC->_L53 = kcg_false;
  }
  else {
    outC->_L53 = outC->_L38;
  }
  outC->TbMessageValid = outC->_L53;
  outC->_L44 = outC->TbMessageValid;
  /* 1 */
  MessageBuffer_InformationFilter_Pkg(
    &outC->_L1,
    &outC->_L43,
    outC->_L44,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L41,
    &outC->Context_1.outMessage);
  outC->_L42 = outC->Context_1.outMessageValid;
  outC->_L5 = inLevel;
  outC->_L26 = inPendingL1Transition;
  outC->_L27 = inPendingL2L3Transition;
  outC->_L28 = inPendingAckOfTrainDataFromRBC;
  outC->_L29 = inEmergencyStopAccepted;
  outC->_L30 = inLastAckTextMessageId;
  outC->_L31 = inPendingNTCTransition;
  /* 1 */
  FirstFilter_InformationFilter_Pkg_FirstFilter(
    &outC->_L41,
    outC->_L5,
    outC->_L26,
    outC->_L27,
    outC->_L28,
    outC->_L29,
    outC->_L30,
    outC->_L31,
    &outC->_1_Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->_1_Context_1.outMessage);
  outC->_L11 = outC->_1_Context_1.outStoreInTransitionBuffer;
  outC->_L17 = !outC->_L11;
  outC->tmp7 = outC->_L17;
  outC->_L18 = inSupervisingDevice;
  if (outC->tmp7) {
    /* 1 */
    SecondFilter_InformationFilter_Pkg_SecondFilter(
      &outC->_L10,
      outC->_L18,
      &outC->_2_Context_1);
    tmp5 = outC->_2_Context_1.outMessageAccepted;
    tmp4 = outC->_2_Context_1.outStoreInTransitionBuffer;
  }
  outC->_L23 = kcg_false;
  if (outC->tmp7) {
    outC->_L16 = tmp4;
  }
  else {
    if (outC->init) {
      tmp2 = outC->_L23;
    }
    else {
      tmp2 = outC->_L16;
    }
    outC->_L16 = tmp2;
  }
  outC->_L57 = inSupervisingDevice;
  /* 1 */
  RbcTransitionEffective_InformationFilter_Pkg(outC->_L57, &outC->_3_Context_1);
  outC->_L56 = outC->_3_Context_1.outRbcTransition;
  outC->_L55 = inLevel;
  /* 1 */
  LevelTransitionEffective_InformationFilter_Pkg(
    outC->_L55,
    &outC->_4_Context_1);
  outC->_L54 = outC->_4_Context_1.outLevelTransition;
  _9_noname = outC->_L42;
  /* 2 */
  TransitionBuffer_InformationFilter_Pkg_Common(
    &outC->_L10,
    outC->_L16,
    outC->_L56,
    &outC->Context_2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L39,
    &outC->Context_2.outMessage);
  outC->_L40 = outC->Context_2.outMessageAvailable;
  /* 1 */
  TransitionBuffer_InformationFilter_Pkg_Common(
    &outC->_L10,
    outC->_L11,
    outC->_L54,
    &outC->_5_Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L37,
    &outC->_5_Context_1.outMessage);
  outC->_L38 = outC->_5_Context_1.outMessageAvailable;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L34,
    (ReceivedMessage_T_Common_Types_Pkg *) &cDefaultRM_Common_Types_Pkg);
  outC->_L33 = inTrainDataValid;
  _8_noname = outC->_L33;
  outC->_L32 = inActiveCab;
  _7_noname = outC->_L32;
  outC->_L22 = kcg_false;
  if (outC->tmp7) {
    outC->_L15 = tmp5;
  }
  else {
    if (outC->init) {
      tmp1 = outC->_L22;
    }
    else {
      tmp1 = outC->_L15;
    }
    outC->_L15 = tmp1;
  }
  outC->tmp = outC->_L15;
  outC->_L6 = inModus;
  if (outC->tmp) {
    /* 1 */
    ThirdFilter_InformationFilter_Pkg_ThirdFilter(
      &outC->_L10,
      outC->_L6,
      &outC->_6_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &tmp3,
      &outC->_6_Context_1.outMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L24, &tmp3);
  }
  else {
    if (outC->init) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp, &outC->_L34);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&tmp, &outC->_L24);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L24, &tmp);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outC->_L24);
  _6_noname = outC->_L40;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&noname, &outC->_L39);
  outC->outAcceptedMessage = outC->_L15;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InformationFilter_InformationFilter_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

