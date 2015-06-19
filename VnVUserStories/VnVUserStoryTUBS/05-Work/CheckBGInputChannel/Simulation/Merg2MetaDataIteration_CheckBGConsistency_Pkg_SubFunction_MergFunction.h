/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::mergedMetaData */ mergedMetaData;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1[30];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L11 */ _L11;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L12 */ _L12;
  array__18447 /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L17 */ _L17;
  Telegram_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L18 */ _L18;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::_L19 */ _L19;
} outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration */
extern void Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::metaData */Metadata_T_Common_Types_Pkg *metaData,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaDataIteration::telegram */Telegram_T_BG_Types_Pkg *telegram,
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void Merg2MetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2MetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

