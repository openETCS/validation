/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "checkRadioManagementType_packagesSupport_Pkg.h"

void checkRadioManagementType_reset_packagesSupport_Pkg(
  outC_checkRadioManagementType_packagesSupport_Pkg *outC)
{
}

/* packagesSupport_Pkg::checkRadioManagementType */
void checkRadioManagementType_packagesSupport_Pkg(
  /* packagesSupport_Pkg::checkRadioManagementType::inSource */MsgSource_T_Common_Types_Pkg inSource,
  /* packagesSupport_Pkg::checkRadioManagementType::inMsg */NID_MESSAGE inMsg,
  outC_checkRadioManagementType_packagesSupport_Pkg *outC)
{
  outC->_L2 = inMsg;
  outC->_L18 =
    cm39_Acknowledgement_of_termination_of_a_communication_session_Id_Pkg;
  outC->_L19 = outC->_L2 == outC->_L18;
  outC->_L17 = cm32_RBC_RIU_System_Version_Id_Pkg;
  outC->_L16 = cm38_Initiation_of_a_Communication_Session_Id_Pkg;
  outC->_L1 = inSource;
  outC->_L4 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L3 = outC->_L1 == outC->_L4;
  outC->_L5 = outC->_L2 == outC->_L16;
  outC->_L7 = outC->_L2 == outC->_L17;
  outC->_L11 = outC->_L5 | outC->_L7 | outC->_L19;
  outC->_L12 = outC->_L3 & outC->_L11;
  outC->outValid = outC->_L12;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkRadioManagementType_packagesSupport_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

