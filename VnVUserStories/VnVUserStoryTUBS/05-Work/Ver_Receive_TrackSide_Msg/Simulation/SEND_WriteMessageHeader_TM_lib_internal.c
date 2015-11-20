/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "SEND_WriteMessageHeader_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void SEND_WriteMessageHeader_init_TM_lib_internal(
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC)
{
  kcg_int i5;
  kcg_int i4;
  kcg_int i3;
  kcg_int i2;
  kcg_int i1;
  kcg_int i;
  
  outC->_L3 = 0;
  outC->_L7 = 0;
  outC->_L44.nid_packet = 0;
  outC->_L44.q_dir = Q_DIR_Reverse;
  outC->_L44.valid = kcg_true;
  outC->_L44.startAddress = 0;
  outC->_L44.endAddress = 0;
  outC->_L43.nid_packet = 0;
  outC->_L43.q_dir = Q_DIR_Reverse;
  outC->_L43.valid = kcg_true;
  outC->_L43.startAddress = 0;
  outC->_L43.endAddress = 0;
  outC->_L37 = 0;
  outC->_L36 = 0;
  outC->_L35 = 0;
  outC->_L34 = 0;
  outC->_L33 = 0;
  outC->_L32 = kcg_true;
  outC->_L31 = 0;
  for (i = 0; i < 30; i++) {
    outC->_L24[i].nid_packet = 0;
    outC->_L24[i].q_dir = Q_DIR_Reverse;
    outC->_L24[i].valid = kcg_true;
    outC->_L24[i].startAddress = 0;
    outC->_L24[i].endAddress = 0;
  }
  for (i1 = 0; i1 < 30; i1++) {
    outC->_L23[i1].nid_packet = 0;
    outC->_L23[i1].q_dir = Q_DIR_Reverse;
    outC->_L23[i1].valid = kcg_true;
    outC->_L23[i1].startAddress = 0;
    outC->_L23[i1].endAddress = 0;
  }
  outC->_L22 = 0;
  outC->_L18 = 0;
  outC->_L17 = 0;
  outC->_L16 = 0;
  outC->_L9.nid_packet = 0;
  outC->_L9.q_dir = Q_DIR_Reverse;
  outC->_L9.valid = kcg_true;
  outC->_L9.startAddress = 0;
  outC->_L9.endAddress = 0;
  for (i2 = 0; i2 < 30; i2++) {
    outC->_L8[i2].nid_packet = 0;
    outC->_L8[i2].q_dir = Q_DIR_Reverse;
    outC->_L8[i2].valid = kcg_true;
    outC->_L8[i2].startAddress = 0;
    outC->_L8[i2].endAddress = 0;
  }
  outC->_L5 = 0;
  outC->_L4 = kcg_true;
  for (i3 = 0; i3 < 30; i3++) {
    outC->_L1[i3].nid_packet = 0;
    outC->_L1[i3].q_dir = Q_DIR_Reverse;
    outC->_L1[i3].valid = kcg_true;
    outC->_L1[i3].startAddress = 0;
    outC->_L1[i3].endAddress = 0;
  }
  outC->NewEndAddr = 0;
  outC->NewStartAddr = 0;
  for (i4 = 0; i4 < 30; i4++) {
    outC->HeadersOut[i4].nid_packet = 0;
    outC->HeadersOut[i4].q_dir = Q_DIR_Reverse;
    outC->HeadersOut[i4].valid = kcg_true;
    outC->HeadersOut[i4].startAddress = 0;
    outC->HeadersOut[i4].endAddress = 0;
  }
  for (i5 = 0; i5 < 30; i5++) {
    /* 1 */ SEND_FindSlot_init_TM_lib_internal(&outC->Context_1[i5]);
  }
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void SEND_WriteMessageHeader_reset_TM_lib_internal(
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC)
{
  kcg_int i;
  
  for (i = 0; i < 30; i++) {
    /* 1 */ SEND_FindSlot_reset_TM_lib_internal(&outC->Context_1[i]);
  }
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::SEND_WriteMessageHeader */
void SEND_WriteMessageHeader_TM_lib_internal(
  /* TM_lib_internal::SEND_WriteMessageHeader::HeadersIn */ Metadata_T_Common_Types_Pkg *HeadersIn,
  /* TM_lib_internal::SEND_WriteMessageHeader::NewHeader */ MetadataElement_T_Common_Types_Pkg *NewHeader,
  outC_SEND_WriteMessageHeader_TM_lib_internal *outC)
{
  /* TM_lib_internal::SEND_WriteMessageHeader */ kcg_int acc;
  kcg_int i;
  
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L1, HeadersIn);
  outC->_L4 = kcg_true;
  outC->_L5 = 0;
  kcg_copy_Metadata_T_Common_Types_Pkg(
    &outC->_L8,
    (Metadata_T_Common_Types_Pkg *) &DEFAULT_Headers_TM);
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L24, HeadersIn);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L9, NewHeader);
  outC->_L7 = outC->_L5;
  if (outC->_L4) {
    for (i = 0; i < 30; i++) {
      acc = outC->_L7;
      /* 1 */
      SEND_FindSlot_TM_lib_internal(
        acc,
        &outC->_L1[i],
        &outC->_L8[i],
        &outC->Context_1[i]);
      outC->_L7 = outC->Context_1[i].Acc;
      outC->_L3 = i + 1;
      if (!outC->Context_1[i].Cont) {
        break;
      }
    }
  }
  else {
    outC->_L3 = 0;
  }
  outC->_L33 = 0;
  outC->_L32 = outC->_L7 == outC->_L33;
  outC->_L34 = 1;
  outC->_L35 = outC->_L7 + outC->_L34;
  /* 1 */ if (outC->_L32) {
    outC->_L31 = outC->_L33;
  }
  else {
    outC->_L31 = outC->_L35;
  }
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L43, &outC->_L9);
  if (kcg_true) {
    outC->_L43.startAddress = outC->_L31;
  }
  outC->_L37 = outC->_L9.endAddress;
  outC->_L36 = outC->_L9.startAddress;
  outC->_L18 = outC->_L37 - outC->_L36;
  outC->_L22 = outC->_L31 + outC->_L18;
  kcg_copy_MetadataElement_T_Common_Types_Pkg(&outC->_L44, &outC->_L43);
  if (kcg_true) {
    outC->_L44.endAddress = outC->_L22;
  }
  outC->_L16 = 1;
  outC->_L17 = outC->_L3 - outC->_L16;
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->_L23, &outC->_L24);
  if ((0 <= outC->_L17) & (outC->_L17 < 30)) {
    kcg_copy_MetadataElement_T_Common_Types_Pkg(
      &outC->_L23[outC->_L17],
      &outC->_L44);
  }
  kcg_copy_Metadata_T_Common_Types_Pkg(&outC->HeadersOut, &outC->_L23);
  outC->NewStartAddr = outC->_L31;
  outC->NewEndAddr = outC->_L22;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** SEND_WriteMessageHeader_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

