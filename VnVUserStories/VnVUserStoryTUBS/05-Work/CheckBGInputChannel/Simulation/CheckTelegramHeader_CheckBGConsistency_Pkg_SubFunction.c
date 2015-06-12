/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.h"

void CheckTelegramHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  /* 1 */
  N_PIG2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->_1_Context_1);
  /* 1 */
  N_TOTAL2int_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1);
}

/* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader */
void CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::CheckTelegramHeader::telegramHeader_in */TelegramHeader_T_BG_Types_Pkg *telegramHeader_in,
  outC_CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction *outC)
{
  Q_UPDOWN noname;
  M_VERSION _1_noname;
  Q_MEDIA _2_noname;
  M_DUP _3_noname;
  NID_C _4_noname;
  NID_BG _5_noname;
  Q_LINK _6_noname;
  
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(&outC->_L13, telegramHeader_in);
  outC->_L34 = outC->_L13.q_link;
  outC->_L35 = outC->_L13.nid_bg;
  outC->_L36 = outC->_L13.nid_c;
  outC->_L37 = outC->_L13.m_mcount;
  outC->_L38 = outC->_L13.m_dup;
  outC->_L39 = outC->_L13.n_total;
  outC->_L40 = outC->_L13.n_pig;
  outC->_L41 = outC->_L13.q_media;
  outC->_L42 = outC->_L13.m_version;
  outC->_L50 = cTheTelegramNeverFitsAnyMessage_CheckBGConsistency_Pkg;
  outC->_L49 = cTheTelegramFitsWithAll_CheckBGConsistency_Pkg;
  /* 1 */
  N_TOTAL2int_CheckBGConsistency_Pkg_SubFunction(outC->_L39, &outC->Context_1);
  outC->_L48 = outC->Context_1.n_total2int;
  /* 1 */
  N_PIG2int_CheckBGConsistency_Pkg_SubFunction(outC->_L40, &outC->_1_Context_1);
  outC->_L47 = outC->_1_Context_1.n_pig2int;
  _6_noname = outC->_L34;
  _5_noname = outC->_L35;
  _4_noname = outC->_L36;
  _3_noname = outC->_L38;
  outC->_L44 = 0;
  outC->_L46 = outC->_L48 > outC->_L44;
  outC->_L45 = outC->_L47 <= outC->_L48;
  _2_noname = outC->_L41;
  _1_noname = outC->_L42;
  outC->_L43 = outC->_L13.q_updown;
  noname = outC->_L43;
  outC->_L33 = outC->_L49 >= outC->_L37;
  outC->_L30 = outC->_L37 != outC->_L50;
  outC->_L29 = outC->_L45 & outC->_L46 & outC->_L33 & outC->_L30;
  outC->isConsistent = outC->_L29;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckTelegramHeader_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

