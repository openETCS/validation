/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M04_A02_DETERMINE_MODE.h"

void M04_A02_DETERMINE_MODE_reset(outC_M04_A02_DETERMINE_MODE *outC)
{
  outC->init = kcg_true;
}

/* M04_A02_DETERMINE_MODE */
void M04_A02_DETERMINE_MODE(
  /* M04_A02_DETERMINE_MODE::Q_SR_TO_OS */kcg_bool Q_SR_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_LS_TO_OS */kcg_bool Q_LS_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_FS_TO_OS */kcg_bool Q_FS_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_PT_TO_OS */kcg_bool Q_PT_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_SB_TO_OS */kcg_bool Q_SB_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_UN_TO_OS */kcg_bool Q_UN_TO_OS,
  /* M04_A02_DETERMINE_MODE::Q_SN_TO_OS */kcg_bool Q_SN_TO_OS,
  outC_M04_A02_DETERMINE_MODE *outC)
{
  /* M04_A02_DETERMINE_MODE::_L39 */ enum_evc_mode _L39;
  
  if (outC->init) {
    outC->init = kcg_false;
    _L39 = SR;
  }
  else {
    _L39 = outC->M_EVC_MODE;
  }
  switch (_L39) {
    case NP :
      outC->M_EVC_MODE = SB;
      break;
    case SB :
      if (Q_SB_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case PS :
      outC->M_EVC_MODE = SB;
      break;
    case SH :
      outC->M_EVC_MODE = SB;
      break;
    case FS :
      if (Q_FS_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case LS :
      if (Q_LS_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case SR :
      if (Q_SR_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case OS :
      outC->M_EVC_MODE = SB;
      break;
    case SL :
      outC->M_EVC_MODE = SB;
      break;
    case NL :
      outC->M_EVC_MODE = SR;
      break;
    case UN :
      if (Q_UN_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case TR :
      outC->M_EVC_MODE = SR;
      break;
    case PT :
      if (Q_PT_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case SF :
      outC->M_EVC_MODE = SR;
      break;
    case IS :
      outC->M_EVC_MODE = SR;
      break;
    case SN :
      if (Q_SN_TO_OS) {
        outC->M_EVC_MODE = OS;
      }
      else {
        outC->M_EVC_MODE = _L39;
      }
      break;
    case RV :
      outC->M_EVC_MODE = SR;
      break;
    
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M04_A02_DETERMINE_MODE.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

