/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ModeFilter_InformationFilter_Pkg_ThirdFilter.h"

void ModeFilter_reset_InformationFilter_Pkg_ThirdFilter(
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  /* 1 */ CheckModeExceptions_reset_InformationFilter_Pkg(&outC->_2_Context_1);
  /* 1 */ MapModeToColumn_reset_InformationFilter_Pkg(&outC->_1_Context_1);
  /* 1 */ MapPacketIdToRow_reset_InformationFilter_Pkg(&outC->Context_1);
}

/* InformationFilter_Pkg::ThirdFilter::ModeFilter */
void ModeFilter_InformationFilter_Pkg_ThirdFilter(
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inOperationModus */M_MODE inOperationModus,
  /* InformationFilter_Pkg::ThirdFilter::ModeFilter::inPacketId */kcg_int inPacketId,
  outC_ModeFilter_InformationFilter_Pkg_ThirdFilter *outC)
{
  kcg_copy_ModeDecisionTableType_DataDictionary_Pkg(
    &outC->_L249,
    (ModeDecisionTableType_DataDictionary_Pkg *)
      &ModeDecisionTable_DataDictionary_Pkg);
  outC->_L268 = inPacketId;
  /* 1 */ MapPacketIdToRow_InformationFilter_Pkg(outC->_L268, &outC->Context_1);
  outC->_L261 = outC->Context_1.outRow;
  outC->_L259 = inOperationModus;
  /* 1 */
  MapModeToColumn_InformationFilter_Pkg(outC->_L259, &outC->_1_Context_1);
  outC->_L262 = outC->_1_Context_1.outColumn;
  if ((0 <= outC->_L261) & (outC->_L261 < 256) & ((0 <= outC->_L262) &
      (outC->_L262 < 17))) {
    outC->_L256 = outC->_L249[outC->_L261][outC->_L262];
  }
  else {
    outC->_L256 = NotRelevant_DataDictionary_Pkg;
  }
  /* 1 */
  CheckModeExceptions_InformationFilter_Pkg(outC->_L256, &outC->_2_Context_1);
  outC->_L263 = outC->_2_Context_1.outAccept;
  outC->outPacketAccept = outC->_L263;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ModeFilter_InformationFilter_Pkg_ThirdFilter.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

