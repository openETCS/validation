/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "InitConsBG_Subfunctions_CheckBGInput_Pkg.h"

void InitConsBG_reset_Subfunctions_CheckBGInput_Pkg(
  outC_InitConsBG_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* 1 */
  Pack_Received_BG_reset_Subfunctions_CheckBGInput_Pkg(&outC->_1_Context_1);
  /* 1 */ Decop_Track_Msg_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_1);
}

/* Subfunctions_CheckBGInput_Pkg::InitConsBG */
void InitConsBG_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::InitConsBG::BTM_Input */API_TrackSideInput_T_API_Msg_Pkg *BTM_Input,
  outC_InitConsBG_Subfunctions_CheckBGInput_Pkg *outC)
{
  M_DUP noname;
  N_PIG _1_noname;
  kcg_bool _2_noname;
  
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L116, BTM_Input);
  outC->_L226 = c_init_DirTrain_CheckBGInputChannel_Pkg;
  outC->_L225 = c_init_DirLrbg_CheckBGInputChannel_Pkg;
  outC->_L224 = c_locationacc_CheckBGInputChannel_Pkg;
  outC->_L223 = kcg_true;
  /* 1 */
  Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg(&outC->_L116, &outC->Context_1);
  outC->_L184 = outC->Context_1.BTM_Msg_valid;
  outC->_L185 = outC->Context_1.MsgReceivedTime;
  outC->_L186 = outC->Context_1.MsgSource;
  outC->_L187 = outC->Context_1.TelegramPresent;
  outC->_L188 = outC->Context_1.CheckResult;
  outC->_L189 = outC->Context_1.badbalise;
  outC->_L190 = outC->Context_1.q_updown;
  outC->_L191 = outC->Context_1.m_dup;
  outC->_L192 = outC->Context_1.q_link;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L200,
    &outC->Context_1.Compressed_Packets);
  outC->_L201 = outC->Context_1.m_Version;
  outC->_L202 = outC->Context_1.q_media;
  outC->_L203 = outC->Context_1.n_pig;
  outC->_L204 = outC->Context_1.n_total;
  outC->_L205 = outC->Context_1.m_mcount;
  outC->_L206 = outC->Context_1.nid_c;
  outC->_L207 = outC->Context_1.nid_bg;
  outC->_L208 = outC->Context_1.odo_valid;
  outC->_L209 = outC->Context_1.odo_time;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L210,
    &outC->Context_1.odo_loc);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L211,
    &outC->Context_1.odo_speed);
  outC->_L212 = outC->Context_1.odo_acc;
  outC->_L213 = outC->Context_1.odo_motion;
  outC->_L214 = outC->Context_1.odo_dir;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L215,
    &outC->Context_1.odo_locinacc);
  outC->_L216 = outC->Context_1.radio_present;
  outC->_L217 = outC->Context_1.radio_consistency;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L218,
    &outC->Context_1.RadioHeader);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L219,
    &outC->Context_1.RadioMetadata);
  _2_noname = outC->_L217;
  _1_noname = outC->_L203;
  noname = outC->_L191;
  outC->_L222 = outC->_L188 & outC->_L189;
  outC->_L5 = kcg_true;
  outC->_L3 = kcg_true;
  outC->_L163 = outC->_L187 | outC->_L216;
  /* 1 */
  Pack_Received_BG_Subfunctions_CheckBGInput_Pkg(
    outC->_L5,
    outC->_L3,
    outC->_L222,
    outC->_L185,
    outC->_L163,
    outC->_L186,
    &outC->_L219,
    &outC->_L218,
    &outC->_L200,
    outC->_L184,
    outC->_L190,
    outC->_L201,
    outC->_L202,
    outC->_L204,
    outC->_L205,
    outC->_L206,
    outC->_L207,
    outC->_L192,
    &outC->_L215,
    outC->_L224,
    outC->_L223,
    outC->_L225,
    outC->_L226,
    outC->_L208,
    outC->_L209,
    &outC->_L210,
    &outC->_L211,
    outC->_L212,
    outC->_L213,
    outC->_L214,
    &outC->_1_Context_1);
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
    &outC->_L220,
    &outC->_1_Context_1.Received_BG);
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->out_BG, &outC->_L220);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** InitConsBG_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

