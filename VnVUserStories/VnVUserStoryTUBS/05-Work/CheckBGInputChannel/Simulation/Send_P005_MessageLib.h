/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Send_P005_MessageLib_H_
#define _Send_P005_MessageLib_H_

#include "kcg_types.h"
#include "Write_P005_TM_trackside.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPackets_T_Common_Types_Pkg /* MessageLib::Send_P005::B_data_out */ B_data_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Write_P005_TM_trackside /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool tmp;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPackets_T_Common_Types_Pkg /* MessageLib::Send_P005::_L3 */ _L3;
  P005_trackside_int_T_TM /* MessageLib::Send_P005::_L4 */ _L4;
  kcg_bool /* MessageLib::Send_P005::_L8 */ _L8;
  kcg_bool /* MessageLib::Send_P005::_L6 */ _L6;
  CompressedPackets_T_Common_Types_Pkg /* MessageLib::Send_P005::_L7 */ _L7;
  kcg_bool /* MessageLib::Send_P005::_L5 */ _L5;
} outC_Send_P005_MessageLib;

/* ===========  node initialization and cycle functions  =========== */
/* MessageLib::Send_P005 */
extern void Send_P005_MessageLib(
  /* MessageLib::Send_P005::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLib::Send_P005::P005 */P005_trackside_int_T_TM *P005,
  outC_Send_P005_MessageLib *outC);

extern void Send_P005_reset_MessageLib(outC_Send_P005_MessageLib *outC);

#endif /* _Send_P005_MessageLib_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P005_MessageLib.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

