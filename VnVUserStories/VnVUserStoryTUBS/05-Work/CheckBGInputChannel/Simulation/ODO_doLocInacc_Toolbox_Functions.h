/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _ODO_doLocInacc_Toolbox_Functions_H_
#define _ODO_doLocInacc_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_doLocInacc::locInAcc */ locInAcc;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_doLocInacc::_L2 */ _L2;
  kcg_int /* Toolbox::Functions::ODO_doLocInacc::_L9 */ _L9;
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_doLocInacc::_L12 */ _L12;
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_doLocInacc::_L13 */ _L13;
} outC_ODO_doLocInacc_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_doLocInacc */
extern void ODO_doLocInacc_Toolbox_Functions(
  /* Toolbox::Functions::ODO_doLocInacc::d_min */L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  outC_ODO_doLocInacc_Toolbox_Functions *outC);

extern void ODO_doLocInacc_reset_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC);

#endif /* _ODO_doLocInacc_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_doLocInacc_Toolbox_Functions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

