/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _getRadioManagement_packagesSupport_Pkg_H_
#define _getRadioManagement_packagesSupport_Pkg_H_

#include "kcg_types.h"
#include "checkRadioManagementType_packagesSupport_Pkg.h"
#include "Read_P042_TM.h"
#include "Read_P045_TM.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  radioManagementMessage_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::outRadioManagement */ outRadioManagement;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_checkRadioManagementType_packagesSupport_Pkg /* 1 */ _2_Context_1;
  outC_Read_P042_TM /* 1 */ _1_Context_1;
  outC_Read_P045_TM /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::P42_valid */ P42_valid;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::P45_valid */ P45_valid;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::radioMessageValid */ radioMessageValid;
  ReceivedMessage_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L1 */ _L1;
  radioManagementMessage_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L9 */ _L9;
  MsgSource_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L11 */ _L11;
  CompressedPackets_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L15 */ _L15;
  MsgSource_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L18 */ _L18;
  MsgSource_T_Common_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L19 */ _L19;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L20 */ _L20;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L21 */ _L21;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L24 */ _L24;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L43 */ _L43;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L44 */ _L44;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L46 */ _L46;
  NID_MESSAGE /* packagesSupport_Pkg::getRadioManagement::_L48 */ _L48;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L49 */ _L49;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L50 */ _L50;
  P42_SessionManagement_T_Packet_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L61 */ _L61;
  P45_RadioNetworkRegistration_T_Packet_Types_Pkg /* packagesSupport_Pkg::getRadioManagement::_L62 */ _L62;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L63 */ _L63;
  kcg_bool /* packagesSupport_Pkg::getRadioManagement::_L66 */ _L66;
} outC_getRadioManagement_packagesSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* packagesSupport_Pkg::getRadioManagement */
extern void getRadioManagement_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getRadioManagement::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_getRadioManagement_packagesSupport_Pkg *outC);

extern void getRadioManagement_reset_packagesSupport_Pkg(
  outC_getRadioManagement_packagesSupport_Pkg *outC);

#endif /* _getRadioManagement_packagesSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** getRadioManagement_packagesSupport_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

