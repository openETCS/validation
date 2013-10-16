/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _M04_A03_MANAGEMENT_TEMPORISATION_H_
#define _M04_A03_MANAGEMENT_TEMPORISATION_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* M04_A03_MANAGEMENT_TEMPORISATION::T_TEMPO_OUT */ T_TEMPO_OUT;
  kcg_bool /* M04_A03_MANAGEMENT_TEMPORISATION::Q_TEMPO_IN_PROGRESS */ Q_TEMPO_IN_PROGRESS;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_M04_A03_MANAGEMENT_TEMPORISATION;

/* ===========  node initialization and cycle functions  =========== */
/* M04_A03_MANAGEMENT_TEMPORISATION */
extern void M04_A03_MANAGEMENT_TEMPORISATION(
  /* M04_A03_MANAGEMENT_TEMPORISATION::T_TEMPO_IN */kcg_int T_TEMPO_IN,
  /* M04_A03_MANAGEMENT_TEMPORISATION::Q_START_CONDITION */kcg_bool Q_START_CONDITION,
  /* M04_A03_MANAGEMENT_TEMPORISATION::Q_STOP_CONDITION */kcg_bool Q_STOP_CONDITION,
  /* M04_A03_MANAGEMENT_TEMPORISATION::T_DELAY_VALUE */kcg_int T_DELAY_VALUE,
  outC_M04_A03_MANAGEMENT_TEMPORISATION *outC);

extern void M04_A03_MANAGEMENT_TEMPORISATION_reset(
  outC_M04_A03_MANAGEMENT_TEMPORISATION *outC);

#endif /* _M04_A03_MANAGEMENT_TEMPORISATION_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A03_MANAGEMENT_TEMPORISATION.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

