/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckIfPacket15IsPresent_SubFunctions.h"

void CheckIfPacket15IsPresent_reset_SubFunctions(
  outC_CheckIfPacket15IsPresent_SubFunctions *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ CheckIfPacketRadioMetadat_reset_SubFunctions(&outC->Context_1[i]);
  }
}

/* SubFunctions::CheckIfPacket15IsPresent */
void CheckIfPacket15IsPresent_SubFunctions(
  /* SubFunctions::CheckIfPacket15IsPresent::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckIfPacket15IsPresent_SubFunctions *outC)
{
  kcg_bool tmp;
  kcg_int i;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, rtmMessage);
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L4,
    &outC->_L1.packets.PacketHeaders);
  outC->_L3 = kcg_false;
  outC->_L5 = outC->_L3;
  for (i = 0; i < 30; i++) {
    tmp = outC->_L5;
    /* 1 */
    CheckIfPacketRadioMetadat_SubFunctions(
      tmp,
      &outC->_L4[i],
      &outC->Context_1[i]);
    outC->_L5 = outC->Context_1[i].result;
  }
  outC->result = outC->_L5;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckIfPacket15IsPresent_SubFunctions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

