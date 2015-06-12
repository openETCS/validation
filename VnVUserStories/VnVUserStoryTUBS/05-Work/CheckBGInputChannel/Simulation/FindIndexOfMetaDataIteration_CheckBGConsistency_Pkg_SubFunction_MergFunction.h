/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::index */ index;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::endAddress */ endAddress;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1[29];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L1 */ _L1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L7 */ _L7;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L8 */ _L8;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L12 */ _L12;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L17 */ _L17;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L18 */ _L18;
  array__18444 /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::_L19 */ _L19;
} outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
extern void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::metadata */Metadata_T_Common_Types_Pkg *metadata,
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

