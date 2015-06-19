/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Add_newBG_Subfunctions_CheckBGInput_Pkg_H_
#define _Add_newBG_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  array__18432 /* Subfunctions_CheckBGInput_Pkg::Add_newBG::New_CheckedBGs */ New_CheckedBGs;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Add_newBG::countCheckedBGs */ countCheckedBGs;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  array__18432 /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L6 */ _L6;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L5 */ _L5;
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L4 */ _L4;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L1 */ _L1;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L9 */ _L9;
  array__18432 /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L10 */ _L10;
  array__18432 /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L11 */ _L11;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L12 */ _L12;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L13 */ _L13;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L14 */ _L14;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Add_newBG::_L15 */ _L15;
} outC_Add_newBG_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Add_newBG */
extern void Add_newBG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::last_count_checkedBG */kcg_int last_count_checkedBG,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::NewBG */checkedBG_CheckBGInputChannel_Pkg *NewBG,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::Add_command */kcg_bool Add_command,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::Matched_Checked_BGs */array__18432 *Matched_Checked_BGs,
  /* Subfunctions_CheckBGInput_Pkg::Add_newBG::New_BG_available */kcg_bool New_BG_available,
  outC_Add_newBG_Subfunctions_CheckBGInput_Pkg *outC);

extern void Add_newBG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Add_newBG_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Add_newBG_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Add_newBG_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

