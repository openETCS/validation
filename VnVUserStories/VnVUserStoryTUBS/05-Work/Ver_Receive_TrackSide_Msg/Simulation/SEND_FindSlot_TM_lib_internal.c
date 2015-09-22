/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_FindSlot_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void SEND_FindSlot_init_TM_lib_internal(
  outC_SEND_FindSlot_TM_lib_internal *outC)
{
  outC->_L29 = 0;
  outC->_L28 = 0;
  outC->_L27 = 0;
  outC->_L19 = 0;
  outC->_L17 = kcg_true;
  outC->_L3.nid_packet = 0;
  outC->_L3.q_dir = Q_DIR_Reverse;
  outC->_L3.valid = kcg_true;
  outC->_L3.startAddress = 0;
  outC->_L3.endAddress = 0;
  outC->_L2.nid_packet = 0;
  outC->_L2.q_dir = Q_DIR_Reverse;
  outC->_L2.valid = kcg_true;
  outC->_L2.startAddress = 0;
  outC->_L2.endAddress = 0;
  outC->_L1 = 0;
  outC->Acc = 0;
  outC->Cont = kcg_true;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SEND_FindSlot_reset_TM_lib_internal(
  outC_SEND_FindSlot_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::SEND_FindSlot */
void SEND_FindSlot_TM_lib_internal(
  /* TM_lib_internal::SEND_FindSlot::a */ kcg_int a,
  /* TM_lib_internal::SEND_FindSlot::MessageIn */ MetadataElement_T_Common_Types_Pkg *MessageIn,
  /* TM_lib_internal::SEND_FindSlot::EmptyHeader */ MetadataElement_T_Common_Types_Pkg *EmptyHeader,
  outC_SEND_FindSlot_TM_lib_internal *outC)
{
  outC->_L1 = a;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L2, MessageIn);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L3, EmptyHeader);
  outC->_L29 = outC->_L2.nid_packet;
  outC->_L27 = outC->_L3.nid_packet;
  outC->_L17 = outC->_L29 != outC->_L27;
  outC->Cont = outC->_L17;
  outC->_L28 = outC->_L2.endAddress;
  /* 1 */ if (outC->_L17) {
    outC->_L19 = outC->_L28;
  }
  else {
    outC->_L19 = outC->_L1;
  }
  outC->Acc = outC->_L19;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_FindSlot_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:11
*************************************************************$ */

