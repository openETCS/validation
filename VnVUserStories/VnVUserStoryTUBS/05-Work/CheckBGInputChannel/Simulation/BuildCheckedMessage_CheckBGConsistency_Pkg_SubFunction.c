/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.h"

void BuildCheckedMessage_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 1 */
  bildBGHeader_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_1_Context_1);
  /* 1 */
  MergAllPackets_Iter_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage */
void BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::BuildCheckedMessage::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_int noname;
  centerOfBalisePosition_T_BG_Types_Pkg _1_noname;
  
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L62,
    trackSideForCheck);
  kcg_copy_BG_Message_T_BG_Types_Pkg(&outC->_L63, &outC->_L62.telegramHeaders);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L41,
    &outC->_L63.centerOfBalisePosition);
  outC->_L42 = outC->_L63.numberBalises;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L43, &outC->_L63.Telegrams);
  /* 1 */
  MergAllPackets_Iter_CheckBGConsistency_Pkg_SubFunction_MergFunction(
    &outC->_L43,
    &outC->Context_1);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L82, &outC->Context_1.telegramout);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L84,
    &outC->_L82.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L66,
    (Radio_TrackTrain_Header_T_Radio_Types_Pkg *)
      &cNoRadioHeader_CheckBGConsistency_Pkg);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&_1_noname, &outC->_L41);
  outC->_L61 = q_nvlocacc;
  kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
    &outC->_L60,
    trackSideForCheck);
  /* 1 */
  bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
    &outC->_L60,
    outC->_L61,
    &outC->_1_Context_1);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L59, &outC->_1_Context_1.bgHeader);
  noname = outC->_L42;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L46,
    (RadioMetadata_T_Common_Types_Pkg *)
      &cRadioMetadata_CheckBGConsistency_Pkg);
  outC->_L44 = outC->_L63.present;
  outC->_L38 = cEurobalise_CheckBGConsistency_Pkg;
  outC->_L40.valid = outC->_L44;
  outC->_L40.source = outC->_L38;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L40.radioMetadata,
    &outC->_L46);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L40.BG_Common_Header, &outC->_L59);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L40.Radio_Common_Header,
    &outC->_L66);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L40.packets,
    &outC->_L84);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->checkedMessage,
    &outC->_L40);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildCheckedMessage_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

