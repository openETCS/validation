/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SetValidFlag_InformationFilter_Pkg_Common.h"

void SetValidFlag_reset_InformationFilter_Pkg_Common(
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC)
{
}

/* InformationFilter_Pkg::Common::SetValidFlag */
void SetValidFlag_InformationFilter_Pkg_Common(
  /* InformationFilter_Pkg::Common::SetValidFlag::inValidFlag */kcg_bool inValidFlag,
  /* InformationFilter_Pkg::Common::SetValidFlag::inPacket */MetadataElement_T_Common_Types_Pkg *inPacket,
  outC_SetValidFlag_InformationFilter_Pkg_Common *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, inPacket);
  outC->_L7 = outC->_L2.endAddress;
  outC->_L8 = outC->_L2.startAddress;
  outC->_L6 = outC->_L2.valid;
  outC->_L5 = outC->_L2.q_dir;
  outC->_L1 = inValidFlag;
  outC->_L9 = outC->_L6 & outC->_L1;
  outC->_L4 = outC->_L2.nid_packet;
  outC->_L3.nid_packet = outC->_L4;
  outC->_L3.q_dir = outC->_L5;
  outC->_L3.valid = outC->_L9;
  outC->_L3.startAddress = outC->_L8;
  outC->_L3.endAddress = outC->_L7;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->outPacket, &outC->_L3);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** SetValidFlag_InformationFilter_Pkg_Common.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

