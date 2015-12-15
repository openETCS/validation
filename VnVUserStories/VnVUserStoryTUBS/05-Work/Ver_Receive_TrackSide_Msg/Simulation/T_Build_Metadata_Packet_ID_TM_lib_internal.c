/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "T_Build_Metadata_Packet_ID_TM_lib_internal.h"

#ifndef KCG_USER_DEFINED_INIT
void T_Build_Metadata_Packet_ID_init_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
  outC->_L15 = 0;
  outC->_L16 = 0;
  outC->_L17 = 0;
  outC->_L22 = 0;
  outC->_L20 = 0;
  outC->_L18 = 0;
  outC->_L14 = 0;
  outC->_L13 = 0;
  outC->_L12 = 0;
  outC->_L11 = 0;
  outC->_L10 = 0;
  outC->_L9 = 0;
  outC->_L8 = 0;
  outC->_L6 = kcg_true;
  outC->_L4 = kcg_true;
  outC->_L3 = 0;
  outC->_L2 = 0;
  outC->_L1 = 0;
  outC->nid_packet_meta = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void T_Build_Metadata_Packet_ID_reset_TM_lib_internal(
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* TM_lib_internal::T_Build_Metadata_Packet_ID */
void T_Build_Metadata_Packet_ID_TM_lib_internal(
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_in */ kcg_int nid_packet_in,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::q_dir */ kcg_int q_dir,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::id */ kcg_int id,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::nid_packet_defined */ NID_PACKET nid_packet_defined,
  /* TM_lib_internal::T_Build_Metadata_Packet_ID::m_version */ kcg_int m_version,
  outC_T_Build_Metadata_Packet_ID_TM_lib_internal *outC)
{
  kcg_bool noname;
  
  outC->_L1 = nid_packet_in;
  outC->_L2 = m_version;
  outC->_L3 = nid_packet_defined;
  outC->_L4 = outC->_L1 == outC->_L3;
  outC->_L10 = DIM_offset_metadata_nid_packet_TM_lib_internal;
  outC->_L9 = outC->_L3 * outC->_L10;
  outC->_L13 = DIM_offset_metadata_m_version_TM_lib_internal;
  outC->_L14 = outC->_L2 * outC->_L13;
  outC->_L15 = q_dir;
  outC->_L16 = DIM_offset_metadata_q_dir_TM_lib_internal;
  outC->_L17 = outC->_L15 * outC->_L16;
  outC->_L18 = id;
  outC->_L20 = DIM_offset_metadata_id_TM_lib_internal;
  outC->_L22 = outC->_L18 * outC->_L20;
  outC->_L11 = outC->_L9 + outC->_L14 + outC->_L17 + outC->_L22;
  outC->_L8 = ERROR_nid_packet_TM;
  /* 1 */ if (outC->_L4) {
    outC->_L12 = outC->_L11;
  }
  else {
    outC->_L12 = outC->_L8;
  }
  outC->nid_packet_meta = outC->_L12;
  outC->_L6 = !outC->_L4;
  noname = outC->_L6;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** T_Build_Metadata_Packet_ID_TM_lib_internal.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

