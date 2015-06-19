/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _validateDataDirection_ValidateDataDirection_Pkg_H_
#define _validateDataDirection_ValidateDataDirection_Pkg_H_

#include "kcg_types.h"
#include "validateDataDirection_General_ValidateDataDirectionGeneral_Pkg.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ outMessage;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg /* 1 */ Context_1;
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions /* 2 */ _1_Context_2;
  outC_validateDataDirection_General_ValidateDataDirectionGeneral_Pkg /* 2 */ Context_2;
  /* ------------------ clocks of observable data -------------------- */
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else */ else_clock_IfBlock1;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1 */ IfBlock1_clock;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L36 */ _L36_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L34 */ _L34_IfBlock1;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L33 */ _L33_IfBlock1;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L32 */ _L32_IfBlock1;
  Q_DIRTRAIN /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L31 */ _L31_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L30 */ _L30_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L29 */ _L29_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::then::_L1 */ _L1_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::else::_L1 */ _L14_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L4 */ _L4_IfBlock1;
  trainPosition_T_TrainPosition_Types_Pck /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L5 */ _L5_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L2 */ _L2_IfBlock1;
  Q_DIRTRAIN /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L6 */ _L6_IfBlock1;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L7 */ _L7_IfBlock1;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L8 */ _L8_IfBlock1;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L9 */ _L9_IfBlock1;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L13 */ _L13_IfBlock1;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L12 */ _L12_IfBlock1;
  positionedBGs_T_TrainPosition_Types_Pck /* ValidateDataDirection_Pkg::validateDataDirection::IfBlock1::else::then::_L11 */ _L11_IfBlock1;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::msgSource */ msgSource;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::LRBGKnown */ LRBGKnown;
  MsgSource_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::_L5 */ _L5;
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirection_Pkg::validateDataDirection::_L1 */ _L1;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirection_Pkg::validateDataDirection::_L6 */ _L6;
  kcg_bool /* ValidateDataDirection_Pkg::validateDataDirection::_L7 */ _L7;
} outC_validateDataDirection_ValidateDataDirection_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirection_Pkg::validateDataDirection */
extern void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC);

extern void validateDataDirection_reset_ValidateDataDirection_Pkg(
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC);

#endif /* _validateDataDirection_ValidateDataDirection_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_ValidateDataDirection_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

