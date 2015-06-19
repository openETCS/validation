/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.h"

void manageAdditionalTelegram_reset_Receive_TrackSide_Msg_Pkg(
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram */
void manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inDecodedTelegram */Telegram_T_BG_Types_Pkg *inDecodedTelegram,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inTelegramStore */TelegramStore_T_Receive_TrackSide_Msg_Pkg *inTelegramStore,
  /* Receive_TrackSide_Msg_Pkg::manageAdditionalTelegram::inputTelegramPresent */kcg_bool inputTelegramPresent,
  outC_manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_TelegramStore_T_Receive_TrackSide_Msg_Pkg(
    &outC->_L46,
    inTelegramStore);
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L19,
    &outC->_L46.position);
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L18, &outC->_L46.telegram);
  outC->_L55 = inputTelegramPresent;
  outC->_L17 = outC->_L46.valid;
  outC->storeValid = outC->_L17;
  outC->_L28 = outC->storeValid;
  outC->_L27 = outC->_L55 | outC->_L28;
  outC->outputPresent = outC->_L27;
  outC->_L22 = outC->storeValid;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L9,
    incenterOfBalisePosition);
  if (outC->_L22) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L21, &outC->_L19);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L21, &outC->_L9);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outcenterOfBalisePosition,
    &outC->_L21);
  outC->_L26 = outC->storeValid;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L7, inDecodedTelegram);
  if (outC->_L26) {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L20, &outC->_L18);
  }
  else {
    kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L20, &outC->_L7);
  }
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->outDecodedTelegram, &outC->_L20);
  outC->_L51 = outC->storeValid;
  outC->_L52 = outC->_L51 & outC->_L55;
  outC->outNeedStore = outC->_L52;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** manageAdditionalTelegram_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

