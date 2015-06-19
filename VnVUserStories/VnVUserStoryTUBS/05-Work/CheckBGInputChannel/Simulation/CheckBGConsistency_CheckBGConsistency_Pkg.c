/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGConsistency_CheckBGConsistency_Pkg.h"

void CheckBGConsistency_reset_CheckBGConsistency_Pkg(
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  /* 2 */ CaseLinkingNotInUse_reset_CheckBGConsistency_Pkg(&outC->Context_2);
  /* 1 */ CaseLinkingInUse_reset_CheckBGConsistency_Pkg(&outC->_1_Context_1);
  /* 1 */ CheckMode_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::CheckBGConsistency */
void CheckBGConsistency_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CheckBGConsistency::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::mMode */M_MODE mMode,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::trackSide_ForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSide_ForCheck,
  /* CheckBGConsistency_Pkg::CheckBGConsistency::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_CheckBGConsistency_CheckBGConsistency_Pkg *outC)
{
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _5_passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ kcg_bool _4_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ kcg_bool _3_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */ kcg_bool _2_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ kcg_bool _1_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ kcg_bool applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ kcg_bool badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorLinkedBG */ kcg_bool errorLinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ kcg_bool errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _6_passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ kcg_bool _7_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ kcg_bool _8_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ kcg_bool _9_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _10_passedBG_out;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::applyServiceBrake */ kcg_bool _11_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::badBaliseMessageToDMI */ kcg_bool _12_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CheckBGConsistency::errorUnlinkedBG */ kcg_bool _13_errorUnlinkedBG;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L39,
    trackSide_ForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L40, &outC->_L39.telegramHeaders);
  outC->_L35 = mMode;
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L31, trainPosition);
  outC->_L32 = outC->_L31.linkingIsUsedOnboard;
  outC->_L33 = outC->_L31.valid;
  outC->_L34 = outC->_L32 & outC->_L33;
  outC->linkingInUse = outC->_L34;
  outC->_L29 = outC->_L40.Telegrams[0].telegramheader.q_link;
  outC->_L24 = Q_LINK_Linked;
  outC->_L30 = outC->_L29 == outC->_L24;
  outC->isLinked = outC->_L30;
  /* 1 */
  CheckMode_CheckBGConsistency_Pkg_SubFunction(outC->_L35, &outC->Context_1);
  outC->_L14 = outC->Context_1.bgConsistansyIsActive;
  outC->_L26 = outC->_L39.valid;
  outC->_L27 = outC->_L14 & outC->_L26;
  outC->startTheCheck = outC->_L27;
  outC->IfBlock1_clock = outC->startTheCheck & outC->linkingInUse &
    outC->isLinked;
  if (outC->IfBlock1_clock) {
    _1_errorUnlinkedBG = kcg_false;
    _3_badBaliseMessageToDMI = kcg_false;
    _4_applyServiceBrake = kcg_false;
    outC->_L23_IfBlock1 = q_nvlocacc;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L22_IfBlock1,
      trackSide_ForCheck);
    kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
      &outC->_L18_IfBlock1,
      storedBGs);
    /* 1 */
    CaseLinkingInUse_CheckBGConsistency_Pkg(
      &outC->_L18_IfBlock1,
      &outC->_L22_IfBlock1,
      outC->_L23_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L19_IfBlock1,
      &outC->_1_Context_1.passedBG_out);
    outC->_L20_IfBlock1 = outC->_1_Context_1.errorLinkedBG;
    _2_errorLinkedBG = outC->_L20_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_5_passedBG_out,
      &outC->_L19_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_5_passedBG_out);
    outC->applyServiceBrake = _4_applyServiceBrake;
    outC->badBaliseMessageToDMI = _3_badBaliseMessageToDMI;
    outC->errorLinkedBG = _2_errorLinkedBG;
    outC->errorUnlinkedBG = _1_errorUnlinkedBG;
  }
  else {
    errorLinkedBG = kcg_false;
    outC->else_clock_IfBlock1 = outC->startTheCheck;
    if (outC->else_clock_IfBlock1) {
      outC->_L16_IfBlock1 = q_nvlocacc;
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &outC->_L15_IfBlock1,
        trackSide_ForCheck);
      /* 2 */
      CaseLinkingNotInUse_CheckBGConsistency_Pkg(
        &outC->_L15_IfBlock1,
        outC->_L16_IfBlock1,
        &outC->Context_2);
      outC->_L10_IfBlock1 = outC->Context_2.applyServiceBrake;
      outC->_L11_IfBlock1 = outC->Context_2.badBaliseMessageToDMI;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L12_IfBlock1,
        &outC->Context_2.passedBG_out);
      outC->_L13_IfBlock1 = outC->Context_2.errorUnlinkedBG;
      _13_errorUnlinkedBG = outC->_L13_IfBlock1;
      _11_applyServiceBrake = outC->_L10_IfBlock1;
      _12_badBaliseMessageToDMI = outC->_L11_IfBlock1;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_10_passedBG_out,
        &outC->_L12_IfBlock1);
      errorUnlinkedBG = _13_errorUnlinkedBG;
      badBaliseMessageToDMI = _12_badBaliseMessageToDMI;
      applyServiceBrake = _11_applyServiceBrake;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_10_passedBG_out);
    }
    else {
      _9_errorUnlinkedBG = kcg_false;
      _8_badBaliseMessageToDMI = kcg_false;
      _7_applyServiceBrake = kcg_false;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_6_passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      errorUnlinkedBG = _9_errorUnlinkedBG;
      badBaliseMessageToDMI = _8_badBaliseMessageToDMI;
      applyServiceBrake = _7_applyServiceBrake;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_6_passedBG_out);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out);
    outC->applyServiceBrake = applyServiceBrake;
    outC->badBaliseMessageToDMI = badBaliseMessageToDMI;
    outC->errorLinkedBG = errorLinkedBG;
    outC->errorUnlinkedBG = errorUnlinkedBG;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBGConsistency_CheckBGConsistency_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

