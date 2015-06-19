/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Add_newBG_Subfunctions_CheckBGInput_Pkg.h"

void Add_newBG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Add_newBG_Subfunctions_CheckBGInput_Pkg *outC)
{
}

/* Subfunctions_CheckBGInput_Pkg::Add_newBG */
void Add_newBG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::last_count_checkedBG */kcg_int last_count_checkedBG,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::NewBG */checkedBG_CheckBGInputChannel_Pkg *NewBG,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::Add_command */kcg_bool Add_command,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::Matched_Checked_BGs */array__18432 *Matched_Checked_BGs,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::New_BG_available */kcg_bool New_BG_available,
  outC_Add_newBG_Subfunctions_CheckBGInput_Pkg *outC)
{
  outC->_L15 = New_BG_available;
  outC->_L5 = Add_command;
  outC->_L14 = outC->_L5 & outC->_L15;
  outC->_L13 = 1;
  outC->_L1 = last_count_checkedBG;
  outC->_L9 = outC->_L13 + outC->_L1;
  if (outC->_L14) {
    outC->_L12 = outC->_L9;
  }
  else {
    outC->_L12 = outC->_L1;
  }
  kcg_copy_array__18432(&outC->_L6, Matched_Checked_BGs);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L4, NewBG);
  kcg_copy_array__18432(&outC->_L10, &outC->_L6);
  if ((0 <= outC->_L12) & (outC->_L12 < 10)) {
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(
      &outC->_L10[outC->_L12],
      &outC->_L4);
  }
  if (outC->_L14) {
    kcg_copy_array__18432(&outC->_L11, &outC->_L10);
  }
  else {
    kcg_copy_array__18432(&outC->_L11, &outC->_L6);
  }
  kcg_copy_array__18432(&outC->New_CheckedBGs, &outC->_L11);
  outC->countCheckedBGs = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Add_newBG_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

