/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */
#ifndef _convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ outTotal;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else */ _6_else_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else */ _4_else_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else */ _2_else_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else */ _1_else_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else */ _3_else_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else */ _5_else_clock_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::then::_L1 */ _L18_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::then::_L1 */ _L110_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::then::_L1 */ _L112_IfBlock1;
  kcg_bool /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else */ else_clock_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else::else::_L2 */ _L2_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::else::else::then::_L1 */ _L113_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::else::else::then::_L1 */ _L111_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::else::else::then::_L1 */ _L19_IfBlock1;
  kcg_int /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::IfBlock1::else::then::_L1 */ _L17_IfBlock1;
} outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport;

/* ===========  node initialization and cycle functions  =========== */
/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal */
extern void convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::inNTotal */ N_TOTAL inNTotal,
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void convNTotal_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void convNTotal_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);
#endif /* KCG_USER_DEFINED_INIT */

#endif /* _convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $**************** KCG Version 6.4 (build i21) ****************
** convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

