/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_
#define _getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_

#include "kcg_types.h"
#include "getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::outLRBG */ outLRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions /* 1 */ Context_1[8];
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  ReceivedMessage_T_Common_Types_Pkg /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L1 */ _L1;
  positionedBGs_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L2 */ _L2;
  NID_LRBG /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L3 */ _L3;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L5 */ _L5;
  array_int_8 /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L6 */ _L6;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::_L8 */ _L8;
} outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
extern void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

extern void getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

#endif /* _getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

