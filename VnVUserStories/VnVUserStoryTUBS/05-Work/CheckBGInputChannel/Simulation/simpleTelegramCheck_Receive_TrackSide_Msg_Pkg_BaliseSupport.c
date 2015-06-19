/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

void simpleTelegramCheck_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck */
void simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::iteratorIndex */kcg_int iteratorIndex,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::accu */kcg_bool accu,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::telegram */Telegram_T_BG_Types_Pkg *telegram,
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::simpleTelegramCheck::which_pig */N_PIG which_pig,
  outC_simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  kcg_int noname;
  kcg_bool _1_noname;
  
  outC->_L16 = accu;
  _1_noname = outC->_L16;
  kcg_copy_Telegram_T_BG_Types_Pkg(&outC->_L1, telegram);
  outC->_L15 = outC->_L1.telegramheader.n_pig;
  outC->_L2 = outC->_L1.valid;
  outC->_L3 = which_pig;
  outC->_L5 = outC->_L15 == outC->_L3;
  outC->_L12 = outC->_L2 & outC->_L5;
  outC->_L14 = !outC->_L12;
  outC->_L13 = outC->_L2 & outC->_L14;
  outC->_L8 = iteratorIndex;
  noname = outC->_L8;
  outC->cont = outC->_L13;
  outC->telegramAlreadyInGroup = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** simpleTelegramCheck_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

