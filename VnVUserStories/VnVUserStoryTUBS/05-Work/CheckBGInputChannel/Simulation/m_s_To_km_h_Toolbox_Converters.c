/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "m_s_To_km_h_Toolbox_Converters.h"

void m_s_To_km_h_reset_Toolbox_Converters(
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
}

/* Toolbox::Converters::m_s_To_km_h */
void m_s_To_km_h_Toolbox_Converters(
  /* Toolbox::Converters::m_s_To_km_h::m_s */kcg_real m_s,
  outC_m_s_To_km_h_Toolbox_Converters *outC)
{
  outC->_L1 = m_s;
  outC->_L3 = 3.6;
  outC->_L2 = outC->_L1 * outC->_L3;
  outC->km_h = outC->_L2;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** m_s_To_km_h_Toolbox_Converters.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

