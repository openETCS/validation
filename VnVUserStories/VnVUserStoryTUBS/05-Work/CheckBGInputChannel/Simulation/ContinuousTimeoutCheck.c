/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "ContinuousTimeoutCheck.h"

void ContinuousTimeoutCheck_reset(outC_ContinuousTimeoutCheck *outC)
{
}

/* ContinuousTimeoutCheck */
void ContinuousTimeoutCheck(
  /* ContinuousTimeoutCheck::systemTime */T_internal_Type_Obu_BasicTypes_Pkg systemTime,
  /* ContinuousTimeoutCheck::tNvContact */T_internal_Type_Obu_BasicTypes_Pkg tNvContact,
  /* ContinuousTimeoutCheck::lastRelevantEventTimestamp */T_internal_Type_Obu_BasicTypes_Pkg lastRelevantEventTimestamp,
  /* ContinuousTimeoutCheck::activateCheck */kcg_bool activateCheck,
  outC_ContinuousTimeoutCheck *outC)
{
  /* ContinuousTimeoutCheck::tNvContactError */ kcg_bool _1_tNvContactError;
  /* ContinuousTimeoutCheck::tNvContactError */ kcg_bool tNvContactError;
  
  outC->IfBlock1_clock = activateCheck;
  if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = systemTime;
    outC->_L5_IfBlock1 = lastRelevantEventTimestamp;
    outC->_L6_IfBlock1 = outC->_L1_IfBlock1 - outC->_L5_IfBlock1;
    outC->_L8_IfBlock1 = tNvContact;
    outC->_L7_IfBlock1 = outC->_L6_IfBlock1 > outC->_L8_IfBlock1;
    _1_tNvContactError = outC->_L7_IfBlock1;
    outC->tNvContactError = _1_tNvContactError;
  }
  else {
    outC->_L11_IfBlock1 = kcg_false;
    tNvContactError = outC->_L11_IfBlock1;
    outC->tNvContactError = tNvContactError;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** ContinuousTimeoutCheck.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

