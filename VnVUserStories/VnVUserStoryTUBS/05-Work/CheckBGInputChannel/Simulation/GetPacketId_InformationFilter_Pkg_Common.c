/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "GetPacketId_InformationFilter_Pkg_Common.h"

void GetPacketId_reset_InformationFilter_Pkg_Common(
  outC_GetPacketId_InformationFilter_Pkg_Common *outC)
{
}

/* InformationFilter_Pkg::Common::GetPacketId */
void GetPacketId_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::GetPacketId::inPacket */MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_GetPacketId_InformationFilter_Pkg_Common *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, inPacket);
  outC->_L4 = outC->_L1.nid_packet;
  outC->outPacketId = outC->_L4;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** GetPacketId_InformationFilter_Pkg_Common.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

