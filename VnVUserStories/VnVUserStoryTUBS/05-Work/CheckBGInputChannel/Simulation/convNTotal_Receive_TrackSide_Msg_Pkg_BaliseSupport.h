/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_
#define _convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

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
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::inNTotal */N_TOTAL inNTotal,
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

extern void convNTotal_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC);

#endif /* _convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

