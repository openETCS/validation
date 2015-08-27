/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Driver_ConstantAcc_Test_Driver_H_
#define _Driver_ConstantAcc_Test_Driver_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Test_Driver::Driver_ConstantAcc::out_acceleration */ out_acceleration;
  kcg_real /* Test_Driver::Driver_ConstantAcc::out_initialvelocity */ out_initialvelocity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Test_Driver::Driver_ConstantAcc::_L1 */ _L1;
  kcg_real /* Test_Driver::Driver_ConstantAcc::_L2 */ _L2;
} outC_Driver_ConstantAcc_Test_Driver;

/* ===========  node initialization and cycle functions  =========== */
/* Test_Driver::Driver_ConstantAcc */
extern void Driver_ConstantAcc_Test_Driver(
  outC_Driver_ConstantAcc_Test_Driver *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Driver_ConstantAcc_reset_Test_Driver(
  outC_Driver_ConstantAcc_Test_Driver *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Driver_ConstantAcc_init_Test_Driver(
  outC_Driver_ConstantAcc_Test_Driver *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Driver_ConstantAcc_Test_Driver_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Driver_ConstantAcc_Test_Driver.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

