/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Match_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"

void Match_OBU_BG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Match_OBU_BG_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 1 */
  Compare_Track_OBU_BG_reset_Subfunctions_CheckBGInput_Pkg(&outC->_1_Context_1);
  /* 1 */
  Compand_Add_OBU_BG_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_1);
}

/* Subfunctions_CheckBGInput_Pkg::Match_OBU_BG */
void Match_OBU_BG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Match_OBU_BG::OBU_BG */checkedBG_CheckBGInputChannel_Pkg *OBU_BG,
  /* Subfunctions_CheckBGInput_Pkg::Match_OBU_BG::Stored_BG */checkedBG_CheckBGInputChannel_Pkg *Stored_BG,
  outC_Match_OBU_BG_Subfunctions_CheckBGInput_Pkg *outC)
{
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L1, OBU_BG);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L2, Stored_BG);
  /* 1 */
  Compand_Add_OBU_BG_Subfunctions_CheckBGInput_Pkg(
    &outC->_L1,
    &outC->_L2,
    &outC->Context_1);
  outC->_L131 = outC->Context_1.Add_Command;
  outC->BG_Matched = outC->_L131;
  /* 1 */
  Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg(
    &outC->_L2,
    &outC->_L1,
    &outC->_1_Context_1);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(
    &outC->_L118,
    &outC->_1_Context_1.Compared_BG);
  if (outC->_L131) {
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L63, &outC->_L118);
  }
  else {
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L63, &outC->_L2);
  }
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->Checked_BG, &outC->_L63);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Match_OBU_BG_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

