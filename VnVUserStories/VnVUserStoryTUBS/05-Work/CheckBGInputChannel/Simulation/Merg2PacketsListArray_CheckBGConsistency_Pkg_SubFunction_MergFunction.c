/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void Merg2PacketsListArray_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    Merg2PacketsList_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_1[i]);
  }
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray */
void Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::acc */CompressedPacketData_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::addressArray */CompressedPacketData_T_Common_Types_Pkg *addressArray,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::Merg2PacketsListArray::newPackets */CompressedPacketData_T_Common_Types_Pkg *newPackets,
  outC_Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i2;
  kcg_int i1;
  CompressedPacketData_T_Common_Types_Pkg tmp;
  kcg_int i;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L6, addressArray);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L5, acc);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L4, newPackets);
  for (i2 = 0; i2 < 500; i2++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L3[i2],
      &outC->_L6);
  }
  for (i1 = 0; i1 < 500; i1++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L2[i1],
      &outC->_L4);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, &outC->_L5);
  for (i = 0; i < 500; i++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&tmp, &outC->_L1);
    /* 1 */
    Merg2PacketsList_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      i,
      &tmp,
      &outC->_L3[i],
      &outC->_L2[i],
      &outC->Context_1[i]);
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L1,
      &outC->Context_1[i].mergedPackets);
  }
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->mergPackets,
    &outC->_L1);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Merg2PacketsListArray_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

