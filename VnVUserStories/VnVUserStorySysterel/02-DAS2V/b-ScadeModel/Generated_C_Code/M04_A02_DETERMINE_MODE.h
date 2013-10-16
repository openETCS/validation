/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _M04_A02_DETERMINE_MODE_H_
#define _M04_A02_DETERMINE_MODE_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  enum_evc_mode /* M04_A02_DETERMINE_MODE::M_EVC_MODE */ M_EVC_MODE;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_M04_A02_DETERMINE_MODE;

/* ===========  node initialization and cycle functions  =========== */
/* M04_A02_DETERMINE_MODE */
extern void M04_A02_DETERMINE_MODE(
  /* M04_A02_DETERMINE_MODE::Q_SR_TO_OS */kcg_bool Q_SR_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_LS_TO_OS */kcg_bool Q_LS_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_FS_TO_OS */kcg_bool Q_FS_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_PT_TO_OS */kcg_bool Q_PT_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_SB_TO_OS */kcg_bool Q_SB_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_UN_TO_OS */kcg_bool Q_UN_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_SN_TO_OS */kcg_bool Q_SN_TO_OS,
  outC_M04_A02_DETERMINE_MODE *outC);

extern void M04_A02_DETERMINE_MODE_reset(outC_M04_A02_DETERMINE_MODE *outC);

#endif /* _M04_A02_DETERMINE_MODE_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A02_DETERMINE_MODE.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

