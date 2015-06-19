/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.h"

void WriteDirection2PassedBG_reset_CheckBGConsistency_Pkg_SubFunction(
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
}

/* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG */
void WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction(
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::isNominal */kcg_bool isNominal,
  /* CheckBGConsistency_Pkg::SubFunction::WriteDirection2PassedBG::passedBG_in */ReceivedMessage_T_Common_Types_Pkg *passedBG_in,
  outC_WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction *outC)
{
  outC->_L28 = cQDirLrbgRevers_CheckBGConsistency_Pkg;
  outC->_L27 = cQqDirTrainRevers_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L23, passedBG_in);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L25, &outC->_L23);
  if (kcg_true) {
    outC->_L25.BG_Common_Header.trainOrientationToBG = outC->_L28;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L22, &outC->_L25);
  if (kcg_true) {
    outC->_L22.BG_Common_Header.trainRunningDirectionToBG = outC->_L27;
  }
  outC->_L21 = cQqDirTrainNominal_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, passedBG_in);
  outC->_L18 = cQDirLrbgNominal_CheckBGConsistency_Pkg;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L16, &outC->_L1);
  if (kcg_true) {
    outC->_L16.BG_Common_Header.trainOrientationToBG = outC->_L18;
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L19, &outC->_L16);
  if (kcg_true) {
    outC->_L19.BG_Common_Header.trainRunningDirectionToBG = outC->_L21;
  }
  outC->_L14 = isNominal;
  if (outC->_L14) {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L15, &outC->_L19);
  }
  else {
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L15, &outC->_L22);
  }
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->passedBG_out, &outC->_L15);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** WriteDirection2PassedBG_CheckBGConsistency_Pkg_SubFunction.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

