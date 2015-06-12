/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _bildBGHeader_CheckBGConsistency_Pkg_SubFunction_H_
#define _bildBGHeader_CheckBGConsistency_Pkg_SubFunction_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::bgHeader */ bgHeader;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  BG_Header_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L2 */ _L2;
  Q_UPDOWN /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L12 */ _L12;
  M_VERSION /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L11 */ _L11;
  Q_MEDIA /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L10 */ _L10;
  N_PIG /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L9 */ _L9;
  N_TOTAL /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L8 */ _L8;
  M_DUP /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L7 */ _L7;
  M_MCOUNT /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L6 */ _L6;
  NID_C /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L5 */ _L5;
  NID_BG /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L4 */ _L4;
  Q_LINK /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L3 */ _L3;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L19 */ _L19;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L18 */ _L18;
  MsgSource_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L17 */ _L17;
  BG_Message_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L16 */ _L16;
  RadioMessage_T_Radio_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L15 */ _L15;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L20 */ _L20;
  odometry_T_Obu_BasicTypes_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L21 */ _L21;
  kcg_bool /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L22 */ _L22;
  Q_NVLOCACC /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L23 */ _L23;
  Q_DIRLRBG /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L25 */ _L25;
  Q_DIRTRAIN /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L26 */ _L26;
  TelegramHeader_T_BG_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L27 */ _L27;
  TrackSide_ForCheck_T_Common_Types_Pkg /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::_L28 */ _L28;
} outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGConsistency_Pkg::SubFunction::bildBGHeader */
extern void bildBGHeader_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::trackSideForCheck */TrackSide_ForCheck_T_Common_Types_Pkg *trackSideForCheck,
  /* CheckBGConsistency_Pkg::SubFunction::bildBGHeader::q_nvlocacc */Q_NVLOCACC q_nvlocacc,
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC);

extern void bildBGHeader_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_bildBGHeader_CheckBGConsistency_Pkg_SubFunction *outC);

#endif /* _bildBGHeader_CheckBGConsistency_Pkg_SubFunction_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** bildBGHeader_CheckBGConsistency_Pkg_SubFunction.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

