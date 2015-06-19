/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "BuildOutput.h"

void BuildOutput_reset(outC_BuildOutput *outC)
{
}

/* BuildOutput */
void BuildOutput(
  /* BuildOutput::message */ReceivedMessage_T_Common_Types_Pkg *message,
  /* BuildOutput::valid */kcg_bool valid,
  outC_BuildOutput *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, message);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L14,
    &outC->_L1.packets);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L15,
    &outC->_L1.Radio_Common_Header);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L16, &outC->_L1.BG_Common_Header);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L17,
    &outC->_L1.radioMetadata);
  outC->_L18 = outC->_L1.source;
  outC->_L19 = outC->_L1.valid;
  outC->_L12 = !outC->_L19;
  outC->_L2 = valid;
  outC->_L10 = outC->_L12 & outC->_L2;
  outC->_L11.valid = outC->_L10;
  outC->_L11.source = outC->_L18;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L11.radioMetadata,
    &outC->_L17);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L11.BG_Common_Header, &outC->_L16);
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L11.Radio_Common_Header,
    &outC->_L15);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L11.packets,
    &outC->_L14);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->ReceivedMessage,
    &outC->_L11);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** BuildOutput.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

