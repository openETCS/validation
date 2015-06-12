/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_
#define _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"
#include "isStored_iter_CheckBGConsistency_Pkg_SubFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isAnnounced */ isAnnounced;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::q_linkorintation */ q_linkorintation;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_isStored_iter_CheckBGConsistency_Pkg_SubFunction /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L5 */ _L5_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L4 */ _L4_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L3 */ _L3_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L2 */ _L2_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::then::_L1 */ _L1_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L12 */ _L12_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L13 */ _L13_IfBlock1;
  Q_LINKORIENTATION /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L14 */ _L14_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L15 */ _L15_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1::else::_L1 */ _L11_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::IfBlock1 */ IfBlock1_clock;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::isStored */ isStored;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::indexLocal */ indexLocal;
  positionedBGs_T_TrainPosition_Types_Pck /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L15 */ _L15;
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L16 */ _L16;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L18 */ _L18;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::_L17 */ _L17;
} outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::IsBG_announced */
extern void IsBG_announced_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::recivedBG_header */BG_Header_T_BG_Types_Pkg *recivedBG_header,
  /* CheckBGConsistency_Pkg::SubFunction::IsBG_announced::storedBGs */positionedBGs_T_TrainPosition_Types_Pck *storedBGs,
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC);

extern void IsBG_announced_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_IsBG_announced_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _IsBG_announced_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** IsBG_announced_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

