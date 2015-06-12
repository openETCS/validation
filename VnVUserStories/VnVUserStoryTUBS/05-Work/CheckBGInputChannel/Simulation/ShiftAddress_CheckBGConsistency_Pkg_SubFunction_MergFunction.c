/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void ShiftAddress_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress */
void ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::metaData_In */MetadataElement_T_Common_Types_Pkg *metaData_In,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::ShiftAddress::distance */kcg_int distance,
  outC_ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, metaData_In);
  outC->_L2 = outC->_L1.endAddress;
  outC->_L3 = outC->_L1.startAddress;
  outC->_L4 = outC->_L1.valid;
  outC->_L5 = outC->_L1.q_dir;
  outC->_L11 = 1;
  outC->_L8 = distance;
  outC->_L9 = outC->_L11 + outC->_L8;
  outC->_L12 = outC->_L2 - outC->_L3;
  outC->_L13 = outC->_L9 + outC->_L12;
  outC->_L6 = outC->_L1.nid_packet;
  outC->_L7.nid_packet = outC->_L6;
  outC->_L7.q_dir = outC->_L5;
  outC->_L7.valid = outC->_L4;
  outC->_L7.startAddress = outC->_L9;
  outC->_L7.endAddress = outC->_L13;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->metaData_Out, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ShiftAddress_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

