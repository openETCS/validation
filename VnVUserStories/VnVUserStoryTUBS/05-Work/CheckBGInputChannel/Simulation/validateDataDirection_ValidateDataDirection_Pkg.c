/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirection_ValidateDataDirection_Pkg.h"

void validateDataDirection_reset_ValidateDataDirection_Pkg(
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC)
{
  /* 1 */
  validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
    &outC->Context_1);
  /* 2 */
  getLRBGForRadioMessage_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
    &outC->_1_Context_2);
  /* 2 */
  validateDataDirection_General_reset_ValidateDataDirectionGeneral_Pkg(
    &outC->Context_2);
}

/* ValidateDataDirection_Pkg::validateDataDirection */
void validateDataDirection_ValidateDataDirection_Pkg(
  /* ValidateDataDirection_Pkg::validateDataDirection::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  /* ValidateDataDirection_Pkg::validateDataDirection::inLRBG */positionedBG_T_TrainPosition_Types_Pck *inLRBG,
  /* ValidateDataDirection_Pkg::validateDataDirection::inPositionedBGs */positionedBGs_T_TrainPosition_Types_Pck *inPositionedBGs,
  /* ValidateDataDirection_Pkg::validateDataDirection::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  outC_validateDataDirection_ValidateDataDirection_Pkg *outC)
{
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg _1_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg _2_outMessage;
  /* ValidateDataDirection_Pkg::validateDataDirection::outMessage */ ReceivedMessage_T_Common_Types_Pkg _3_outMessage;
  
  kcg_copy_positionedBG_T_TrainPosition_Types_Pck(&outC->_L6, inLRBG);
  outC->_L7 = outC->_L6.valid;
  outC->LRBGKnown = outC->_L7;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  outC->_L5 = outC->_L1.source;
  outC->msgSource = outC->_L5;
  outC->IfBlock1_clock = outC->msgSource == msrc_Eurobalise_Common_Types_Pkg;
  if (outC->IfBlock1_clock) {
    outC->_L36_IfBlock1 = kcg_true;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L34_IfBlock1,
      inMessage);
    outC->_L33_IfBlock1 =
      outC->_L34_IfBlock1.BG_Common_Header.noCoordinateSystemHasBeenAssigned;
    outC->_L32_IfBlock1 = !outC->_L33_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1_IfBlock1, inMessage);
    outC->_L31_IfBlock1 =
      outC->_L1_IfBlock1.BG_Common_Header.trainRunningDirectionToBG;
    kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
      &outC->_L29_IfBlock1,
      trainPosition);
    /* 2 */
    validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
      &outC->_L1_IfBlock1,
      outC->_L31_IfBlock1,
      outC->_L36_IfBlock1,
      &outC->_L29_IfBlock1,
      outC->_L32_IfBlock1,
      &outC->Context_2);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L30_IfBlock1,
      &outC->Context_2.outMessage);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &_1_outMessage,
      &outC->_L30_IfBlock1);
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->outMessage,
      &_1_outMessage);
  }
  else {
    outC->else_clock_IfBlock1 = outC->msgSource ==
      msrc_Euroradio_Common_Types_Pkg;
    if (outC->else_clock_IfBlock1) {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L12_IfBlock1,
        inMessage);
      kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
        &outC->_L11_IfBlock1,
        inPositionedBGs);
      /* 2 */
      getLRBGForRadioMessage_ValidateDataDirectionGeneral_Pkg_Subfunctions(
        &outC->_L12_IfBlock1,
        &outC->_L11_IfBlock1,
        &outC->_1_Context_2);
      kcg_copy_positionedBG_T_TrainPosition_Types_Pck(
        &outC->_L13_IfBlock1,
        &outC->_1_Context_2.outLRBG);
      outC->_L9_IfBlock1 = outC->LRBGKnown;
      outC->_L7_IfBlock1 =
        outC->_L13_IfBlock1.infoFromPassing.BG_Header.noCoordinateSystemHasBeenAssigned;
      outC->_L8_IfBlock1 = !outC->_L7_IfBlock1;
      outC->_L6_IfBlock1 =
        outC->_L13_IfBlock1.infoFromPassing.BG_Header.trainRunningDirectionToBG;
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L2_IfBlock1,
        inMessage);
      kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
        &outC->_L5_IfBlock1,
        trainPosition);
      /* 1 */
      validateDataDirection_General_ValidateDataDirectionGeneral_Pkg(
        &outC->_L2_IfBlock1,
        outC->_L6_IfBlock1,
        outC->_L9_IfBlock1,
        &outC->_L5_IfBlock1,
        outC->_L8_IfBlock1,
        &outC->Context_1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L4_IfBlock1,
        &outC->Context_1.outMessage);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_3_outMessage,
        &outC->_L4_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outMessage, &_3_outMessage);
    }
    else {
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &outC->_L14_IfBlock1,
        inMessage);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
        &_2_outMessage,
        &outC->_L14_IfBlock1);
      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outMessage, &_2_outMessage);
    }
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->outMessage, &outMessage);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirection_ValidateDataDirection_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

