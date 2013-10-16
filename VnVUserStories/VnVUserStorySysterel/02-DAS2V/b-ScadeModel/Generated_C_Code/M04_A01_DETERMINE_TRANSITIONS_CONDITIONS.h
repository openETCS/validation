/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _M04_A01_DETERMINE_TRANSITIONS_CONDITIONS_H_
#define _M04_A01_DETERMINE_TRANSITIONS_CONDITIONS_H_

#include "kcg_types.h"
#include "M04_A03_MANAGEMENT_TEMPORISATION.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_ACK_REQUEST_OS_MODE */ Q_ACK_REQUEST_OS_MODE;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SR_TO_OS */ Q_SR_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_LS_TO_OS */ Q_LS_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_FS_TO_OS */ Q_FS_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_PT_TO_OS */ Q_PT_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SB_TO_OS */ Q_SB_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_UN_TO_OS */ Q_UN_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SN_TO_OS */ Q_SN_TO_OS;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SERVICE_BRAKE_COMMAND */ Q_SERVICE_BRAKE_COMMAND;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::T_TEMPO_DELAY_DRIVER_ACK_LOC */ T_TEMPO_DELAY_DRIVER_ACK_LOC;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_TEMPO_DELAY_DRIVER_ACK_IN_PROGRESS_LOC */ Q_TEMPO_DELAY_DRIVER_ACK_IN_PROGRESS_LOC;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC */ rem_Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC */ rem_Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC;
  enum_mamode /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_MAMODE_LOC */ rem_M_MAMODE_LOC;
  kcg_bool /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_MODE_PROFILE_OS_IN_PROGRESS_LOC */ rem_Q_MODE_PROFILE_OS_IN_PROGRESS_LOC;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_M04_A03_MANAGEMENT_TEMPORISATION /* 1 */ Context_1;
  /* ----------------- no clocks of observable data ------------------ */
} outC_M04_A01_DETERMINE_TRANSITIONS_CONDITIONS;

/* ===========  node initialization and cycle functions  =========== */
/** "Graphical_2" {Text = "****** Manage conditions *********************************************************************************************************************************************"} */
/* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS */
extern void M04_A01_DETERMINE_TRANSITIONS_CONDITIONS(
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_TRAIN_INFO */s_train_information *M_TRAIN_INFO,
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_OS_AREA */s_os_area *M_OS_AREA,
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_DRIVER_ACK_OS_MODE */kcg_bool Q_DRIVER_ACK_OS_MODE,
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_EVC_MODE_PREV */enum_evc_mode M_EVC_MODE_PREV,
  outC_M04_A01_DETERMINE_TRANSITIONS_CONDITIONS *outC);

extern void M04_A01_DETERMINE_TRANSITIONS_CONDITIONS_reset(
  outC_M04_A01_DETERMINE_TRANSITIONS_CONDITIONS *outC);

#endif /* _M04_A01_DETERMINE_TRANSITIONS_CONDITIONS_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A01_DETERMINE_TRANSITIONS_CONDITIONS.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

