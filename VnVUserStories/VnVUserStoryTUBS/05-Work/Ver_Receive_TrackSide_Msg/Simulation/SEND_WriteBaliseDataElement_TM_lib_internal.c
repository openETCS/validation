/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteBaliseDataElement_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void SEND_WriteBaliseDataElement_init_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
  kcg_int i;
  
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L14 = 0;
  outC->_L10 = 0;
  outC->_L9 = 0;
  outC->_L8 = kcg_true;
  outC->_L7 = kcg_true;
  outC->_L6 = kcg_true;
  outC->_L5 = 0;
  outC->_L4 = 0;
  for (i = 0; i < 500; i++) {
    outC->_L3[i] = 0;
  }
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->DataOut = 0;
  outC->Cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SEND_WriteBaliseDataElement_reset_TM_lib_internal(
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::SEND_WriteBaliseDataElement */
void SEND_WriteBaliseDataElement_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteBaliseDataElement::Index */ kcg_int Index,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::DataIn */ kcg_int DataIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::ElementIn */ CompressedPacketData_T_Common_Types_Pkg *ElementIn,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_WriteBaliseDataElement::EndAddress */ kcg_int EndAddress,
  outC_SEND_WriteBaliseDataElement_TM_lib_internal *outC)
{
  outC->_L1 = Index;
  outC->_L2 = DataIn;
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L3, ElementIn);
  outC->_L5 = EndAddress;
  outC->_L6 = outC->_L5 >= outC->_L1;
  outC->Cont = outC->_L6;
  outC->_L4 = StartAddress;
  outC->_L7 = outC->_L1 >= outC->_L4;
  outC->_L8 = outC->_L6 & outC->_L7;
  outC->_L10 = Index;
  outC->_L16 = StartAddress;
  outC->_L17 = outC->_L10 - outC->_L16;
  if ((0 <= outC->_L17) & (outC->_L17 < 500)) {
    outC->_L9 = outC->_L3[outC->_L17];
  }
  else {
    outC->_L9 = 0;
  }
  /* 1 */ if (outC->_L8) {
    outC->_L14 = outC->_L9;
  }
  else {
    outC->_L14 = outC->_L2;
  }
  outC->DataOut = outC->_L14;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteBaliseDataElement_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

