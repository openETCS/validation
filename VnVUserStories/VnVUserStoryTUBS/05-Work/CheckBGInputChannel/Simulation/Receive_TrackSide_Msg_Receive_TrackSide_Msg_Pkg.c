/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.h"

void Receive_TrackSide_Msg_reset_Receive_TrackSide_Msg_Pkg(
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* 1 */
  Receive_BaliseTelegram_reset_Receive_TrackSide_Msg_Pkg(&outC->_1_Context_1);
  /* 1 */ Receive_RadioMsg_reset_Receive_TrackSide_Msg_Pkg(&outC->Context_1);
}

/* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg */
void Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg(
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::reset */kcg_bool reset,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::API_TrackSide_Msg */API_TrackSideInput_T_API_Msg_Pkg *API_TrackSide_Msg,
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::inActualOdometry */odometry_T_Obu_BasicTypes_Pkg *inActualOdometry,
  outC_Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg *outC)
{
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::outTrackMessage_for_check */ TrackSide_ForCheck_T_Common_Types_Pkg _1_outTrackMessage_for_check;
  /* Receive_TrackSide_Msg_Pkg::Receive_TrackSide_Msg::outTrackMessage_for_check */ TrackSide_ForCheck_T_Common_Types_Pkg outTrackMessage_for_check;
  
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L2, API_TrackSide_Msg);
  outC->_L5 = outC->_L2.valid;
  outC->_L8 = outC->_L2.msg_type;
  outC->_L10 = msrc_Euroradio_Common_Types_Pkg;
  outC->_L9 = outC->_L8 == outC->_L10;
  outC->_L11 = outC->_L2.rtm_msg.present;
  outC->_L1 = reset;
  outC->_L7 = !outC->_L1;
  outC->_L6 = outC->_L5 & outC->_L9 & outC->_L11 & outC->_L7;
  outC->isRadioMsg = outC->_L6;
  outC->IfBlock1_clock = outC->isRadioMsg;
  if (outC->IfBlock1_clock) {
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L1_IfBlock1,
      API_TrackSide_Msg);
    /* 1 */
    Receive_RadioMsg_Receive_TrackSide_Msg_Pkg(
      &outC->_L1_IfBlock1,
      &outC->Context_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L2_IfBlock1,
      &outC->Context_1.outTrackMessage_for_check);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &_1_outTrackMessage_for_check,
      &outC->_L2_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &_1_outTrackMessage_for_check);
  }
  else {
    outC->_L3_IfBlock1 = reset;
    kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
      &outC->_L12_IfBlock1,
      inActualOdometry);
    kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
      &outC->_L4_IfBlock1,
      API_TrackSide_Msg);
    /* 1 */
    Receive_BaliseTelegram_Receive_TrackSide_Msg_Pkg(
      outC->_L3_IfBlock1,
      &outC->_L12_IfBlock1,
      &outC->_L4_IfBlock1,
      &outC->_1_Context_1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->_L22_IfBlock1,
      &outC->_1_Context_1.outTrackMessage_for_check);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outTrackMessage_for_check,
      &outC->_L22_IfBlock1);
    kcg_copy_TrackSide_ForCheck_T_Common_Types_Pkg(
      &outC->outTrackMessage_for_check,
      &outTrackMessage_for_check);
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Receive_TrackSide_Msg_Receive_TrackSide_Msg_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

