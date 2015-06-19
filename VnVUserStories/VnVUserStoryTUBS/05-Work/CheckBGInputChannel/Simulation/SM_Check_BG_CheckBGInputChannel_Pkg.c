/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SM_Check_BG_CheckBGInputChannel_Pkg.h"

void SM_Check_BG_reset_CheckBGInputChannel_Pkg(
  outC_SM_Check_BG_CheckBGInputChannel_Pkg *outC)
{
  kcg_int i;
  
  outC->init = kcg_true;
  /* 1 */ Add_newBG_reset_Subfunctions_CheckBGInput_Pkg(&outC->_2_Context_1);
  for (i = 0; i < 10; i++) {
    /* 2 */
    Match_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_2[i]);
  }
  /* Add_newBG */
  Add_newBG_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_Add_newBG);
  for (i = 0; i < 10; i++) {
    /* 1 */
    Match_OBU_BG_reset_Subfunctions_CheckBGInput_Pkg(&outC->_1_Context_1[i]);
  }
  /* Convert_OBUReceivedBG_to_checkedBG */
  Convert_OBUReceivedBG_to__reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_Convert_OBUReceivedBG_to_checkedBG);
  /* 1 */
  Convert_BTMReceivedBG_to__reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_1);
}

/* CheckBGInputChannel_Pkg::SM_Check_BG */
void SM_Check_BG_CheckBGInputChannel_Pkg(
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_OBU_BG */ReceivedBG_CheckBGInputChannel_Pkg *in_OBU_BG,
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_Track_BG */ReceivedBG_CheckBGInputChannel_Pkg *in_Track_BG,
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_new_OBU_BG */kcg_bool in_new_OBU_BG,
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_new_Track_BG */kcg_bool in_new_Track_BG,
  outC_SM_Check_BG_CheckBGInputChannel_Pkg *outC)
{
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_bool tmp3;
  kcg_int i2;
  kcg_int i1;
  kcg_bool tmp;
  kcg_int i;
  /* CheckBGInputChannel_Pkg::SM_Check_BG::count_BGs */ kcg_int last_count_BGs;
  /* CheckBGInputChannel_Pkg::SM_Check_BG::comp_BGs */ outBGchecks_CheckBGInputChannel_Pkg last_comp_BGs;
  
  if (outC->init) {
    last_count_BGs = - 1;
  }
  else {
    last_count_BGs = outC->count_BGs;
  }
  if (outC->init) {
    kcg_copy_outBGchecks_CheckBGInputChannel_Pkg(
      &last_comp_BGs,
      (outBGchecks_CheckBGInputChannel_Pkg *)
        &c_emptyoutBGchecks_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_outBGchecks_CheckBGInputChannel_Pkg(
      &last_comp_BGs,
      &outC->comp_BGs);
  }
  outC->_L132 = kcg_false;
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->_L42, in_Track_BG);
  /* 1 */
  Convert_BTMReceivedBG_to__Subfunctions_CheckBGInput_Pkg(
    &outC->_L42,
    &outC->Context_1);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(
    &outC->_L110,
    &outC->Context_1.checkedBG);
  for (i6 = 0; i6 < 10; i6++) {
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L112[i6], &outC->_L110);
  }
  outC->_L45 = last_count_BGs;
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->_L36, in_OBU_BG);
  /* Convert_OBUReceivedBG_to_checkedBG */
  Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg(
    &outC->_L36,
    &outC->Context_Convert_OBUReceivedBG_to_checkedBG);
  kcg_copy_checkedBG_CheckBGInputChannel_Pkg(
    &outC->_L99,
    &outC->Context_Convert_OBUReceivedBG_to_checkedBG.checkedBG);
  outC->_L52 = kcg_false;
  for (i5 = 0; i5 < 10; i5++) {
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(&outC->_L54[i5], &outC->_L99);
  }
  kcg_copy_outBGchecks_CheckBGInputChannel_Pkg(&outC->_L44, &last_comp_BGs);
  for (i4 = 0; i4 < 10; i4++) {
    /* 1 */
    Match_OBU_BG_Subfunctions_CheckBGInput_Pkg(
      &outC->_L54[i4],
      &outC->_L44[i4],
      &outC->_1_Context_1[i4]);
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(
      &outC->_L46[i4],
      &outC->_1_Context_1[i4].Checked_BG);
    outC->_L47[i4] = outC->_1_Context_1[i4].BG_Matched;
  }
  outC->_L51 = outC->_L52;
  for (i2 = 0; i2 < 10; i2++) {
    tmp3 = outC->_L51;
    outC->_L51 = tmp3 & outC->_L47[i2];
  }
  outC->_L135 = !outC->_L51;
  outC->_L133 = in_new_OBU_BG;
  /* Add_newBG */
  Add_newBG_Subfunctions_CheckBGInput_Pkg(
    outC->_L45,
    &outC->_L99,
    outC->_L135,
    &outC->_L46,
    outC->_L133,
    &outC->Context_Add_newBG);
  kcg_copy_array__18432(&outC->_L127, &outC->Context_Add_newBG.New_CheckedBGs);
  outC->_L128 = outC->Context_Add_newBG.countCheckedBGs;
  for (i1 = 0; i1 < 10; i1++) {
    /* 2 */
    Match_Track_BG_Subfunctions_CheckBGInput_Pkg(
      &outC->_L112[i1],
      &outC->_L127[i1],
      &outC->Context_2[i1]);
    kcg_copy_checkedBG_CheckBGInputChannel_Pkg(
      &outC->_L48[i1],
      &outC->Context_2[i1].Checked_BG);
    outC->_L49[i1] = outC->Context_2[i1].BG_Matched;
  }
  outC->_L131 = outC->_L132;
  for (i = 0; i < 10; i++) {
    tmp = outC->_L131;
    outC->_L131 = tmp & outC->_L49[i];
  }
  outC->_L136 = !outC->_L131;
  outC->_L134 = in_new_Track_BG;
  /* 1 */
  Add_newBG_Subfunctions_CheckBGInput_Pkg(
    outC->_L128,
    &outC->_L110,
    outC->_L136,
    &outC->_L48,
    outC->_L134,
    &outC->_2_Context_1);
  kcg_copy_array__18432(&outC->_L129, &outC->_2_Context_1.New_CheckedBGs);
  outC->_L130 = outC->_2_Context_1.countCheckedBGs;
  kcg_copy_outBGchecks_CheckBGInputChannel_Pkg(&outC->comp_BGs, &outC->_L129);
  outC->count_BGs = outC->_L130;
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SM_Check_BG_CheckBGInputChannel_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

