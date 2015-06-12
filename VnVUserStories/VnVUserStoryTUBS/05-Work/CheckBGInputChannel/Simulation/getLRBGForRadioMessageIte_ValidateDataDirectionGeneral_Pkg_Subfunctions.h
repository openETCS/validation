/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_
#define _getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::LRBG */ LRBG;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L1 */ _L1;
  NID_LRBG /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L2 */ _L2;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L3 */ _L3;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L4 */ _L4;
  NID_BG /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L5 */ _L5;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L7 */ _L7;
  positionedBG_T_TrainPosition_Types_Pck /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L8 */ _L8;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L9 */ _L9;
  kcg_bool /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::_L10 */ _L10;
} outC_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions;

/* ===========  node initialization and cycle functions  =========== */
/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator */
extern void getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::accumulator */positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_lrbg */NID_LRBG nid_lrbg,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::positionedBG */positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  outC_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

extern void getLRBGForRadioMessageIte_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC);

#endif /* _getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

