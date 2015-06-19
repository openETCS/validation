/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void FindIndexOfMetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData */
void FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc */MetadataElement_T_Common_Types_Pkg *acc,
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaData::acc1 */MetadataElement_T_Common_Types_Pkg *acc1,
  outC_FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  Q_DIR noname;
  kcg_int _1_noname;
  NID_PACKET _2_noname;
  NID_PACKET _3_noname;
  Q_DIR _4_noname;
  kcg_int _5_noname;
  
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L1, acc);
  outC->_L2 = outC->_L1.endAddress;
  outC->_L3 = outC->_L1.startAddress;
  outC->_L4 = outC->_L1.valid;
  outC->_L5 = outC->_L1.q_dir;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L7, acc1);
  outC->_L12 = outC->_L7.endAddress;
  outC->_L11 = outC->_L7.startAddress;
  outC->_L10 = outC->_L7.valid;
  outC->_L9 = outC->_L7.q_dir;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L18, acc);
  outC->_L13 = outC->_L4 & outC->_L10;
  outC->_L15 = outC->_L2 < outC->_L12;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L16, &outC->_L7);
  if (kcg_true) {
    outC->_L16.endAddress = outC->_L2;
  }
  if (outC->_L15) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L14, &outC->_L7);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L14, &outC->_L16);
  }
  if (outC->_L13) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L17, &outC->_L14);
  }
  else {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L17, &outC->_L18);
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->metadata, &outC->_L17);
  _5_noname = outC->_L11;
  _4_noname = outC->_L9;
  outC->_L8 = outC->_L7.nid_packet;
  _3_noname = outC->_L8;
  outC->_L6 = outC->_L1.nid_packet;
  _2_noname = outC->_L6;
  _1_noname = outC->_L3;
  noname = outC->_L5;
  outC->go_on = outC->_L13;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

