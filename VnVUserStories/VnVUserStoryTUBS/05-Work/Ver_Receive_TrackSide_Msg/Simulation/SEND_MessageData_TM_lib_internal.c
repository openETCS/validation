/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_MessageData_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void SEND_MessageData_init_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  kcg_int i8;
  kcg_int i7;
  kcg_int i6;
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  for (i = 0; i < 500; i++) {
    outC->_L415[i] = 0;
  }
  for (i1 = 0; i1 < 500; i1++) {
    outC->_L414[i1] = 0;
  }
  for (i3 = 0; i3 < 500; i3++) {
    for (i2 = 0; i2 < 500; i2++) {
      outC->_L413[i3][i2] = 0;
    }
  }
  outC->_L408 = 0;
  outC->_L407 = 0;
  for (i4 = 0; i4 < 500; i4++) {
    outC->_L406[i4] = 0;
  }
  for (i5 = 0; i5 < 500; i5++) {
    outC->_L404[i5] = 0;
  }
  outC->_L403 = kcg_true;
  outC->_L402 = 0;
  for (i6 = 0; i6 < 500; i6++) {
    outC->_L1[i6] = 0;
  }
  for (i7 = 0; i7 < 500; i7++) {
    outC->DataOut[i7] = 0;
  }
  for (i8 = 0; i8 < 500; i8++) {
    /* 1 */
    SEND_WriteBaliseDataElement_init_TM_lib_internal(&outC->Context_1[i8]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SEND_MessageData_reset_TM_lib_internal(
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 500; i++) {
    /* 1 */
    SEND_WriteBaliseDataElement_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::SEND_MessageData */
void SEND_MessageData_TM_lib_internal(
  /* TM_lib_internal::SEND_MessageData::StartAddress */ kcg_int StartAddress,
  /* TM_lib_internal::SEND_MessageData::EndAddress */ kcg_int EndAddress,
  /* TM_lib_internal::SEND_MessageData::DataIn */ CompressedPacketData_T_Common_Types_Pkg *DataIn,
  /* TM_lib_internal::SEND_MessageData::DataElementIn */ CompressedPacketData_T_Common_Types_Pkg *DataElementIn,
  outC_SEND_MessageData_TM_lib_internal *outC)
{
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  kcg_int noname;
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L1, DataIn);
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(&outC->_L404, DataElementIn);
  /* pow */ for (i3 = 0; i3 < 500; i3++) {
    kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
      &outC->_L413[i3],
      &outC->_L404);
  }
  outC->_L407 = StartAddress;
  /* pow */ for (i2 = 0; i2 < 500; i2++) {
    outC->_L414[i2] = outC->_L407;
  }
  outC->_L408 = EndAddress;
  /* pow */ for (i1 = 0; i1 < 500; i1++) {
    outC->_L415[i1] = outC->_L408;
  }
  outC->_L403 = kcg_true;
  if (outC->_L403) {
    for (i = 0; i < 500; i++) {
      /* 1 */
      SEND_WriteBaliseDataElement_TM_lib_internal(
        i,
        outC->_L1[i],
        &outC->_L413[i],
        outC->_L414[i],
        outC->_L415[i],
        &outC->Context_1[i]);
      outC->_L406[i] = outC->Context_1[i].DataOut;
      outC->_L402 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L402 = 0;
  }
#ifdef KCG_MAPW_CPY
  
  for (i = outC->_L402; i < 500; i++) {
    outC->_L406[i] = 0;
  }
#endif /* KCG_MAPW_CPY */
  
  kcg_copy_CompressedPacketData_T_Common_Types_Pkg(
    &outC->DataOut,
    &outC->_L406);
  noname = outC->_L402;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_MessageData_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

