/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg_H_
#define _Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg_H_

#include "kcg_types.h"
#include "Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::checkedBG */ checkedBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Decop_OutputMessage_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L1 */ _L1;
  checkedBG_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L2 */ _L2;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L3 */ _L3;
  ReceivedMessage_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L4 */ _L4;
  Completeness_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L5 */ _L5;
  Consistency_CheckBGInputChannel_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L6 */ _L6;
  T_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L7 */ _L7;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L8 */ _L8;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L9 */ _L9;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L10 */ _L10;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L11 */ _L11;
  MsgSource_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L12 */ _L12;
  kcg_bool /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L13 */ _L13;
  Q_UPDOWN /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L14 */ _L14;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L15 */ _L15;
  M_MCOUNT /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L16 */ _L16;
  NID_C /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L17 */ _L17;
  NID_BG /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L18 */ _L18;
  Q_LINK /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L19 */ _L19;
  Metadata_T_Common_Types_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L20 */ _L20;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L21 */ _L21;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L22 */ _L22;
  L_internal_Type_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L23 */ _L23;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L24 */ _L24;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L25 */ _L25;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L26 */ _L26;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L27 */ _L27;
  kcg_int /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::_L28 */ _L28;
} outC_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG */
extern void Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Convert_OBUReceivedBG_to_checkedBG::OBU_Received */ReceivedBG_CheckBGInputChannel_Pkg *OBU_Received,
  outC_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg *outC);

extern void Convert_OBUReceivedBG_to__reset_Subfunctions_CheckBGInput_Pkg(
  outC_Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg *outC);

#endif /* _Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Convert_OBUReceivedBG_to__Subfunctions_CheckBGInput_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

