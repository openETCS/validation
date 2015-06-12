/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Send_P005_MessageLib.h"

void Send_P005_reset_MessageLib(outC_Send_P005_MessageLib *outC)
{
  /* 1 */ Write_P005_reset_TM_trackside(&outC->Context_1);
}

/* MessageLib::Send_P005 */
void Send_P005_MessageLib(
  /* MessageLib::Send_P005::B_data_in */CompressedPackets_T_Common_Types_Pkg *B_data_in,
  /* MessageLib::Send_P005::P005 */P005_trackside_int_T_TM *P005,
  outC_Send_P005_MessageLib *outC)
{
  CompressedPackets_T_Common_Types_Pkg tmp;
  kcg_bool tmp1;
  kcg_bool noname;
  
  kcg_copy_P005_trackside_int_T_TM(&outC->_L4, P005);
  outC->_L5 = outC->_L4.valid;
  outC->tmp = outC->_L5;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L3, B_data_in);
  if (outC->tmp) {
    /* 1 */ Write_P005_TM_trackside(&outC->_L4, &outC->_L3, &outC->Context_1);
    tmp1 = outC->Context_1.Error;
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(
      &tmp,
      &outC->Context_1.RadioPacketsOut);
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &tmp);
  }
  else {
    kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->_L7, &outC->_L3);
  }
  outC->_L8 = kcg_false;
  if (outC->tmp) {
    outC->_L6 = tmp1;
  }
  else {
    outC->_L6 = outC->_L8;
  }
  noname = outC->_L6;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&outC->B_data_out, &outC->_L7);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Send_P005_MessageLib.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

