/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "addTelegram_Receive_TrackSide_Msg_Pkg.h"

void addTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    replaceTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->_2_Context_1[i]);
  }
  /* 1 */
  setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(
    &outC->_1_Context_1);
  for (i = 0; i < 8; i++) {
    /* 3 */
    setFirstFree_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_3[i]);
  }
  /* 1 */
  setIntervalBGPosition_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::addTelegram */
void addTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::addTelegram::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inCollector */BGCollector_T_Receive_TrackSide_Msg_Pkg *inCollector,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inoldTelegramArray */TelegramArray_T_BG_Types_Pkg *inoldTelegramArray,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::doUpdate */kcg_bool doUpdate,
  /* Receive_TrackSide_Msg_Pkg::addTelegram::inPosition */centerOfBalisePosition_T_BG_Types_Pkg *inPosition,
  outC_addTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg _7_outCollector;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg _6_outTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool _5_outBGisComplete;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool _4_outIsDuplicate;
  kcg_int noname;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outCollector */ BGCollector_T_Receive_TrackSide_Msg_Pkg outCollector;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outTelegramArray */ TelegramArray_T_BG_Types_Pkg outTelegramArray;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outBGisComplete */ kcg_bool outBGisComplete;
  /* Receive_TrackSide_Msg_Pkg::addTelegram::outIsDuplicate */ kcg_bool outIsDuplicate;
  
  outC->IfBlock1_clock = doUpdate;
  if (outC->IfBlock1_clock) {
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L9_IfBlock1,
      inCollector);
    outC->_L48_IfBlock1 = outC->_L9_IfBlock1.totalTelegrams;
    outC->_L49_IfBlock1 = outC->_L9_IfBlock1.collectedTelegrams;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L50_IfBlock1,
      &outC->_L9_IfBlock1.positionFirstContact);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L51_IfBlock1,
      &outC->_L9_IfBlock1.balisePosition);
    outC->_L52_IfBlock1 = outC->_L9_IfBlock1.BG_ID;
    outC->_L53_IfBlock1 = outC->_L9_IfBlock1.C_ID;
    outC->_L54_IfBlock1 = outC->_L9_IfBlock1.BGMessageSent;
    _4_outIsDuplicate = kcg_false;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L55_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L47_IfBlock1,
      inPosition);
    /* 1 */
    setIntervalBGPosition_Receive_TrackSide_Msg_Pkg(
      &outC->_L50_IfBlock1,
      &outC->_L47_IfBlock1,
      &outC->Context_1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L46_IfBlock1,
      &outC->Context_1.outUpdateBGPosition);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L45_IfBlock1, newTelegram);
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L41_IfBlock1, newTelegram);
    outC->_L40_IfBlock1 = doUpdate;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L39_IfBlock1,
      inoldTelegramArray);
    for (i3 = 0; i3 < 8; i3++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L37_IfBlock1[i3],
        &outC->_L41_IfBlock1);
    }
    if (outC->_L40_IfBlock1) {
      for (i2 = 0; i2 < 8; i2++) {
        /* 3 */
        setFirstFree_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &outC->_L37_IfBlock1[i2],
          &outC->_L39_IfBlock1[i2],
          &outC->Context_3[i2]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L36_IfBlock1[i2],
          &outC->Context_3[i2].outTelegrams);
        outC->_L35_IfBlock1 = i2 + 1;
        if (!outC->Context_3[i2].cont) {
          break;
        }
      }
    }
    else {
      outC->_L35_IfBlock1 = 0;
    }
#ifdef KCG_MAPW_CPY
    
    for (i2 = outC->_L35_IfBlock1; i2 < 8; i2++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L36_IfBlock1[i2],
        &outC->_L55_IfBlock1);
    }
