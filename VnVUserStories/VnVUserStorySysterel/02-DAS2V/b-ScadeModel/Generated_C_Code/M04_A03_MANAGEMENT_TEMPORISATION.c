/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M04_A03_MANAGEMENT_TEMPORISATION.h"

void M04_A03_MANAGEMENT_TEMPORISATION_reset(
  outC_M04_A03_MANAGEMENT_TEMPORISATION *outC)
{
  outC->init = kcg_true;
}

/* M04_A03_MANAGEMENT_TEMPORISATION */
void M04_A03_MANAGEMENT_TEMPORISATION(
  /* M04_A03_MANAGEMENT_TEMPORISATION::T_TEMPO_IN */kcg_int T_TEMPO_IN,
  /* M04_A03_MANAGEMENT_TEMPORISATION::Q_START_CONDITION */kcg_bool Q_START_CONDITION,
  /* M04_A03_MANAGEMENT_TEMPORISATION::Q_STOP_CONDITION */kcg_bool Q_STOP_CONDITION,
  /* M04_A03_MANAGEMENT_TEMPORISATION::T_DELAY_VALUE */kcg_int T_DELAY_VALUE,
  outC_M04_A03_MANAGEMENT_TEMPORISATION *outC)
{
  kcg_bool tmp;
  /* M04_A03_MANAGEMENT_TEMPORISATION::IfBlock1::else::else::then::IfBlock2 */ kcg_bool IfBlock2_clock_IfBlock1;
  
  if (Q_STOP_CONDITION) {
    outC->Q_TEMPO_IN_PROGRESS = kcg_false;
    outC->T_TEMPO_OUT = 0;
  }
  else if (Q_START_CONDITION) {
    outC->Q_TEMPO_IN_PROGRESS = kcg_true;
    outC->T_TEMPO_OUT = 0;
  }
  else {
    if (outC->init) {
      tmp = kcg_false;
    }
    else {
      tmp = outC->Q_TEMPO_IN_PROGRESS;
    }
    if (tmp) {
      IfBlock2_clock_IfBlock1 = T_TEMPO_IN >= T_DELAY_VALUE;
      if (IfBlock2_clock_IfBlock1) {
        outC->T_TEMPO_OUT = T_DELAY_VALUE;
      }
      else {
        outC->T_TEMPO_OUT = T_TEMPO_IN + 1;
      }
      outC->Q_TEMPO_IN_PROGRESS = tmp;
    }
    else {
      outC->T_TEMPO_OUT = 0;
      outC->Q_TEMPO_IN_PROGRESS = tmp;
    }
  }
  outC->init = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A03_MANAGEMENT_TEMPORISATION.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

