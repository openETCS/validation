/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "getParameterPositionReport_packagesSupport_Pkg.h"

void getParameterPositionReport_reset_packagesSupport_Pkg(
  outC_getParameterPositionReport_packagesSupport_Pkg *outC)
{
}

/* packagesSupport_Pkg::getParameterPositionReport */
void getParameterPositionReport_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getParameterPositionReport::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_getParameterPositionReport_packagesSupport_Pkg *outC)
{
  NID_PACKET noname;
  P58_PositionReportParameters_T_Packet_Types_Pkg _1_noname;
  
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L56,
    (P58_PositionReportParameters_T_Packet_Types_Pkg *)
      &cEmptyP58_packagesSupport_Pkg);
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &_1_noname,
    &outC->_L56);
  outC->_L57 = cp058_Position_Report_Parameters_Id_Pkg;
  noname = outC->_L57;
  outC->_L63 = kcg_false;
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, inMessage);
  kcg_copy_BG_Header_T_BG_Types_Pkg(&outC->_L60, &outC->_L1.BG_Common_Header);
  outC->_L62 = outC->_L60.bgPosition.odo.o_nominal;
  outC->_L61 = outC->_L60.nid_bg;
  outC->P58_valid = outC->_L63;
  outC->_L59 = outC->P58_valid;
  outC->_L49 = outC->_L1.valid;
  outC->_L51 = outC->P58_valid;
  outC->_L50 = outC->_L49 & outC->_L51;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L53,
    (P58_PositionReportParameters_T_Packet_Types_Pkg *)
      &cEmptyP58_packagesSupport_Pkg);
  if (outC->_L50) {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L52,
      &outC->_L53);
  }
  else {
    kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
      &outC->_L52,
      &outC->_L53);
  }
  outC->_L58.present = outC->_L59;
  outC->_L58.nidBG = outC->_L61;
  outC->_L58.bgLocation = outC->_L62;
  kcg_copy_P58_PositionReportParameters_T_Packet_Types_Pkg(
    &outC->_L58.packet58,
    &outC->_L52);
  kcg_copy_PositionReportParameter_T_Common_Types_Pkg(
    &outC->outPositionReportParam,
    &outC->_L58);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** getParameterPositionReport_packagesSupport_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