#endif /* KCG_MAPW_CPY */
    
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &_6_outTelegramArray,
      &outC->_L36_IfBlock1);
    noname = outC->_L35_IfBlock1;
    outC->_L8_IfBlock1 = 1;
    outC->_L1_IfBlock1 = outC->_L49_IfBlock1 + outC->_L8_IfBlock1;
    outC->_L21_IfBlock1 = outC->_L1_IfBlock1 >= outC->_L48_IfBlock1;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L17_IfBlock1,
      inPosition);
    /* 1 */
    setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
      &outC->_L51_IfBlock1,
      &outC->_L45_IfBlock1,
      &outC->_L17_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L15_IfBlock1,
      &outC->_1_Context_1.outUpdateBGPosition);
    _5_outBGisComplete = outC->_L21_IfBlock1;
    outC->_L3_IfBlock1 = outC->_L9_IfBlock1.badBaliseFlag;
    outC->_L6_IfBlock1.badBaliseFlag = outC->_L3_IfBlock1;
    outC->_L6_IfBlock1.BGMessageSent = outC->_L54_IfBlock1;
    outC->_L6_IfBlock1.C_ID = outC->_L53_IfBlock1;
    outC->_L6_IfBlock1.BG_ID = outC->_L52_IfBlock1;
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L6_IfBlock1.balisePosition,
      &outC->_L15_IfBlock1);
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
      &outC->_L6_IfBlock1.positionFirstContact,
      &outC->_L46_IfBlock1);
    outC->_L6_IfBlock1.collectedTelegrams = outC->_L1_IfBlock1;
    outC->_L6_IfBlock1.totalTelegrams = outC->_L48_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &_7_outCollector,
      &outC->_L6_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &_7_outCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outTelegramArray,
      &_6_outTelegramArray);
    outC->outBGisComplete = _5_outBGisComplete;
    outC->outIsDuplicate = _4_outIsDuplicate;
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L174_IfBlock1, newTelegram);
    for (i1 = 0; i1 < 8; i1++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L16_IfBlock1[i1],
        &outC->_L174_IfBlock1);
    }
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->_L13_IfBlock1,
      inoldTelegramArray);
    outC->_L18_IfBlock1 = kcg_true;
    kcg_copy_Telegram_T_BG_Types_Pkg(
      &outC->_L20_IfBlock1,
      (Telegram_T_BG_Types_Pkg *) &cEmpty_BaliseTlg_BG_Types_Pkg);
    outC->_L22_IfBlock1 = kcg_false;
    if (outC->_L18_IfBlock1) {
      for (i = 0; i < 8; i++) {
        /* 1 */
        replaceTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          &outC->_L16_IfBlock1[i],
          &outC->_L13_IfBlock1[i],
          &outC->_2_Context_1[i]);
        kcg_copy_Telegram_T_BG_Types_Pkg(
          &outC->_L155_IfBlock1[i],
          &outC->_2_Context_1[i].outTelegrams);
        outC->_L213_IfBlock1[i] = outC->_2_Context_1[i].outIsDuplicate;
        outC->_L14_IfBlock1 = i + 1;
        if (!outC->_2_Context_1[i].cont) {
          break;
        }
      }
    }
    else {
      outC->_L14_IfBlock1 = 0;
    }
#ifdef KCG_MAPW_CPY
    
    for (i = outC->_L14_IfBlock1; i < 8; i++) {
      kcg_copy_Telegram_T_BG_Types_Pkg(
        &outC->_L155_IfBlock1[i],
        &outC->_L20_IfBlock1);
      outC->_L213_IfBlock1[i] = outC->_L22_IfBlock1;
    }
#endif /* KCG_MAPW_CPY */
    
    outC->_L30_IfBlock1 = 1;
    outC->_L29_IfBlock1 = outC->_L14_IfBlock1 - outC->_L30_IfBlock1;
    outC->_L31_IfBlock1 = kcg_false;
    if ((0 <= outC->_L29_IfBlock1) & (outC->_L29_IfBlock1 < 8)) {
      outC->_L27_IfBlock1 = outC->_L213_IfBlock1[outC->_L29_IfBlock1];
    }
    else {
      outC->_L27_IfBlock1 = outC->_L31_IfBlock1;
    }
    outC->_L33_IfBlock1 = !outC->_L27_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->_L19_IfBlock1,
      inCollector);
    outC->_L4_IfBlock1 = outC->_L19_IfBlock1.collectedTelegrams;
    outC->_L5_IfBlock1 = outC->_L19_IfBlock1.totalTelegrams;
    outC->_L87_IfBlock1 = outC->_L4_IfBlock1 >= outC->_L5_IfBlock1;
    outC->_L96_IfBlock1 = outC->_L19_IfBlock1.BGMessageSent;
    outC->_L10_IfBlock1 = !outC->_L96_IfBlock1;
    outC->_L11_IfBlock1 = outC->_L87_IfBlock1 & outC->_L10_IfBlock1;
    outC->_L32_IfBlock1 = outC->_L33_IfBlock1 & outC->_L11_IfBlock1;
    outIsDuplicate = outC->_L27_IfBlock1;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outTelegramArray,
      &outC->_L155_IfBlock1);
    outBGisComplete = outC->_L32_IfBlock1;
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outCollector,
      &outC->_L19_IfBlock1);
    kcg_copy_BGCollector_T_Receive_TrackSide_Msg_Pkg(
      &outC->outCollector,
      &outCollector);
    kcg_copy_TelegramArray_T_BG_Types_Pkg(
      &outC->outTelegramArray,
      &outTelegramArray);
    outC->outBGisComplete = outBGisComplete;
    outC->outIsDuplicate = outIsDuplicate;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** addTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

