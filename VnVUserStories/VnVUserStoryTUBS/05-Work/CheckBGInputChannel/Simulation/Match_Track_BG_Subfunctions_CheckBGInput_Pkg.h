/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Match_Track_BG_Subfunctions_CheckBGInput_Pkg_H_
#define _Match_Track_BG_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg.h"
#include "Compand_Add_Track_BG_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::Checked_BG */ Checked_BG;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::BG_Matched */ BG_Matched;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Compare_Track_OBU_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _1_Context_1;
  outC_Compand_Add_Track_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::_L1 */ _L1;
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::_L2 */ _L2;
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::_L63 */ _L63;
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::_L118 */ _L118;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::_L130 */ _L130;
} outC_Match_Track_BG_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Match_Track_BG */
extern void Match_Track_BG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::Track_BG */checkedBG_CheckBGInputChannel_Pkg *Track_BG,
  /* Subfunctions_CheckBGInput_Pkg::Match_Track_BG::Stored_BG */checkedBG_CheckBGInputChannel_Pkg *Stored_BG,
  outC_Match_Track_BG_Subfunctions_CheckBGInput_Pkg *outC);

extern void Match_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Match_Track_BG_Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Match_Track_BG_Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Match_Track_BG_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

