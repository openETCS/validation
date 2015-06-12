/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::mergPackets */ mergPackets;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1[500];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L6 */ _L6;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L5 */ _L5;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L4 */ _L4;
  array_int_500_500 /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L3 */ _L3;
  array_int_500_500 /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L2 */ _L2;
  CompressedPacketData_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::_L1 */ _L1;
} outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
extern void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::acc */CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::addressArray */CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::newPackets */CompressedPacketData_T_Common_Types_Pkg *newPackets,
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void Merg2PacketsListArray_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

