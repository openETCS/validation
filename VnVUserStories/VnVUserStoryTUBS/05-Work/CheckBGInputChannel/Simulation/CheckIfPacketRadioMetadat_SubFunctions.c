/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacketRadioMetadat_SubFunctions.h"

void CheckIfPacketRadioMetadat_reset_SubFunctions(
  outC_CheckIfPacketRadioMetadat_SubFunctions *outC)
{
}

/* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15 */
void CheckIfPacketRadioMetadat_SubFunctions(
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::accumulatorInput */kcg_bool accumulatorInput,
  /* SubFunctions::CheckIfPacketRadioMetadataElementIsPacket15::metadataElement */MetadataElement_T_Common_Types_Pkg *metadataElement,
  outC_CheckIfPacketRadioMetadat_SubFunctions *outC)
{
  outC->_L6 = accumulatorInput;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, metadataElement);
  outC->_L2 = outC->_L1.nid_packet;
  outC->_L4 = 15;
  outC->_L3 = outC->_L2 == outC->_L4;
  outC->_L8 = outC->_L6 | outC->_L3;
  outC->result = outC->_L8;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacketRadioMetadat_SubFunctions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

