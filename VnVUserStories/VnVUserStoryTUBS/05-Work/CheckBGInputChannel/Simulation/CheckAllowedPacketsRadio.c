/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckAllowedPacketsRadio.h"

void CheckAllowedPacketsRadio_reset(outC_CheckAllowedPacketsRadio *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 3 */ CheckIfSinglePacketIsAllo_reset_SubFunctions(&outC->Context_3[i]);
  }
}

/* CheckAllowedPacketsRadio */
void CheckAllowedPacketsRadio(
  /* CheckAllowedPacketsRadio::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckAllowedPacketsRadio *outC)
{
  kcg_int i2;
  kcg_int i1;
  kcg_bool tmp;
  kcg_int i;
  
  outC->_L11 = kcg_true;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L6, rtmMessage);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L7,
    &outC->_L6.packets.PacketHeaders);
  outC->_L8 = outC->_L6.Radio_Common_Header.nid_message;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L12[i2] = outC->_L8;
  }
  kcg_copy_MetadataTruthtable_T(
    &outC->_L9,
    (MetadataTruthtable_T *) &cPermittedRadioPackets);
  for (i1 = 0; i1 < 30; i1++) {
    kcg_copy_MetadataTruthtable_T(&outC->_L13[i1], &outC->_L9);
  }
  outC->_L14 = outC->_L11;
  for (i = 0; i < 30; i++) {
    tmp = outC->_L14;
    /* 3 */
    CheckIfSinglePacketIsAllo_SubFunctions(
      tmp,
      &outC->_L7[i],
      outC->_L12[i],
      &outC->_L13[i],
      &outC->Context_3[i]);
    outC->_L14 = outC->Context_3[i].valid;
  }
  outC->valid = outC->_L14;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckAllowedPacketsRadio.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

