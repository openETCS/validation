/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_DeterminePacketSizeInt_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void T_DeterminePacketSizeInt_init_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
  outC->_L7 = 0;
  outC->_L6 = 0;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->p_size = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_DeterminePacketSizeInt_reset_TM_lib_internal(
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::T_DeterminePacketSizeInt */
void T_DeterminePacketSizeInt_TM_lib_internal(
  /* TM_lib_internal::T_DeterminePacketSizeInt::n_iter */ kcg_int n_iter,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_body */ kcg_int size_body,
  /* TM_lib_internal::T_DeterminePacketSizeInt::size_section */ kcg_int size_section,
  outC_T_DeterminePacketSizeInt_TM_lib_internal *outC)
{
  outC->_L1 = n_iter;
  outC->_L2 = size_body;
  outC->_L3 = size_section;
  outC->_L6 = outC->_L1 * outC->_L3;
  outC->_L7 = outC->_L2 + outC->_L6;
  outC->p_size = outC->_L7;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_DeterminePacketSizeInt_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

