/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _ContinuousTimeoutCheck_H_
#define _ContinuousTimeoutCheck_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* ContinuousTimeoutCheck::tNvContactError */ tNvContactError;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  T_internal_Type_Obu_BasicTypes_Pkg /* ContinuousTimeoutCheck::IfBlock1::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* ContinuousTimeoutCheck::IfBlock1::then::_L7 */ _L7_IfBlock1;
  kcg_int /* ContinuousTimeoutCheck::IfBlock1::then::_L6 */ _L6_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* ContinuousTimeoutCheck::IfBlock1::then::_L5 */ _L5_IfBlock1;
  T_internal_Type_Obu_BasicTypes_Pkg /* ContinuousTimeoutCheck::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_bool /* ContinuousTimeoutCheck::IfBlock1::else::_L1 */ _L11_IfBlock1;
  kcg_bool /* ContinuousTimeoutCheck::IfBlock1 */ IfBlock1_clock;
} outC_ContinuousTimeoutCheck;

/* ===========  node initialization and cycle functions  =========== */
/* ContinuousTimeoutCheck */
extern void ContinuousTimeoutCheck(
  /* ContinuousTimeoutCheck::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* ContinuousTimeoutCheck::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* ContinuousTimeoutCheck::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* ContinuousTimeoutCheck::activateCheck */kcg_bool activateCheck,
  outC_ContinuousTimeoutCheck *outC);

extern void ContinuousTimeoutCheck_reset(outC_ContinuousTimeoutCheck *outC);

#endif /* _ContinuousTimeoutCheck_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContinuousTimeoutCheck.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

