/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M05_A00_BUILD_DATAS_OUT.h"

/* M05_A00_BUILD_DATAS_OUT */
void M05_A00_BUILD_DATAS_OUT(
  /* M05_A00_BUILD_DATAS_OUT::Q_ACK_REQUEST_OS_MODE */kcg_bool Q_ACK_REQUEST_OS_MODE,
  /* M05_A00_BUILD_DATAS_OUT::Q_SERVICE_BRAKE_COMMAND */kcg_bool Q_SERVICE_BRAKE_COMMAND,
  /* M05_A00_BUILD_DATAS_OUT::M_DATAS_OUT_DMI */s_datas_out_dmi *M_DATAS_OUT_DMI,
  /* M05_A00_BUILD_DATAS_OUT::M_DATAS_OUT_BIU */s_datas_out_biu *M_DATAS_OUT_BIU)
{
  (*M_DATAS_OUT_BIU).Q_SERVICE_BRAKE_COMMAND = Q_SERVICE_BRAKE_COMMAND;
  (*M_DATAS_OUT_DMI).Q_ACK_REQUEST = Q_ACK_REQUEST_OS_MODE;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M05_A00_BUILD_DATAS_OUT.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

