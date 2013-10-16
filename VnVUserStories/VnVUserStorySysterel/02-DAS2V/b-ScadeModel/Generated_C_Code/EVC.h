/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _EVC_H_
#define _EVC_H_

#include "kcg_types.h"
#include "M01_A00_EXTRACT_DATAS_IN.h"
#include "M02_A00_DATA_CONSISTENCY.h"
#include "M05_A00_BUILD_DATAS_OUT.h"
#include "M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION.h"
#include "M04_A00_DETERMINE_MODE_AND_LEVEL.h"

/* ========================  input structure  ====================== */
typedef struct {
  s_datas_in_odo /* EVC::M_DATAS_IN_ODO */ M_DATAS_IN_ODO;
  s_datas_in_radio /* EVC::M_DATAS_IN_RADIO */ M_DATAS_IN_RADIO;
  s_datas_in_btm /* EVC::M_DATAS_IN_BTM */ M_DATAS_IN_BTM;
  s_datas_in_dmi /* EVC::M_DATAS_IN_DMI */ M_DATAS_IN_DMI;
  s_parameters /* EVC::M_PARAMETERS */ M_PARAMETERS;
} inC_EVC;

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  s_datas_out_dmi /* EVC::M_DATAS_OUT_DMI */ M_DATAS_OUT_DMI;
  s_datas_out_biu /* EVC::M_DATAS_OUT_BIU */ M_DATAS_OUT_BIU;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  enum_level_etcs /* EVC::M_LEVEL_ETCS_LOC */ M_LEVEL_ETCS_LOC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION /* 1 */ _1_Context_1;
  outC_M04_A00_DETERMINE_MODE_AND_LEVEL /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_EVC;

/* ===========  node initialization and cycle functions  =========== */
/* EVC */
extern void EVC(inC_EVC *inC, outC_EVC *outC);

extern void EVC_reset(outC_EVC *outC);

#endif /* _EVC_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

