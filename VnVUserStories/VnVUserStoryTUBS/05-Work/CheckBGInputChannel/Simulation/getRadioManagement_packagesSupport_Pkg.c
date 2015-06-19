/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getRadioManagement_packagesSupport_Pkg.h"

void getRadioManagement_reset_packagesSupport_Pkg(
  outC_getRadioManagement_packagesSupport_Pkg *outC)
{
  /* 1 */
  checkRadioManagementType_reset_packagesSupport_Pkg(&outC->_2_Context_1);
  /* 1 */ Read_P042_reset_TM(&outC->_1_Context_1);
  /* 1 */ Read_P045_reset_TM(&outC->Context_1);
}

/* packagesSupport_Pkg::getRadioManagement */
void getRadioManagement_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getRadioManagement::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_getRadioManagement_packagesSupport_Pkg *outC)
{
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L15,
    &outC->_L1.packets);
  /* 1 */ Read_P045_TM(&outC->_L15, &outC->Context_1);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L62,
    &outC->Context_1.P045_OBU_out);
  outC->_L66 = outC->_L62.valid;
  outC->P45_valid = outC->_L66;
  /* 1 */ Read_P042_TM(&outC->_L15, &outC->_1_Context_1);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L61,
    &outC->_1_Context_1.P042_OBU_out);
  outC->_L63 = outC->_L61.valid;
  outC->P42_valid = outC->_L63;
  outC->_L11 = outC->_L1.source;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L44,
    &outC->_L1.Radio_Common_Header);
  outC->_L48 = outC->_L44.nid_message;
  /* 1 */
  checkRadioManagementType_packagesSupport_Pkg(
    outC->_L11,
    outC->_L48,
    &outC->_2_Context_1);
  outC->_L46 = outC->_2_Context_1.outValid;
  outC->radioMessageValid = outC->_L46;
  outC->_L50 = outC->radioMessageValid;
  outC->_L18 = outC->_L1.source;
  outC->_L19 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L20 = outC->_L18 == outC->_L19;
  outC->_L49 = outC->_L50 & outC->_L20;
  outC->_L43 = outC->P45_valid;
  outC->_L24 = outC->P42_valid;
  outC->_L21 = outC->_L49 | outC->_L24 | outC->_L43;
  outC->_L9.valid = outC->_L21;
  outC->_L9.messageSource = outC->_L11;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L9.Radio_Common_Header,
    &outC->_L44);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L9.p42,
    &outC->_L61);
  kcg_copy_P45_RadioNetworkRegistration_T_Packet_Types_Pkg(
    &outC->_L9.p45,
    &outC->_L62);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->outRadioManagement,
    &outC->_L9);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getRadioManagement_packagesSupport_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

