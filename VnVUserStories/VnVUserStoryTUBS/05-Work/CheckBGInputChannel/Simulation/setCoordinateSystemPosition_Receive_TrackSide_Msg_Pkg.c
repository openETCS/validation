/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.h"

void setCoordinateSystemPosition_reset_Receive_TrackSide_Msg_Pkg(
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition */
void setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::inOldPosition */centerOfBalisePosition_T_BG_Types_Pkg *inOldPosition,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::newTelegram */Telegram_T_BG_Types_Pkg *newTelegram,
  /* Receive_TrackSide_Msg_Pkg::setCoordinateSystemPosition::incenterOfBalisePosition */centerOfBalisePosition_T_BG_Types_Pkg *incenterOfBalisePosition,
  outC_setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg *outC)
{
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L2, inOldPosition);
  outC->_L18 = outC->_L2.odometerOfBaliseDetection.valid;
  outC->_L16 = !outC->_L18;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, newTelegram);
  outC->_L10 = outC->_L1.telegramheader.m_dup;
  outC->_L11 = M_DUP_No_duplicates;
  outC->_L12 = outC->_L10 != outC->_L11;
  outC->_L8 = N_PIG_I_am_the_2nd;
  outC->_L3 = outC->_L1.telegramheader.n_pig;
  outC->_L9 = outC->_L8 == outC->_L3;
  outC->_L13 = outC->_L12 & outC->_L9 & outC->_L16;
  outC->_L6 = N_PIG_I_am_the_1st;
  outC->_L5 = outC->_L3 == outC->_L6;
  outC->_L14 = outC->_L13 | outC->_L5;
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->_L4,
    incenterOfBalisePosition);
  if (outC->_L14) {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  else {
    kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(&outC->_L7, &outC->_L2);
  }
  kcg_copy_centerOfBalisePosition_T_BG_Types_Pkg(
    &outC->outUpdateBGPosition,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** setCoordinateSystemPosition_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

