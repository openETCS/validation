/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_Out */ metaData_Out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L1 */ _L1;
  NID_PACKET /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L6 */ _L6;
  Q_DIR /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L5 */ _L5;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L3 */ _L3;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L2 */ _L2;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L7 */ _L7;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L8 */ _L8;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L9 */ _L9;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L11 */ _L11;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L12 */ _L12;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::_L13 */ _L13;
} outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress */
extern void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_In */MetadataElement_T_Common_Types_Pkg *metaData_In,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::distance */kcg_int distance,
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void ShiftAddress_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

