/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */
#ifndef _Listen_on_BTM_CheckBGInputChannel_Pkg_H_
#define _Listen_on_BTM_CheckBGInputChannel_Pkg_H_

#include "kcg_types.h"
#include "CAST_NID_BG_to_int_TM_conversions.h"
#include "CAST_N_TOTAL_to_int_TM_conversions.h"
#include "CAST_N_PIG_to_int_TM_conversions.h"
#include "InitConsBG_Subfunctions_CheckBGInput_Pkg.h"
#include "Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg.h"
#include "Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
#include "Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg.h"
#include "InitInconBG_Subfunctions_CheckBGInput_Pkg.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ out_Track_BGs;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ count_BTM_BGs;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ out_BG_complete;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ out_BG;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init13;
  kcg_bool init12;
  kcg_bool init11;
  kcg_bool init10;
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_reset_nxt_SM1_NominalDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_reset_act_SM1_NominalDir;
  SSM_ST_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_state_nxt_SM1_NominalDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_reset_nxt_SM1_ReverseDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_reset_act_SM1_ReverseDir;
  SSM_ST_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_state_nxt_SM1_ReverseDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_reset_nxt_SM1_InconsistentDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_reset_act_SM1_InconsistentDir;
  SSM_ST_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_state_nxt_SM1_InconsistentDir;
  _3_SSM_ST_SM1 /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_state_nxt;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_reset_act;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_reset_nxt;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ current_BG;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ Expected_Balise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ BG;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::BTM_valid */ BTM_valid;
  /* ---------------------  sub nodes' contexts  --------------------- */
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 9 */ _9_Context_9;
  outC_InitInconBG_Subfunctions_CheckBGInput_Pkg /* 1 */ _8_Context_1;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 9 */ Context_9;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 4 */ _7_Context_4;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 8 */ Context_8;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 6 */ Context_6;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 5 */ _6_Context_5;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 2 */ Context_2;
  outC_InitConsBG_Subfunctions_CheckBGInput_Pkg /* 4 */ Context_4;
  outC_Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _5_Context_1;
  outC_InitConsBG_Subfunctions_CheckBGInput_Pkg /* InitConsBG */ Context_InitConsBG;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 1 */ _4_Context_1;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 5 */ Context_5;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 15 */ Context_15;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 14 */ Context_14;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 10 */ Context_10;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 20 */ Context_20;
  outC_Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg /* 16 */ Context_16;
  outC_CAST_N_TOTAL_to_int_TM_conversions /* 1 */ _3_Context_1;
  outC_CAST_NID_BG_to_int_TM_conversions /* 1 */ _2_Context_1;
  outC_CAST_N_PIG_to_int_TM_conversions /* 1 */ _1_Context_1;
  outC_Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg /* 1 */ Context_1;
  /* ------------------ clocks of observable data -------------------- */
  SSM_ST_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_clock_SM1_NominalDir;
  SSM_ST_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_clock_SM1_ReverseDir;
  SSM_ST_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_clock_SM1_InconsistentDir;
  _3_SSM_ST_SM1 /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_state_act;
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L43 */ _L43_SM1_NominalDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L42 */ _L42_SM1_NominalDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L40 */ _L40_SM1_NominalDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L39 */ _L39_SM1_NominalDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L37 */ _L37_SM1_NominalDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L36 */ _L36_SM1_NominalDir;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L32 */ _L32_SM1_NominalDir;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L31 */ _L31_SM1_NominalDir;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::_L30 */ _L30_SM1_NominalDir;
  SSM_TR_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_fired_SM1_NominalDir;
  SSM_TR_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_fired_strong_SM1_NominalDir;
  SSM_ST_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_state_act_SM1_NominalDir;
  SSM_ST_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SM2_state_sel_SM1_NominalDir;
  SSM_ST_SM2_SM1_NominalDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ _16_SM2_clock_SM1_NominalDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ NominalDir_weakb_clock_SM1;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L2 */ _L2_SM1_NominalDir_SM2_LastBaliseinBG;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L5 */ _L5_SM1_NominalDir_SM2_LastBaliseinBG;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L7 */ _L7_SM1_NominalDir_SM2_LastBaliseinBG;
  Completeness_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L8 */ _L8_SM1_NominalDir_SM2_LastBaliseinBG;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L9 */ _L9_SM1_NominalDir_SM2_LastBaliseinBG;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L6 */ _L6_SM1_NominalDir_SM2_LastBaliseinBG;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG::_L3 */ _L3_SM1_NominalDir_SM2_LastBaliseinBG;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise::_L6 */ _L6_SM1_NominalDir_SM2_SevensBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise::_L12 */ _L12_SM1_NominalDir_SM2_SevensBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise::_L11 */ _L11_SM1_NominalDir_SM2_SevensBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise::_L15 */ _L15_SM1_NominalDir_SM2_SevensBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise::_L13 */ _L13_SM1_NominalDir_SM2_SevensBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise::_L10 */ _L10_SM1_NominalDir_SM2_SevensBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise::_L2 */ _L2_SM1_NominalDir_SM2_SixthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise::_L5 */ _L5_SM1_NominalDir_SM2_SixthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise::_L3 */ _L3_SM1_NominalDir_SM2_SixthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise::_L13 */ _L13_SM1_NominalDir_SM2_SixthBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise::_L12 */ _L12_SM1_NominalDir_SM2_SixthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise::_L4 */ _L4_SM1_NominalDir_SM2_SixthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise::_L7 */ _L7_SM1_NominalDir_SM2_FifthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise::_L5 */ _L5_SM1_NominalDir_SM2_FifthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise::_L8 */ _L8_SM1_NominalDir_SM2_FifthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise::_L10 */ _L10_SM1_NominalDir_SM2_FifthBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise::_L9 */ _L9_SM1_NominalDir_SM2_FifthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise::_L6 */ _L6_SM1_NominalDir_SM2_FifthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise::_L5 */ _L5_SM1_NominalDir_SM2_FourthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise::_L4 */ _L4_SM1_NominalDir_SM2_FourthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise::_L2 */ _L2_SM1_NominalDir_SM2_FourthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise::_L7 */ _L7_SM1_NominalDir_SM2_FourthBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise::_L6 */ _L6_SM1_NominalDir_SM2_FourthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise::_L3 */ _L3_SM1_NominalDir_SM2_FourthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise::_L5 */ _L5_SM1_NominalDir_SM2_ThirdBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise::_L8 */ _L8_SM1_NominalDir_SM2_ThirdBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise::_L9 */ _L9_SM1_NominalDir_SM2_ThirdBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise::_L12 */ _L12_SM1_NominalDir_SM2_ThirdBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise::_L10 */ _L10_SM1_NominalDir_SM2_ThirdBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise::_L6 */ _L6_SM1_NominalDir_SM2_ThirdBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait::_L1 */ _L1_SM1_NominalDir_SM2_Wait;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait::_L4 */ _L4_SM1_NominalDir_SM2_Wait;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise::_L2 */ _L2_SM1_NominalDir_SM2_SecondBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise::_L4 */ _L4_SM1_NominalDir_SM2_SecondBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise::_L5 */ _L5_SM1_NominalDir_SM2_SecondBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise::_L7 */ _L7_SM1_NominalDir_SM2_SecondBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise::_L6 */ _L6_SM1_NominalDir_SM2_SecondBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise::_L1 */ _L1_SM1_NominalDir_SM2_SecondBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise::_L20 */ _L20_SM1_NominalDir_SM2_FirstBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise::_L22 */ _L22_SM1_NominalDir_SM2_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise::_L11 */ _L11_SM1_NominalDir_SM2_FirstBalise;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L17 */ _L17_SM1_ReverseDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L9 */ _L9_SM1_ReverseDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L10 */ _L10_SM1_ReverseDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L11 */ _L11_SM1_ReverseDir;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L12 */ _L12_SM1_ReverseDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L13 */ _L13_SM1_ReverseDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L14 */ _L14_SM1_ReverseDir;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L15 */ _L15_SM1_ReverseDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::_L16 */ _L16_SM1_ReverseDir;
  SSM_TR_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_fired_SM1_ReverseDir;
  SSM_TR_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_fired_strong_SM1_ReverseDir;
  SSM_ST_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_state_act_SM1_ReverseDir;
  SSM_ST_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SM3_state_sel_SM1_ReverseDir;
  SSM_ST_SM3_SM1_ReverseDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ _15_SM3_clock_SM1_ReverseDir;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir */ ReverseDir_weakb_clock_SM1;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L7 */ _L7_SM1_ReverseDir_SM3_FirstBalise;
  Completeness_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L6 */ _L6_SM1_ReverseDir_SM3_FirstBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L3 */ _L3_SM1_ReverseDir_SM3_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L2 */ _L2_SM1_ReverseDir_SM3_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L1 */ _L1_SM1_ReverseDir_SM3_FirstBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L9 */ _L9_SM1_ReverseDir_SM3_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FirstBalise::_L8 */ _L8_SM1_ReverseDir_SM3_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise::_L9 */ _L9_SM1_ReverseDir_SM3_SeventhBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise::_L10 */ _L10_SM1_ReverseDir_SM3_SeventhBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise::_L8 */ _L8_SM1_ReverseDir_SM3_SeventhBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise::_L7 */ _L7_SM1_ReverseDir_SM3_SeventhBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise::_L6 */ _L6_SM1_ReverseDir_SM3_SeventhBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise::_L11 */ _L11_SM1_ReverseDir_SM3_SeventhBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise::_L4 */ _L4_SM1_ReverseDir_SM3_SixthBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise::_L5 */ _L5_SM1_ReverseDir_SM3_SixthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise::_L3 */ _L3_SM1_ReverseDir_SM3_SixthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise::_L2 */ _L2_SM1_ReverseDir_SM3_SixthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise::_L1 */ _L1_SM1_ReverseDir_SM3_SixthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise::_L6 */ _L6_SM1_ReverseDir_SM3_SixthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait::_L2 */ _L2_SM1_ReverseDir_SM3_Wait;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait::_L1 */ _L1_SM1_ReverseDir_SM3_Wait;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise::_L4 */ _L4_SM1_ReverseDir_SM3_FifthBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise::_L5 */ _L5_SM1_ReverseDir_SM3_FifthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise::_L3 */ _L3_SM1_ReverseDir_SM3_FifthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise::_L2 */ _L2_SM1_ReverseDir_SM3_FifthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise::_L1 */ _L1_SM1_ReverseDir_SM3_FifthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise::_L6 */ _L6_SM1_ReverseDir_SM3_FifthBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise::_L4 */ _L4_SM1_ReverseDir_SM3_FourthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise::_L2 */ _L2_SM1_ReverseDir_SM3_FourthBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise::_L3 */ _L3_SM1_ReverseDir_SM3_FourthBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise::_L1 */ _L1_SM1_ReverseDir_SM3_FourthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise::_L5 */ _L5_SM1_ReverseDir_SM3_FourthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise::_L6 */ _L6_SM1_ReverseDir_SM3_FourthBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise::_L5 */ _L5_SM1_ReverseDir_SM3_ThirdBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise::_L3 */ _L3_SM1_ReverseDir_SM3_ThirdBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise::_L4 */ _L4_SM1_ReverseDir_SM3_ThirdBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise::_L2 */ _L2_SM1_ReverseDir_SM3_ThirdBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise::_L1 */ _L1_SM1_ReverseDir_SM3_ThirdBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise::_L6 */ _L6_SM1_ReverseDir_SM3_ThirdBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise::_L4 */ _L4_SM1_ReverseDir_SM3_SecondBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise::_L3 */ _L3_SM1_ReverseDir_SM3_SecondBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise::_L1 */ _L1_SM1_ReverseDir_SM3_SecondBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise::_L7 */ _L7_SM1_ReverseDir_SM3_SecondBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise::_L8 */ _L8_SM1_ReverseDir_SM3_SecondBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise::_L9 */ _L9_SM1_ReverseDir_SM3_SecondBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise::_L5 */ _L5_SM1_ReverseDir_SM3_LastBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise::_L4 */ _L4_SM1_ReverseDir_SM3_LastBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise::_L7 */ _L7_SM1_ReverseDir_SM3_LastBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise::_L8 */ _L8_SM1_ReverseDir_SM3_LastBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise::_L9 */ _L9_SM1_ReverseDir_SM3_LastBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::No_BG::_L3 */ _L3_SM1_No_BG;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::No_BG::_L1 */ _L1_SM1_No_BG;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L8 */ _L8_SM1_InconsistentDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L9 */ _L9_SM1_InconsistentDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L10 */ _L10_SM1_InconsistentDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L11 */ _L11_SM1_InconsistentDir;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L5 */ _L5_SM1_InconsistentDir;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L6 */ _L6_SM1_InconsistentDir;
  ReceivedBGs_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L7 */ _L7_SM1_InconsistentDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L3 */ _L3_SM1_InconsistentDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::_L4 */ _L4_SM1_InconsistentDir;
  SSM_TR_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_fired_SM1_InconsistentDir;
  SSM_TR_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_fired_strong_SM1_InconsistentDir;
  SSM_ST_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_state_act_SM1_InconsistentDir;
  SSM_ST_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SM4_state_sel_SM1_InconsistentDir;
  SSM_ST_SM4_SM1_InconsistentDir /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ _14_SM4_clock_SM1_InconsistentDir;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::Wait::_L2 */ _L2_SM1_InconsistentDir_SM4_Wait;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::Wait::_L1 */ _L1_SM1_InconsistentDir_SM4_Wait;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L1 */ _L1_SM1_InconsistentDir_SM4_FirstBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L2 */ _L2_SM1_InconsistentDir_SM4_FirstBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L6 */ _L6_SM1_InconsistentDir_SM4_FirstBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L7 */ _L7_SM1_InconsistentDir_SM4_FirstBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L8 */ _L8_SM1_InconsistentDir_SM4_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L10 */ _L10_SM1_InconsistentDir_SM4_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L20 */ _L20_SM1_InconsistentDir_SM4_FirstBalise;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L19 */ _L19_SM1_InconsistentDir_SM4_FirstBalise;
  ReceivedBG_CheckBGInputChannel_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L17 */ _L17_SM1_InconsistentDir_SM4_FirstBalise;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L18 */ _L18_SM1_InconsistentDir_SM4_FirstBalise;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise::_L16 */ _L16_SM1_InconsistentDir_SM4_FirstBalise;
  _3_SSM_ST_SM1 /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_state_sel;
  _5_SSM_TR_SM1 /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_fired_strong;
  _5_SSM_TR_SM1 /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SM1_fired;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::API_nid_bg */ API_nid_bg;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::API_Msg_Present */ API_Msg_Present;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::API_n_pig */ API_n_pig;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::API_n_total */ API_n_total;
  API_TrackSideInput_T_API_Msg_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L30 */ _L30;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L32 */ _L32;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L33 */ _L33;
  kcg_int /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L34 */ _L34;
  RadioMetadata_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L29 */ _L29;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L28 */ _L28;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L27 */ _L27;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L26 */ _L26;
  LocWithInAcc_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L25 */ _L25;
  odoMotionDirection_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L24 */ _L24;
  odoMotionState_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L23 */ _L23;
  A_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L22 */ _L22;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L21 */ _L21;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L20 */ _L20;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L19 */ _L19;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L18 */ _L18;
  NID_BG /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L17 */ _L17;
  NID_C /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L16 */ _L16;
  M_MCOUNT /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L15 */ _L15;
  N_TOTAL /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L14 */ _L14;
  N_PIG /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L13 */ _L13;
  Q_MEDIA /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L12 */ _L12;
  M_VERSION /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L11 */ _L11;
  CompressedPackets_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L10 */ _L10;
  Q_LINK /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L9 */ _L9;
  M_DUP /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L8 */ _L8;
  Q_UPDOWN /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L7 */ _L7;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L6 */ _L6;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L5 */ _L5;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L4 */ _L4;
  MsgSource_T_Common_Types_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L3 */ _L3;
  T_internal_Type_Obu_BasicTypes_Pkg /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L2 */ _L2;
  kcg_bool /* CheckBGInputChannel_Pkg::Listen_on_BTM::_L1 */ _L1;
} outC_Listen_on_BTM_CheckBGInputChannel_Pkg;

/* ===========  node initialization and cycle functions  =========== */
/* CheckBGInputChannel_Pkg::Listen_on_BTM */
extern void Listen_on_BTM_CheckBGInputChannel_Pkg(
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BTM_TrackMsg */API_TrackSideInput_T_API_Msg_Pkg *BTM_TrackMsg,
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg *outC);

extern void Listen_on_BTM_reset_CheckBGInputChannel_Pkg(
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg *outC);

#endif /* _Listen_on_BTM_CheckBGInputChannel_Pkg_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** Listen_on_BTM_CheckBGInputChannel_Pkg.h
** Generation date: 2015-06-12T21:21:29
*************************************************************$ */

