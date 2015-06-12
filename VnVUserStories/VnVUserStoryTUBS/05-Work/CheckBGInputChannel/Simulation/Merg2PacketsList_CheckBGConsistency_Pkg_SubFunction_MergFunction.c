/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void Merg2PacketsList_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList */
void Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::ind */kcg_int ind,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::acc */CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::lastvalidAddress */CompressedPacketData_T_Common_Types_Pkg *lastvalidAddress,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsList::compressedPacketIn */CompressedPacketData_T_Common_Types_Pkg *compressedPacketIn,
  outC_Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  outC->_L16 = ind;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L15,
    lastvalidAddress);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L13,
    lastvalidAddress);
  outC->_L14 = outC->_L13[0];
  outC->_L11 = ind;
  outC->_L6 = outC->_L15[0];
  outC->_L12 = outC->_L11 - outC->_L6;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, acc);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->_L2,
    compressedPacketIn);
  outC->_L3 = 0;
  if ((0 <= outC->_L12) & (outC->_L12 < 500)) {
    outC->_L8 = outC->_L2[outC->_L12];
  }
  else {
    outC->_L8 = outC->_L3;
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L10, &outC->_L1);
  if ((0 <= outC->_L16) & (outC->_L16 < 500)) {
    outC->_L10[outC->_L16] = outC->_L8;
  }
  outC->_L9 = ind;
  outC->_L5 = outC->_L9 < outC->_L14;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, acc);
  if (outC->_L5) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L7, &outC->_L4);
  }
  else {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L7, &outC->_L10);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->mergedPackets,
    &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

