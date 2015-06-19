/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void findTelegram_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 7 */
    simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
      &outC->Context_7[i]);
  }
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram */
void findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::which_pig */N_PIG which_pig,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::HeaderArray */TelegramArray_T_BG_Types_Pkg *HeaderArray,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::doSearch */kcg_bool doSearch,
  outC_findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int i1;
  kcg_bool tmp;
  kcg_int i;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ kcg_bool _2_telegramAlreadyInGroup;
  kcg_int noname;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::findTelegram::telegramAlreadyInGroup */ kcg_bool telegramAlreadyInGroup;
  
  kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L30, HeaderArray);
  outC->_L31 = outC->_L30[0].valid;
  outC->valid = outC->_L31;
  outC->IfBlock1_clock = outC->valid;
  if (outC->IfBlock1_clock) {
    outC->_L9_IfBlock1 = kcg_true;
    kcg_copy_TelegramArray_T_BG_Types_Pkg(&outC->_L2_IfBlock1, HeaderArray);
    outC->_L7_IfBlock1 = which_pig;
    for (i1 = 0; i1 < 8; i1++) {
      outC->_L3_IfBlock1[i1] = outC->_L7_IfBlock1;
    }
    outC->_L6_IfBlock1 = doSearch;
    outC->_L5_IfBlock1 = outC->_L9_IfBlock1;
    if (outC->_L6_IfBlock1) {
      for (i = 0; i < 8; i++) {
        tmp = outC->_L5_IfBlock1;
        /* 7 */
        simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
          i,
          tmp,
          &outC->_L2_IfBlock1[i],
          outC->_L3_IfBlock1[i],
          &outC->Context_7[i]);
        outC->_L5_IfBlock1 = outC->Context_7[i].telegramAlreadyInGroup;
        outC->_L4_IfBlock1 = i + 1;
        if (!outC->Context_7[i].cont) {
          break;
        }
      }
    }
    else {
      outC->_L4_IfBlock1 = 0;
    }
    noname = outC->_L4_IfBlock1;
    _2_telegramAlreadyInGroup = outC->_L5_IfBlock1;
    outC->telegramAlreadyInGroup = _2_telegramAlreadyInGroup;
  }
  else {
    outC->_L21_IfBlock1 = kcg_false;
    telegramAlreadyInGroup = outC->_L21_IfBlock1;
    outC->telegramAlreadyInGroup = telegramAlreadyInGroup;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** findTelegram_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

