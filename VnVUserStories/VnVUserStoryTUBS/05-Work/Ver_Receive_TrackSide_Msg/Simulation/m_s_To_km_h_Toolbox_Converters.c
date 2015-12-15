/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

#ifndef KCG_USER_DEFINED_INIT
void m_s_To_km_h_init_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
  outC->_L3 = 0.0;
  outC->_L2 = 0.0;
  outC->_L1 = 0.0;
  outC->km_h = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void m_s_To_km_h_reset_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Toolbox::Converters::m_s_To_km_h */
void m_s_To_km_h_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_km_h::m_s */ kcg_real m_s,
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
  outC->_L1 = m_s;
  outC->_L3 = 3.6;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->km_h = outC->_L2;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** m_s_To_km_h_Toolbox_Converters.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

