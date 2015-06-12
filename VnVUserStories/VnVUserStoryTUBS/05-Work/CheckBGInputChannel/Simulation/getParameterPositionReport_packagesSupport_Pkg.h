/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _getParameterPositionReport_packagesSupport_Pkg_H_
#define _getParameterPositionReport_packagesSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  PositionReportParameter_T_Common_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::outPositionReportParam */ outPositionReportParam;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_bool /* packagesSupport_Pkg::getParameterPositionReport::P58_valid */ P58_valid;
  ReceivedMessage_T_Common_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L1 */ _L1;
  kcg_bool /* packagesSupport_Pkg::getParameterPositionReport::_L49 */ _L49;
  kcg_bool /* packagesSupport_Pkg::getParameterPositionReport::_L50 */ _L50;
  kcg_bool /* packagesSupport_Pkg::getParameterPositionReport::_L51 */ _L51;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L52 */ _L52;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L53 */ _L53;
  P58_PositionReportParameters_T_Packet_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L56 */ _L56;
  PositionReportParameter_T_Common_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L58 */ _L58;
  kcg_bool /* packagesSupport_Pkg::getParameterPositionReport::_L59 */ _L59;
  BG_Header_T_BG_Types_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L60 */ _L60;
  NID_BG /* packagesSupport_Pkg::getParameterPositionReport::_L61 */ _L61;
  L_internal_Type_Obu_BasicTypes_Pkg /* packagesSupport_Pkg::getParameterPositionReport::_L62 */ _L62;
  NID_PACKET /* packagesSupport_Pkg::getParameterPositionReport::_L57 */ _L57;
  kcg_bool /* packagesSupport_Pkg::getParameterPositionReport::_L63 */ _L63;
} outC_getParameterPositionReport_packagesSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* packagesSupport_Pkg::getParameterPositionReport */
extern void getParameterPositionReport_packagesSupport_Pkg(
  /* packagesSupport_Pkg::getParameterPositionReport::inMessage */ReceivedMessage_T_Common_Types_Pkg *inMessage,
  outC_getParameterPositionReport_packagesSupport_Pkg *outC);

extern void getParameterPositionReport_reset_packagesSupport_Pkg(
  outC_getParameterPositionReport_packagesSupport_Pkg *outC);

#endif /* _getParameterPositionReport_packagesSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** getParameterPositionReport_packagesSupport_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

