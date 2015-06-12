/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

void getLRBGForRadioMessageIte_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
}

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator */
void getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::accumulator */positionedBG_T_TrainPosition_Types_Pck *accumulator,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::nid_lrbg */NID_LRBG nid_lrbg,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessageIterator::positionedBG */positionedBG_T_TrainPosition_Types_Pck *positionedBG,
  outC_getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L3, positionedBG);
  outC->_L10 = outC->_L3.valid;
  outC->_L2 = nid_lrbg;
  outC->_L5 = outC->_L3.nid_bg;
  outC->_L4 = outC->_L2 == outC->_L5;
  outC->_L9 = outC->_L4 & outC->_L10;
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L8, positionedBG);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L1, accumulator);
  if (outC->_L9) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, &outC->_L8);
  }
  else {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L7, &outC->_L1);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->LRBG, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

