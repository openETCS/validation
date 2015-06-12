/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Read_P042_TM.h"

void Read_P042_reset_TM(outC_Read_P042_TM *outC)
{
  /* 2 */ C_P042_compr_onboard_reset_TM_conversions(&outC->Context_2);
  /* 1 */ RECV_ReadPackets_reset_TM_lib_internal(&outC->Context_1);
}

/* TM::Read_P042 */
void Read_P042_TM(
  /* TM::Read_P042::Message_IN */CompressedPackets_T_Common_Types_Pkg *Message_IN,
  outC_Read_P042_TM *outC)
{
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L6, Message_IN);
  /* 1 */ RECV_ReadPackets_TM_lib_internal(&outC->_L6, 42, &outC->Context_1);
  kcg_copy_array_int_500(&outC->_L5, &outC->Context_1.Data);
  kcg_copy_MetadataElement_T_Common_Types_Pkg(
    &outC->_L30,
    &outC->Context_1.Metadata);
  /* 2 */
  C_P042_compr_onboard_TM_conversions(
    &outC->_L5,
    &outC->_L30,
    &outC->Context_2);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->_L166,
    &outC->Context_2.P131_onboard);
  kcg_copy_P42_SessionManagement_T_Packet_Types_Pkg(
    &outC->P042_OBU_out,
    &outC->_L166);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Read_P042_TM.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

