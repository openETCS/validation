/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_
#define _Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_

#include "kcg_types.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_out */ metadata_out;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 1 */ Context_1;
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction /* 3 */ Context_3;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::then::_L1 */ _L1_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L26 */ _L26_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L20 */ _L20_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L11 */ _L11_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L12 */ _L12_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L13 */ _L13_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L14 */ _L14_IfBlock1;
  kcg_int /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L15 */ _L15_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L16 */ _L16_IfBlock1;
  MetadataElement_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L18 */ _L18_IfBlock1;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::IfBlock1::else::_L19 */ _L19_IfBlock1;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::dup */ dup;
  NID_PACKET /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L11 */ _L11;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L12 */ _L12;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L14 */ _L14;
  NID_PACKET /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L16 */ _L16;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L17 */ _L17;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L22 */ _L22;
  Q_DIR /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L21 */ _L21;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L20 */ _L20;
  Q_DIR /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L19 */ _L19;
  Metadata_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L18 */ _L18;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::_L23 */ _L23;
} outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData */
extern void Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::ind */kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::acc */Metadata_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2MetaData::metadata_in */Metadata_T_Common_Types_Pkg *metadata_in,
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

extern void Merg2MetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC);

#endif /* _Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2MetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

