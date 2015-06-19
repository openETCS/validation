/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CaseLinkingInUse_CheckBGConsistency_Pkg.h"

void CaseLinkingInUse_reset_CheckBGConsistency_Pkg(
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  outC->init = kcg_true;
  /* 2 */
  WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->_3_Context_2);
  /* 17 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_17);
  /* 16 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_16);
  /* 1 */
  WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->_2_Context_1);
  /* 2 */ CheckCompleteness_reset_CheckBGConsistency_Pkg(&outC->Context_2);
  /* 1 */
  IsBG_announced_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_1_Context_1);
  /* 1 */
  BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
    &outC->Context_1);
}

/* CheckBGConsistency_Pkg::CaseLinkingInUse */
void CaseLinkingInUse_CheckBGConsistency_Pkg(
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_CaseLinkingInUse_CheckBGConsistency_Pkg *outC)
{
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _2_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool _1_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _3_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool _4_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBG_out */ ReceivedMessage_T_Common_Types_Pkg _5_passedBG_out;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::errorLinkedBG */ kcg_bool _6_errorLinkedBG;
  /* CheckBGConsistency_Pkg::CaseLinkingInUse::passedBGlocal */ ReceivedMessage_T_Common_Types_Pkg last_passedBGlocal;
  
  if (outC->init) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &last_passedBGlocal,
      (ReceivedMessage_T_Common_Types_Pkg *)
        &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &last_passedBGlocal,
      &outC->passedBGlocal);
  }
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L26,
    trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L27, &outC->_L26.telegramHeaders);
  outC->_L25 = q_nvlocacc;
  /* 1 */
  BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L26,
    outC->_L25,
    &outC->Context_1);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L19,
    &outC->Context_1.checkedMessage);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L24, &outC->_L19.BG_Common_Header);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L18, storedBGs);
  /* 1 */
  IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L24,
    &outC->_L18,
    &outC->_1_Context_1);
  outC->_L16 = outC->_1_Context_1.isAnnounced;
  outC->_L17 = outC->_1_Context_1.q_linkorintation;
  outC->q_linkorientation_local = outC->_L17;
  outC->isAnnounced = outC->_L16;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->passedBGlocal,
    &outC->_L19);
  /* 2 */
  CheckCompleteness_CheckBGConsistency_Pkg(&outC->_L27, &outC->Context_2);
  outC->_L11 = outC->Context_2.isComplete;
  outC->_L12 = outC->Context_2.isSingleBG;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L13, &outC->Context_2.lastTelegram);
  outC->isSingle = outC->_L12;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->lastTelegram, &outC->_L13);
  outC->_L15 = outC->_L11 ^ outC->_L12;
  outC->isComplete = outC->_L15;
  outC->IfBlock1_clock = outC->isComplete & outC->isSingle & outC->isAnnounced;
  if (outC->IfBlock1_clock) {
    _1_errorLinkedBG = kcg_false;
    outC->_L12_IfBlock1 =
      Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
    outC->_L19_IfBlock1 = outC->q_linkorientation_local;
    outC->_L13_IfBlock1 = outC->_L12_IfBlock1 == outC->_L19_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L14_IfBlock1,
      &outC->passedBGlocal);
    /* 1 */
    WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
      outC->_L13_IfBlock1,
      &outC->_L14_IfBlock1,
      &outC->_2_Context_1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L16_IfBlock1,
      &outC->_2_Context_1.passedBG_out);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_2_passedBG_out,
      &outC->_L16_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &_2_passedBG_out);
    outC->errorLinkedBG = _1_errorLinkedBG;
  }
  else {
    outC->else_clock_IfBlock1 = outC->isComplete & outC->isAnnounced;
    if (outC->else_clock_IfBlock1) {
      _6_errorLinkedBG = kcg_false;
      kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
        &outC->_L57_IfBlock1,
        trackSideForCheck);
      kcg_copy_BG_Message_T_BG_Types_Pkg(
        &outC->_L58_IfBlock1,
        &outC->_L57_IfBlock1.telegramHeaders);
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L197_IfBlock1,
        &outC->lastTelegram);
      outC->_L166_IfBlock1 = outC->_L197_IfBlock1.telegramheader.n_pig;
      /* 16 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L166_IfBlock1,
        &outC->Context_16);
      outC->_L15_IfBlock1 = outC->Context_16.n_pig2int;
      outC->_L18_IfBlock1 =
        outC->_L58_IfBlock1.Telegrams[0].telegramheader.n_pig;
      /* 17 */
      N_PIG2int_CheckBGConsistency_Pkg_SubFunction(
        outC->_L18_IfBlock1,
        &outC->Context_17);
      outC->_L145_IfBlock1 = outC->Context_17.n_pig2int;
      outC->_L134_IfBlock1 = outC->_L15_IfBlock1 > outC->_L145_IfBlock1;
      outC->_L45_IfBlock1 =
        Q_LINKORIENTATION_The_balise_group_is_seen_by_the_train_in_nominal_direction;
      outC->_L52_IfBlock1 = outC->q_linkorientation_local;
      outC->_L47_IfBlock1 = outC->_L45_IfBlock1 == outC->_L52_IfBlock1;
      outC->_L49_IfBlock1 = outC->_L134_IfBlock1 & outC->_L47_IfBlock1;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L24_IfBlock1,
        &outC->passedBGlocal);
      /* 2 */
      WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
        outC->_L49_IfBlock1,
        &outC->_L24_IfBlock1,
        &outC->_3_Context_2);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L23_IfBlock1,
        &outC->_3_Context_2.passedBG_out);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_5_passedBG_out,
        &outC->_L23_IfBlock1);
      errorLinkedBG = _6_errorLinkedBG;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_5_passedBG_out);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_passedBG_out,
        (ReceivedMessage_T_Common_Types_Pkg *)
          &cRecivedMesg_PlaceHolder_CheckBGConsistency_Pkg);
      outC->_L1_IfBlock1 = kcg_true;
      _4_errorLinkedBG = outC->_L1_IfBlock1;
      errorLinkedBG = _4_errorLinkedBG;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &passedBG_out,
        &_3_passedBG_out);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->passedBG_out,
      &passedBG_out);
    outC->errorLinkedBG = errorLinkedBG;
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CaseLinkingInUse_CheckBGConsistency_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

