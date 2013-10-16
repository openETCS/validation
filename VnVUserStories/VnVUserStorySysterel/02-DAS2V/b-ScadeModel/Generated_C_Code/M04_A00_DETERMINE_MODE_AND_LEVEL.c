/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M04_A00_DETERMINE_MODE_AND_LEVEL.h"

void M04_A00_DETERMINE_MODE_AND_LEVEL_reset(
  outC_M04_A00_DETERMINE_MODE_AND_LEVEL *outC)
{
  outC->init = kcg_true;
  /* 1 */ M04_A02_DETERMINE_MODE_reset(&outC->Context_1);
  /* 1 */ M04_A01_DETERMINE_TRANSITIONS_CONDITIONS_reset(&outC->_1_Context_1);
}

/* M04_A00_DETERMINE_MODE_AND_LEVEL */
void M04_A00_DETERMINE_MODE_AND_LEVEL(
  /* M04_A00_DETERMINE_MODE_AND_LEVEL::M_TRAIN_INFO */s_train_information *M_TRAIN_INFO,
  /* M04_A00_DETERMINE_MODE_AND_LEVEL::Q_DRIVER_ACQ_OS_MODE */kcg_bool Q_DRIVER_ACQ_OS_MODE,
  /* M04_A00_DETERMINE_MODE_AND_LEVEL::M_OS_AREA */s_os_area *M_OS_AREA,
  outC_M04_A00_DETERMINE_MODE_AND_LEVEL *outC)
{
  enum_evc_mode tmp;
  
  outC->M_LEVEL_ETCS = LEVEL_2;
  if (outC->init) {
    outC->init = kcg_false;
    tmp = SR;
  }
  else {
    tmp = outC->M_EVC_MODE_LOC;
  }
  /* 1 */
  M04_A01_DETERMINE_TRANSITIONS_CONDITIONS(
    M_TRAIN_INFO,
    M_OS_AREA,
    Q_DRIVER_ACQ_OS_MODE,
    tmp,
    &outC->_1_Context_1);
  outC->Q_ACK_REQUEST_OS_MODE = outC->_1_Context_1.Q_ACK_REQUEST_OS_MODE;
  outC->Q_SERVICE_BRAKE_COMMAND = outC->_1_Context_1.Q_SERVICE_BRAKE_COMMAND;
  /* 1 */
  M04_A02_DETERMINE_MODE(
    outC->_1_Context_1.Q_SR_TO_OS,
    outC->_1_Context_1.Q_LS_TO_OS,
    outC->_1_Context_1.Q_FS_TO_OS,
    outC->_1_Context_1.Q_PT_TO_OS,
    outC->_1_Context_1.Q_SB_TO_OS,
    outC->_1_Context_1.Q_UN_TO_OS,
    outC->_1_Context_1.Q_SN_TO_OS,
    &outC->Context_1);
  outC->M_EVC_MODE_LOC = outC->Context_1.M_EVC_MODE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A00_DETERMINE_MODE_AND_LEVEL.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

