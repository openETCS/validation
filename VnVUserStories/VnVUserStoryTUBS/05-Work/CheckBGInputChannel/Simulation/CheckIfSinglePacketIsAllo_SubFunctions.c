/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfSinglePacketIsAllo_SubFunctions.h"

void CheckIfSinglePacketIsAllo_reset_SubFunctions(
  outC_CheckIfSinglePacketIsAllo_SubFunctions *outC)
{
}

/* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage */
void CheckIfSinglePacketIsAllo_SubFunctions(
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::accumulator */kcg_bool accumulator,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::currentPacket */MetadataElement_T_Common_Types_Pkg *currentPacket,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::nid_message */NID_MESSAGE nid_message,
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::permittedPackets */MetadataTruthtable_T *permittedPackets,
  outC_CheckIfSinglePacketIsAllo_SubFunctions *outC)
{
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */ kcg_bool _1_validTmp;
  /* SubFunctions::CheckIfSinglePacketIsAllowedForRadioMessage::validTmp */ kcg_bool validTmp;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L3, currentPacket);
  outC->_L19 = outC->_L3.valid;
  outC->_L14 = accumulator;
  outC->present = outC->_L19;
  outC->IfBlock1_clock = outC->present == kcg_true;
  if (outC->IfBlock1_clock) {
    kcg_copy_MetadataTruthtable_T(&outC->_L2_IfBlock1, permittedPackets);
    outC->_L3_IfBlock1 = nid_message;
    outC->_L5_IfBlock1 = (kcg_int) outC->_L3_IfBlock1;
  }
  else {
    outC->_L11_IfBlock1 = kcg_true;
    validTmp = outC->_L11_IfBlock1;
  }
  outC->_L12 = outC->_L3.nid_packet;
  outC->_L13 = (kcg_int) outC->_L12;
  outC->nid_packet = outC->_L13;
  if (outC->IfBlock1_clock) {
    outC->_L7_IfBlock1 = outC->nid_packet;
    outC->_L4_IfBlock1 = kcg_false;
    if ((0 <= outC->_L5_IfBlock1) & (outC->_L5_IfBlock1 < 46) & ((0 <=
          outC->_L7_IfBlock1) & (outC->_L7_IfBlock1 < 256))) {
      outC->_L1_IfBlock1 =
        outC->_L2_IfBlock1[outC->_L5_IfBlock1][outC->_L7_IfBlock1];
    }
    else {
      outC->_L1_IfBlock1 = outC->_L4_IfBlock1;
    }
    _1_validTmp = outC->_L1_IfBlock1;
    outC->validTmp = _1_validTmp;
  }
  else {
    outC->validTmp = validTmp;
  }
  outC->_L16 = outC->validTmp;
  outC->_L15 = outC->_L14 & outC->_L16;
  outC->valid = outC->_L15;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfSinglePacketIsAllo_SubFunctions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

