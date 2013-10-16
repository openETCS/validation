/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _M04_A00_DETERMINE_MODE_AND_LEVEL_H_
#define _M04_A00_DETERMINE_MODE_AND_LEVEL_H_

#include "kcg_types.h"
#include "M04_A01_DETERMINE_TRANSITIONS_CONDITIONS.h"
#include "M04_A02_DETERMINE_MODE.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  enum_level_etcs /* M04_A00_DETERMINE_MODE_AND_LEVEL::M_LEVEL_ETCS */ M_LEVEL_ETCS;
  kcg_bool /* M04_A00_DETERMINE_MODE_AND_LEVEL::Q_ACK_REQUEST_OS_MODE */ Q_ACK_REQUEST_OS_MODE;
  kcg_bool /* M04_A00_DETERMINE_MODE_AND_LEVEL::Q_SERVICE_BRAKE_COMMAND */ Q_SERVICE_BRAKE_COMMAND;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  enum_evc_mode /* M04_A00_DETERMINE_MODE_AND_LEVEL::M_EVC_MODE_LOC */ M_EVC_MODE_LOC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_M04_A01_DETERMINE_TRANSITIONS_CONDITIONS /* 1 */ _1_Context_1;
  outC_M04_A02_DETERMINE_MODE /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_M04_A00_DETERMINE_MODE_AND_LEVEL;

/* ===========  node initialization and cycle functions  =========== */
/* M04_A00_DETERMINE_MODE_AND_LEVEL */
extern void M04_A00_DETERMINE_MODE_AND_LEVEL(
  /* M04_A00_DETERMINE_MODE_AND_LEVEL::M_TRAIN_INFO */s_train_information *M_TRAIN_INFO,
  /* M04_A00_DETERMINE_MODE_AND_LEVEL::Q_DRIVER_ACQ_OS_MODE */kcg_bool Q_DRIVER_ACQ_OS_MODE,
  /* M04_A00_DETERMINE_MODE_AND_LEVEL::M_OS_AREA */s_os_area *M_OS_AREA,
  outC_M04_A00_DETERMINE_MODE_AND_LEVEL *outC);

extern void M04_A00_DETERMINE_MODE_AND_LEVEL_reset(
  outC_M04_A00_DETERMINE_MODE_AND_LEVEL *outC);

#endif /* _M04_A00_DETERMINE_MODE_AND_LEVEL_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A00_DETERMINE_MODE_AND_LEVEL.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

