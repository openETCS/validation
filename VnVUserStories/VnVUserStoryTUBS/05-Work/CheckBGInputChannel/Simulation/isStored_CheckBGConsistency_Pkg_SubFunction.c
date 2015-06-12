/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_CheckBGConsistency_Pkg_SubFunction.h"

void isStored_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::isStored */
void isStored_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored::recivedBG_header */BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::isStored::storedBG */positionedBG_T_TrainPosition_Types_Pck *storedBG,
  outC_isStored_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L14, recivedBG_header);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L4, storedBG);
  outC->_L5 = outC->_L4.nid_bg;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L7, recivedBG_header);
  outC->_L9 = outC->_L7.nid_bg;
  outC->_L10 = outC->_L5 != outC->_L9;
  outC->_L12 = outC->_L7.nid_c;
  outC->_L6 = outC->_L4.nid_c;
  outC->_L11 = outC->_L12 != outC->_L6;
  outC->_L13 = outC->_L10 | outC->_L11;
  outC->go_on = outC->_L13;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->acc_out, &outC->_L14);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isStored_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

