/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _SM_Check_BG_CheckBGInputChannel_Pkg_H_
#define _SM_Check_BG_CheckBGInputChannel_Pkg_H_

#include "kcg_types.h"
#include "Match_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
#include "Match_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"
#include "Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg.h"
#include "Convert_BTMReceivedBG_to__Subfunctions_CheckBGInput_Pkg.h"
#include "Add_newBG_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  outBGchecks_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::SM_Check_BG::comp_BGs */ comp_BGs;
  kcg_int /* CheckBGInputChannel_Pkg::SM_Check_BG::count_BGs */ count_BGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Add_newBG_Subfunctions_CheckBGInput_Pkg /* 1 */ _2_Context_1;
  outC_Match_Track_BG_Subfunctions_CheckBGInput_Pkg /* 2 */ Context_2[10];
  outC_Add_newBG_Subfunctions_CheckBGInput_Pkg /* Add_newBG */ Context_Add_newBG;
  outC_Match_OBU_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _1_Context_1[10];
  outC_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg /* Convert_OBUReceivedBG_to_checkedBG */ Context_Convert_OBUReceivedBG_to_checkedBG;
  outC_Convert_BTMReceivedBG_to__Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::SM_Check_BG::_L36 */ _L36;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::SM_Check_BG::_L42 */ _L42;
  outBGchecks_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::SM_Check_BG::_L44 */ _L44;
  kcg_int /* CheckBGInputChannel_Pkg::SM_Check_BG::_L45 */ _L45;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L51 */ _L51;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L52 */ _L52;
  array__18432 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L54 */ _L54;
  array__18432 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L112 */ _L112;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L131 */ _L131;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L132 */ _L132;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L133 */ _L133;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L134 */ _L134;
  array_bool_10 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L49 */ _L49;
  array__18432 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L48 */ _L48;
  array_bool_10 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L47 */ _L47;
  array__18432 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L46 */ _L46;
  checkedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::SM_Check_BG::_L99 */ _L99;
  checkedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::SM_Check_BG::_L110 */ _L110;
  kcg_int /* CheckBGInputChannel_Pkg::SM_Check_BG::_L128 */ _L128;
  array__18432 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L127 */ _L127;
  kcg_int /* CheckBGInputChannel_Pkg::SM_Check_BG::_L130 */ _L130;
  array__18432 /* CheckBGInputChannel_Pkg::SM_Check_BG::_L129 */ _L129;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L135 */ _L135;
  kcg_bool /* CheckBGInputChannel_Pkg::SM_Check_BG::_L136 */ _L136;
} outC_SM_Check_BG_CheckBGInputChannel_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGInputChannel_Pkg::SM_Check_BG */
extern void SM_Check_BG_CheckBGInputChannel_Pkg(
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_OBU_BG */ReceivedBG_CheckBGInputChannel_Pkg *in_OBU_BG,
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_Track_BG */ReceivedBG_CheckBGInputChannel_Pkg *in_Track_BG,
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_new_OBU_BG */kcg_bool in_new_OBU_BG,
  /* CheckBGInputChannel_Pkg::SM_Check_BG::in_new_Track_BG */kcg_bool in_new_Track_BG,
  outC_SM_Check_BG_CheckBGInputChannel_Pkg *outC);

extern void SM_Check_BG_reset_CheckBGInputChannel_Pkg(
  outC_SM_Check_BG_CheckBGInputChannel_Pkg *outC);

#endif /* _SM_Check_BG_CheckBGInputChannel_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** SM_Check_BG_CheckBGInputChannel_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

