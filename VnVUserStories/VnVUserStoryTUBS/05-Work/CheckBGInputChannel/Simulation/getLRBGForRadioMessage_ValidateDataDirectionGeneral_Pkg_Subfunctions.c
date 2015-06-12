/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

void getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  kcg_int i;
  
  for (i = 0; i < 8; i++) {
    /* 1 */
    getLRBGForRadioMessageIte_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &outC->Context_1[i]);
  }
}

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage */
void getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::getLRBGForRadioMessage::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  outC_getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  kcg_int i1;
  positionedBG_T_TrainPosition_Types_Pck tmp;
  kcg_int i;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
    &outC->_L8,
    (positionedBG_T_TrainPosition_Types_Pck *)
      &cEmptyLRBG_ValidateDataDirection_Pkg);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  outC->_L3 = outC->_L1.Radio_Common_Header.nid_lrbg;
  for (i1 = 0; i1 < 8; i1++) {
    outC->_L6[i1] = outC->_L3;
  }
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(&outC->_L2, inPositionedBGs);
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L5, &outC->_L8);
  for (i = 0; i < 8; i++) {
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&tmp, &outC->_L5);
    /* 1 */
    getLRBGForRadioMessageIte_ValidateDataDirectionGeneral_Pkg_Subfunctions(
      &tmp,
      outC->_L6[i],
      &outC->_L2[i],
      &outC->Context_1[i]);
    kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
      &outC->_L5,
      &outC->Context_1[i].LRBG);
  }
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->outLRBG, &outC->_L5);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

