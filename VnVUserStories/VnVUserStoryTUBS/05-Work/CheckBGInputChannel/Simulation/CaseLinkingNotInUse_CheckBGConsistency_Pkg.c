/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingNotInUse_CheckBGConsistency_Pkg.h"

void CaseLinkingNotInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC)
{
  /* 1 */
  WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->_2_Context_1);
  /* 2 */
  BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_2);
  /* 17 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_17);
  /* 16 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_16);
  /* 1 */
  BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->_1_Context_1);
  /* 1 */ CheckCompleteness_reset_CheckBGConsistency_Pkg(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::CaseLinkingNotInUse */
void CaseLinkingNotInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingNotInUse_CheckBGConsistency_Pkg *outC)
{
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool _4_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool _3_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _2_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool _1_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool _5_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool _6_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _7_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool _8_errorUnlinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::applyServiceBrake */ kcg_bool _9_applyServiceBrake;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::badBaliseMessageToDMI */ kcg_bool _10_badBaliseMessageToDMI;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _11_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingNotInUse::errorUnlinkedBG */ kcg_bool _12_errorUnlinkedBG;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L20,
    trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L21, &outC->_L20.telegramHeaders);
  /* 1 */
  CheckCompleteness_CheckBGConsistency_Pkg(&outC->_L21, &outC->Context_1);
  outC->_L11 = outC->Context_1.isComplete;
  outC->_L12 = outC->Context_1.isSingleBG;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L13, &outC->Context_1.lastTelegram);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &outC->_L13);
  outC->isSingle = outC->_L12;
  outC->_L15 = outC->_L11 ^ outC->_L12;
  outC->isComplete = outC->_L15;
  outC->IfBlock1_clock = outC->isComplete & outC->isSingle;
  if (outC->IfBlock1_clock) {
    _1_errorUnlinkedBG = kcg_false;
    _3_badBaliseMessageToDMI = kcg_false;
    _4_applyServiceBrake = kcg_false;
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L12_IfBlock1,
      trackSideForCheck);
    outC->_L13_IfBlock1 = q_nvlocacc;
    /* 1 */
    BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
      &outC->_L12_IfBlock1,
      outC->_L13_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L9_IfBlock1,
      &outC->_1_Context_1.checkedMessage);
    outC->_L15_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L16_IfBlock1,
      &outC->_L9_IfBlock1);
    if (kcg_true) {
      outC->_L16_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned =
        outC->_L15_IfBlock1;
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_2_passedBG_out,
      &outC->_L16_IfBlock1);
    outC->applyServiceBrake = _4_applyServiceBrake;
    outC->badBaliseMessageToDMI = _3_badBaliseMessageToDMI;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_2_passedBG_out);
    outC->errorUnlinkedBG = _1_errorUnlinkedBG;
  }
  else {
    outC->else_clock_IfBlock1 = outC->isComplete;
    if (outC->else_clock_IfBlock1) {
      _12_errorUnlinkedBG = kcg_false;
      _10_badBaliseMessageToDMI = kcg_false;
      _9_applyServiceBrake = kcg_false;
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L19_IfBlock1,
        &outC->lastTelegram);
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &outC->_L25_IfBlock1,
        trackSideForCheck);
      kcg_copy_BG_Message_T_BG_Types_Pkg(
        &outC->_L26_IfBlock1,
        &outC->_L25_IfBlock1.telegramHeaders);
      outC->_L24_IfBlock1 = q_nvlocacc;
      outC->_L165_IfBlock1 = outC->_L19_IfBlock1.telegramheader.n_pig;
      /* 16 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L165_IfBlock1,
        &outC->Context_16);
      outC->_L154_IfBlock1 = outC->Context_16.n_pig2int;
      outC->_L18_IfBlock1 =
        outC->_L26_IfBlock1.Telegrams[0].telegramheader.n_pig;
      /* 17 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L18_IfBlock1,
        &outC->Context_17);
      outC->_L14_IfBlock1 = outC->Context_17.n_pig2int;
      outC->_L133_IfBlock1 = outC->_L154_IfBlock1 > outC->_L14_IfBlock1;
      /* 2 */
      BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
        &outC->_L25_IfBlock1,
        outC->_L24_IfBlock1,
        &outC->Context_2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L3_IfBlock1,
        &outC->Context_2.checkedMessage);
      /* 1 */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        outC->_L133_IfBlock1,
        &outC->_L3_IfBlock1,
        &outC->_2_Context_1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L23_IfBlock1,
        &outC->_2_Context_1.passedBG_out);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_11_passedBG_out,
        &outC->_L23_IfBlock1);
      errorUnlinkedBG = _12_errorUnlinkedBG;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_11_passedBG_out);
      badBaliseMessageToDMI = _10_badBaliseMessageToDMI;
      applyServiceBrake = _9_applyServiceBrake;
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_7_passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      outC->_L5_IfBlock1 = kcg_true;
      _8_errorUnlinkedBG = outC->_L5_IfBlock1;
      outC->_L4_IfBlock1 = kcg_true;
      outC->_L36_IfBlock1 = kcg_true;
      _6_badBaliseMessageToDMI = outC->_L36_IfBlock1;
      _5_applyServiceBrake = outC->_L4_IfBlock1;
      errorUnlinkedBG = _8_errorUnlinkedBG;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_7_passedBG_out);
      badBaliseMessageToDMI = _6_badBaliseMessageToDMI;
      applyServiceBrake = _5_applyServiceBrake;
    }
    outC->applyServiceBrake = applyServiceBrake;
    outC->badBaliseMessageToDMI = badBaliseMessageToDMI;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out);
    outC->errorUnlinkedBG = errorUnlinkedBG;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingNotInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

