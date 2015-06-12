/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _checkRadioManagementType_packagesSupport_Pkg_H_
#define _checkRadioManagementType_packagesSupport_Pkg_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::outValid */ outValid;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  MsgSource_T_Common_Types_Pkg /* packagesSupport_Pkg::checkRadioManagementType::_L1 */ _L1;
  NID_MESSAGE /* packagesSupport_Pkg::checkRadioManagementType::_L2 */ _L2;
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::_L3 */ _L3;
  MsgSource_T_Common_Types_Pkg /* packagesSupport_Pkg::checkRadioManagementType::_L4 */ _L4;
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::_L5 */ _L5;
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::_L7 */ _L7;
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::_L11 */ _L11;
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::_L12 */ _L12;
  NID_MESSAGE /* packagesSupport_Pkg::checkRadioManagementType::_L16 */ _L16;
  NID_MESSAGE /* packagesSupport_Pkg::checkRadioManagementType::_L17 */ _L17;
  kcg_bool /* packagesSupport_Pkg::checkRadioManagementType::_L19 */ _L19;
  NID_MESSAGE /* packagesSupport_Pkg::checkRadioManagementType::_L18 */ _L18;
} outC_checkRadioManagementType_packagesSupport_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* packagesSupport_Pkg::checkRadioManagementType */
extern void checkRadioManagementType_packagesSupport_Pkg(
  /* packagesSupport_Pkg::checkRadioManagementType::inSource */MsgSource_T_Common_Types_Pkg inSource,
  /* packagesSupport_Pkg::checkRadioManagementType::inMsg */NID_MESSAGE inMsg,
  outC_checkRadioManagementType_packagesSupport_Pkg *outC);

extern void checkRadioManagementType_reset_packagesSupport_Pkg(
  outC_checkRadioManagementType_packagesSupport_Pkg *outC);

#endif /* _checkRadioManagementType_packagesSupport_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** checkRadioManagementType_packagesSupport_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

