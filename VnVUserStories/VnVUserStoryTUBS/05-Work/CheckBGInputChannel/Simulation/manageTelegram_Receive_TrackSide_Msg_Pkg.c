/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageTelegram_Receive_TrackSide_Msg_Pkg.h"

void manageTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 4 */ addTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_4);
  /* 1 */ checkTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */ checkInit_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::manageTelegram */
void manageTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::manageTelegram::inoldTelegramArray */TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  outC_manageTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L6, newTelegram);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L60, inoldTelegramArray);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(&outC->_L51, inCollector);
  /* 1 */
  checkInit_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L51,
    &outC->Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L66,
    &outC->Context_1.outCollector);
  /* 1 */
  checkTelegram_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L60,
    &outC->_L66,
    &outC->_1_Context_1);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L63,
    &outC->_1_Context_1.outCollector);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L64,
    &outC->_1_Context_1.outTelegramArray);
  outC->_L10 = outC->_1_Context_1.outTelegramNotInGroup;
  outC->_L11 = outC->_1_Context_1.outBGchangedEarly;
  outC->isNotReceivedAlready = outC->_L10;
  outC->_L69 = outC->isNotReceivedAlready;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L47,
    incenterOfBalisePosition);
  /* 4 */
  addTelegram_Receive_TrackSide_Msg_Pkg(
    &outC->_L6,
    &outC->_L63,
    &outC->_L64,
    outC->_L69,
    &outC->_L47,
    &outC->Context_4);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L54,
    &outC->Context_4.outCollector);
  kcg_copy_TelegramArray_T_BG_Types_Pkg(
    &outC->_L58,
    &outC->Context_4.outTelegramArray);
  outC->_L53 = outC->Context_4.outBGisComplete;
  outC->_L67 = outC->Context_4.outIsDuplicate;
  outC->_L73 = !outC->_L67;
  outC->needsReplace = outC->_L73;
  outC->_L72 = outC->needsReplace;
  outC->_L70 = outC->isNotReceivedAlready;
  outC->_L68 = outC->_L70 | outC->_L72;
  outC->_L65 = outC->_L53 | outC->_L11;
  outC->outStoresChanged = outC->_L68;
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->outTelegramArray, &outC->_L58);
  kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
    &outC->outCollector,
    &outC->_L54);
  outC->outBGisChangedEarly = outC->_L11;
  outC->outBGisComplete = outC->_L65;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

