/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

void isStored_iter_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    isStored_reset_CheckBGConsistency_Pkg_SubFunction(&outC->Context_1[i]);
  }
}

/* CheckBGConsistency_Pkg::SubFunction::isStored_iter */
void isStored_iter_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  /* CheckBGConsistency_Pkg::SubFunction::isStored_iter::bgHeader */BG_Header_T_BG_Types_Pkg *bgHeader,
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction *outC)
{
  BG_Header_T_BG_Types_Pkg tmp;
  kcg_int i;
  BG_Header_T_BG_Types_Pkg noname;
  
  outC->_L27 = 1;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L14, bgHeader);
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L15, storedBGs);
  outC->_L13 = kcg_true;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L9, &outC->_L14);
  if (outC->_L13) {
    for (i = 0; i < 8; i++) {
      kcg_copy_BG_Header_T_BG_Types_Pkg(&tmp, &outC->_L9);
      /* 1 */
      isStored_CheckBGConsistency_Pkg_SubFunction(
        &tmp,
        &outC->_L15[i],
        &outC->Context_1[i]);
      kcg_copy_BG_Header_T_BG_Types_Pkg(
        &outC->_L9,
        &outC->Context_1[i].acc_out);
      outC->_L11 = i + 1;
      if (!outC->Context_1[i].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L11 = 0;
  }
  outC->_L26 = outC->_L11 - outC->_L27;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L21, storedBGs);
  if ((0 <= outC->_L26) & (outC->_L26 < 8)) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L24,
      &outC->_L21[outC->_L26]);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L24,
      (positionedBG_T_TrainPosition_Types_Pck *)
        &cNoStoredBG_CheckBGConsistency_Pkg);
  }
  outC->_L25 = outC->_L24.valid;
  outC->isStored = outC->_L25;
  outC->index = outC->_L26;
  kcg_copy_BG_Header_T_BG_Types_Pkg(&noname, &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** isStored_iter_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

