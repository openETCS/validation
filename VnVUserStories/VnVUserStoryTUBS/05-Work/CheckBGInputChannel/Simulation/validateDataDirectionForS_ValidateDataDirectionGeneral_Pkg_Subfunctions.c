/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions.h"

void validateDataDirectionForS_reset_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
}

/* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket */
void validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions(
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inMetadataElement */MetadataElement_T_Common_Types_Pkg *inMetadataElement,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::inTrainRunningDirection */Q_DIRTRAIN inTrainRunningDirection,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::LRBGKnown */kcg_bool LRBGKnown,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::trainPosition */trainPosition_T_TrainPosition_Types_Pck *trainPosition,
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::coordinateSystemAssigned */kcg_bool coordinateSystemAssigned,
  outC_validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions *outC)
{
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */ MetadataElement_T_Common_Types_Pkg _1_outMetadataElement;
  /* ValidateDataDirectionGeneral_Pkg::Subfunctions::validateDataDirectionForSinglePacket::outMetadataElement */ MetadataElement_T_Common_Types_Pkg outMetadataElement;
  
  outC->IfBlock1_clock = (*inMetadataElement).nid_packet != 44;
  if (outC->IfBlock1_clock) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L5_IfBlock1,
      inMetadataElement);
    outC->_L15_IfBlock1 = outC->_L5_IfBlock1.endAddress;
    outC->_L14_IfBlock1 = outC->_L5_IfBlock1.startAddress;
    outC->_L13_IfBlock1 = outC->_L5_IfBlock1.valid;
    outC->_L12_IfBlock1 = outC->_L5_IfBlock1.q_dir;
  }
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(&outC->_L36, trainPosition);
  outC->_L35 = outC->_L36.trainPositionIsUnknown;
  outC->_L34 = !outC->_L35;
  outC->trainPositionKnown = outC->_L34;
  if (outC->IfBlock1_clock) {
    outC->_L32_IfBlock1 = LRBGKnown;
    outC->_L31_IfBlock1 = LRBGKnown;
    outC->_L30_IfBlock1 = coordinateSystemAssigned;
    outC->_L29_IfBlock1 = coordinateSystemAssigned;
    outC->_L10_IfBlock1 = Q_DIR_Reverse;
    outC->_L22_IfBlock1 = outC->_L12_IfBlock1 == outC->_L10_IfBlock1;
    outC->_L16_IfBlock1 = Q_DIRTRAIN_Reverse;
    outC->_L6_IfBlock1 = inTrainRunningDirection;
    outC->_L23_IfBlock1 = outC->_L16_IfBlock1 == outC->_L6_IfBlock1;
    outC->_L2_IfBlock1 = outC->trainPositionKnown;
    outC->_L28_IfBlock1 = outC->_L22_IfBlock1 & outC->_L23_IfBlock1 &
      outC->_L2_IfBlock1 & outC->_L30_IfBlock1 & outC->_L32_IfBlock1;
    outC->_L27_IfBlock1 = inTrainRunningDirection;
    outC->_L7_IfBlock1 = Q_DIR_Nominal;
    outC->_L1_IfBlock1 = outC->_L12_IfBlock1 == outC->_L7_IfBlock1;
    outC->_L18_IfBlock1 = Q_DIRTRAIN_Nominal;
    outC->_L3_IfBlock1 = outC->_L18_IfBlock1 == outC->_L27_IfBlock1;
    outC->_L21_IfBlock1 = outC->trainPositionKnown;
    outC->_L25_IfBlock1 = outC->_L1_IfBlock1 & outC->_L3_IfBlock1 &
      outC->_L21_IfBlock1 & outC->_L29_IfBlock1 & outC->_L31_IfBlock1;
    outC->_L24_IfBlock1 = Q_DIR_Both_directions;
    outC->_L8_IfBlock1 = outC->_L12_IfBlock1 == outC->_L24_IfBlock1;
    outC->_L20_IfBlock1 = outC->_L25_IfBlock1 | outC->_L28_IfBlock1 |
      outC->_L8_IfBlock1;
    outC->_L19_IfBlock1 = outC->_L13_IfBlock1 & outC->_L20_IfBlock1;
    outC->_L11_IfBlock1 = outC->_L5_IfBlock1.nid_packet;
    outC->_L9_IfBlock1.nid_packet = outC->_L11_IfBlock1;
    outC->_L9_IfBlock1.q_dir = outC->_L12_IfBlock1;
    outC->_L9_IfBlock1.valid = outC->_L19_IfBlock1;
    outC->_L9_IfBlock1.startAddress = outC->_L14_IfBlock1;
    outC->_L9_IfBlock1.endAddress = outC->_L15_IfBlock1;
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &_1_outMetadataElement,
      &outC->_L9_IfBlock1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->outMetadataElement,
      &_1_outMetadataElement);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L17_IfBlock1,
      inMetadataElement);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outMetadataElement,
      &outC->_L17_IfBlock1);
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->outMetadataElement,
      &outMetadataElement);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** validateDataDirectionForS_ValidateDataDirectionGeneral_Pkg_Subfunctions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

