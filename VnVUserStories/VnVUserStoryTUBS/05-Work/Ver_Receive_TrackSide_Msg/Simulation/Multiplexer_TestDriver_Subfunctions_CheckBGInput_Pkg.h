/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg_H_
#define _Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "Driver_ConstantAcc_Test_Driver.h"
#include "Driver_ConstantSpeed400_Test_Driver.h"
#include "Driver_ConstantSpeed100_Test_Driver.h"
#include "Driver_ConstantSpeed20_Test_Driver.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::acceleration */ acceleration;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::initialVelocity */ initialVelocity;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Driver_ConstantSpeed20_Test_Driver /* 1 */ _3_Context_1;
  outC_Driver_ConstantSpeed100_Test_Driver /* 1 */ _2_Context_1;
  outC_Driver_ConstantSpeed400_Test_Driver /* 1 */ _1_Context_1;
  outC_Driver_ConstantAcc_Test_Driver /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else */ _4_else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::else */ else_clock_IfBlock1;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::then::_L2 */ _L2_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::else::then::_L2 */ _L27_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::else::then::_L1 */ _L18_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::else::else::_L1 */ _L19_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::else::else::_L2 */ _L210_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::then::_L2 */ _L26_IfBlock1;
  kcg_real /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::IfBlock1::else::then::_L1 */ _L15_IfBlock1;
} outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver */
extern void Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestDriver::in_TestDriver */ kcg_int in_TestDriver,
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void Multiplexer_TestDriver_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void Multiplexer_TestDriver_init_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** Multiplexer_TestDriver_Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

