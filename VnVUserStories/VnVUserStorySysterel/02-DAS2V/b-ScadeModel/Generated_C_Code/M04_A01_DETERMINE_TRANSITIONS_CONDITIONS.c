/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M04_A01_DETERMINE_TRANSITIONS_CONDITIONS.h"

void M04_A01_DETERMINE_TRANSITIONS_CONDITIONS_reset(
  outC_M04_A01_DETERMINE_TRANSITIONS_CONDITIONS *outC)
{
  outC->init = kcg_true;
  /* 1 */ M04_A03_MANAGEMENT_TEMPORISATION_reset(&outC->Context_1);
}

/** "Graphical_2" {Text = "****** Manage conditions *********************************************************************************************************************************************"} */
/* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS */
void M04_A01_DETERMINE_TRANSITIONS_CONDITIONS(
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_TRAIN_INFO */s_train_information *M_TRAIN_INFO,
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_OS_AREA */s_os_area *M_OS_AREA,
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_DRIVER_ACK_OS_MODE */kcg_bool Q_DRIVER_ACK_OS_MODE,
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::M_EVC_MODE_PREV */enum_evc_mode M_EVC_MODE_PREV,
  outC_M04_A01_DETERMINE_TRANSITIONS_CONDITIONS *outC)
{
  enum_mamode tmp2;
  kcg_bool tmp1;
  kcg_int tmp;
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_TRAIN_INSIDE_OS_AREA_LOC */ kcg_bool Q_TRAIN_INSIDE_OS_AREA_LOC;
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC */ kcg_bool Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC;
  /* M04_A01_DETERMINE_TRANSITIONS_CONDITIONS::Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC */ kcg_bool Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC;
  
  if (outC->init) {
    Q_TRAIN_INSIDE_OS_AREA_LOC = kcg_false;
    tmp2 = NO_PROFILE;
  }
  else {
    tmp2 = outC->rem_M_MAMODE_LOC;
    Q_TRAIN_INSIDE_OS_AREA_LOC = outC->rem_Q_MODE_PROFILE_OS_IN_PROGRESS_LOC;
  }
  outC->rem_Q_MODE_PROFILE_OS_IN_PROGRESS_LOC = (((*M_OS_AREA).M_MAMODE ==
        PROFILE_OS) & ((*M_OS_AREA).M_MAMODE != tmp2)) |
    (Q_TRAIN_INSIDE_OS_AREA_LOC & !Q_DRIVER_ACK_OS_MODE);
  Q_TRAIN_INSIDE_OS_AREA_LOC =
    (*M_TRAIN_INFO).M_TRAIN_POSITIONS.D_POSOFF_MAX_SAFE_FRONT >=
    (*M_OS_AREA).D_START_OS_AREA;
  Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC =
    outC->rem_Q_MODE_PROFILE_OS_IN_PROGRESS_LOC & Q_TRAIN_INSIDE_OS_AREA_LOC;
  Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC =
    outC->rem_Q_MODE_PROFILE_OS_IN_PROGRESS_LOC & !Q_TRAIN_INSIDE_OS_AREA_LOC &
    (((*M_TRAIN_INFO).M_TRAIN_POSITIONS.D_POSOFF_MAX_SAFE_FRONT >=
        (*M_OS_AREA).D_START_OS_AREA - (*M_OS_AREA).L_ACK_OS_AREA) &
      ((*M_TRAIN_INFO).V_TRAIN_SPEED < (*M_OS_AREA).V_OS_AREA));
  if (outC->init) {
    Q_TRAIN_INSIDE_OS_AREA_LOC = kcg_false;
  }
  else {
    Q_TRAIN_INSIDE_OS_AREA_LOC = outC->Q_TEMPO_DELAY_DRIVER_ACK_IN_PROGRESS_LOC;
  }
  tmp1 = Q_TRAIN_INSIDE_OS_AREA_LOC & Q_DRIVER_ACK_OS_MODE;
  Q_TRAIN_INSIDE_OS_AREA_LOC = Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC &
    tmp1;
  outC->Q_SR_TO_OS = Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC |
    Q_TRAIN_INSIDE_OS_AREA_LOC;
  outC->Q_LS_TO_OS = outC->Q_SR_TO_OS;
  outC->Q_SN_TO_OS = outC->Q_LS_TO_OS;
  outC->Q_UN_TO_OS = outC->Q_LS_TO_OS;
  outC->Q_PT_TO_OS = (Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC & tmp1) |
    Q_TRAIN_INSIDE_OS_AREA_LOC;
  outC->Q_SB_TO_OS = outC->Q_PT_TO_OS;
  outC->Q_FS_TO_OS = outC->Q_LS_TO_OS;
  if (outC->init) {
    Q_TRAIN_INSIDE_OS_AREA_LOC = kcg_true;
    tmp1 = kcg_true;
    outC->init = kcg_false;
    tmp = 0;
  }
  else {
    tmp1 = !outC->rem_Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC;
    Q_TRAIN_INSIDE_OS_AREA_LOC =
      !outC->rem_Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC;
    tmp = outC->T_TEMPO_DELAY_DRIVER_ACK_LOC;
  }
  outC->Q_ACK_REQUEST_OS_MODE = ((M_EVC_MODE_PREV != OS) & (tmp1 &
        Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC)) |
    (Q_TRAIN_INSIDE_OS_AREA_LOC & Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC);
  /* 1 */
  M04_A03_MANAGEMENT_TEMPORISATION(
    tmp,
    outC->Q_ACK_REQUEST_OS_MODE,
    Q_DRIVER_ACK_OS_MODE,
    K_DELAY_DRIVER_ACK,
    &outC->Context_1);
  outC->T_TEMPO_DELAY_DRIVER_ACK_LOC = outC->Context_1.T_TEMPO_OUT;
  outC->Q_TEMPO_DELAY_DRIVER_ACK_IN_PROGRESS_LOC =
    outC->Context_1.Q_TEMPO_IN_PROGRESS;
  outC->Q_SERVICE_BRAKE_COMMAND =
    outC->Q_TEMPO_DELAY_DRIVER_ACK_IN_PROGRESS_LOC &
    (outC->T_TEMPO_DELAY_DRIVER_ACK_LOC >= K_DELAY_DRIVER_ACK);
  outC->rem_M_MAMODE_LOC = (*M_OS_AREA).M_MAMODE;
  outC->rem_Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC =
    Q_SEND_ACK_REQUEST_FOR_FUTHER_LOCATION_LOC;
  outC->rem_Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC =
    Q_SEND_ACK_REQUEST_FOR_CURRENT_LOCATION_LOC;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A01_DETERMINE_TRANSITIONS_CONDITIONS.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

