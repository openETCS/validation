/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::go_on */ go_on;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::metadata */ metadata;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L1 */ _L1;
  NID_PACKET /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L6 */ _L6;
  Q_DIR /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L5 */ _L5;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L4 */ _L4;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L3 */ _L3;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L2 */ _L2;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L7 */ _L7;
  NID_PACKET /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L8 */ _L8;
  Q_DIR /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L9 */ _L9;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L10 */ _L10;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L11 */ _L11;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L12 */ _L12;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L13 */ _L13;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L14 */ _L14;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L15 */ _L15;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L16 */ _L16;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L17 */ _L17;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::_L18 */ _L18;
} outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData */
extern void FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc */MetadataElement_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc1 */MetadataElement_T_Common_Types_Pkg *acc1,
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void FindIndexOfMetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

