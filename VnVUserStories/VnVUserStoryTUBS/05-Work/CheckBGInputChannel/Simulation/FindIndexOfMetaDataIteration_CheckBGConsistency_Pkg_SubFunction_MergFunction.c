/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.h"

void FindIndexOfMetaDataIteration_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  kcg_int i;
  
  for (i = 0; i < 29; i++) {
    /* 1 */
    FindIndexOfMetaData_reset_CheckBGConsistency_Pkg_SubFunction_MergFunction(
      &outC->Context_1[i]);
  }
}

/* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration */
void FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction(
  /* CheckBGConsistency_Pkg::SubFunction::MergFunction::FindIndexOfMetaDataIteration::metadata */Metadata_T_Common_Types_Pkg *metadata,
  outC_FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction *outC)
{
  MetadataElement_T_Common_Types_Pkg tmp;
  kcg_int i;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, metadata);
  kcg_copy_array__18444(&outC->_L19, (array__18444 *) &outC->_L1[1]);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L17, &outC->_L1[0]);
  outC->_L8 = kcg_true;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L12, &outC->_L17);
  if (outC->_L8) {
    for (i = 0; i < 29; i++) {
      kcg_copy_MetadataElement_T_Common_Types_Pkg(&tmp, &outC->_L12);
      /* 1 */
      FindIndexOfMetaData_CheckBGConsistency_Pkg_SubFunction_MergFunction(
        &tmp,
        &outC->_L19[i],
        &outC->Context_1[i]);
      kcg_copy_MetadataElement_T_Common_Types_Pkg(
        &outC->_L12,
        &outC->Context_1[i].metadata);
      outC->_L7 = i + 1;
      if (!outC->Context_1[i].go_on) {
        break;
      }
    }
  }
  else {
    outC->_L7 = 0;
  }
  outC->_L18 = outC->_L12.endAddress;
  outC->endAddress = outC->_L18;
  outC->index = outC->_L7;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** FindIndexOfMetaDataIteration_CheckBGConsistency_Pkg_SubFunction_MergFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

