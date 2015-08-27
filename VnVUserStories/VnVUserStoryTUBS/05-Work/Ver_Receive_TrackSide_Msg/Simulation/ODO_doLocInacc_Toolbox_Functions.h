/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _ODO_doLocInacc_Toolbox_Functions_H_
#define _ODO_doLocInacc_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

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
  /* Toolbox::Functions::ODO_doLocInacc::d_min */ L_internal_Type_Obu_BasicTypes_Pkg d_min,
  /* Toolbox::Functions::ODO_doLocInacc::d_Max */ L_internal_Type_Obu_BasicTypes_Pkg d_Max,
  outC_ODO_doLocInacc_Toolbox_Functions *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void ODO_doLocInacc_reset_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void ODO_doLocInacc_init_Toolbox_Functions(
  outC_ODO_doLocInacc_Toolbox_Functions *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _ODO_doLocInacc_Toolbox_Functions_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** ODO_doLocInacc_Toolbox_Functions.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

