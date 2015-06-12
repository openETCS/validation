/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg.h"

void Listen_on_BTM_reset_CheckBGInputChannel_Pkg(
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init5 = kcg_true;
  /* InitBG */ InitBG_reset_Subfunctions(&outC->Context_InitBG);
  /* 1 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->_4_Context_1);
  /* 5 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->Context_5);
  /* 15 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->Context_15);
  /* 14 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->Context_14);
  /* 10 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->Context_10);
  /* 9 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->Context_9);
  /* 16 */ Consistency_Check_Track_BG_reset_Subfunctions(&outC->Context_16);
  /* 1 */ CAST_NID_BG_to_int_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_N_TOTAL_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_N_PIG_to_int_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ Decop_Track_Msg_reset_Subfunctions(&outC->Context_1);
}

/* CheckBGInputChannel_Pkg::Listen_on_BTM */
void Listen_on_BTM_CheckBGInputChannel_Pkg(
  inC_Listen_on_BTM_CheckBGInputChannel_Pkg *inC,
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg *outC)
{
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 _20_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _19_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 _18_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG17;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _16_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _15_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _14_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _13_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int _12_count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg _11_out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_prv_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_sel_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG */ kcg_bool br_1_guard_SM1_NominalDir_SM2_LastBaliseinBG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise */ kcg_bool br_1_guard_SM1_NominalDir_SM2_SevensBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise */ kcg_bool br_2_guard_SM1_NominalDir_SM2_SevensBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _87_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _88_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _89_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise */ kcg_bool _147_br_1_guard_SM1_NominalDir_SM2_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise */ kcg_bool _148_br_2_guard_SM1_NominalDir_SM2_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise */ kcg_bool br_3_guard_SM1_NominalDir_SM2_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _90_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _91_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _92_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise */ kcg_bool br_1_guard_SM1_NominalDir_SM2_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise */ kcg_bool br_2_guard_SM1_NominalDir_SM2_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise */ kcg_bool br_3_guard_SM1_NominalDir_SM2_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _93_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _94_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _95_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise */ kcg_bool _149_br_1_guard_SM1_NominalDir_SM2_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise */ kcg_bool _150_br_2_guard_SM1_NominalDir_SM2_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise */ kcg_bool _151_br_3_guard_SM1_NominalDir_SM2_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _96_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _97_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _98_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise */ kcg_bool br_1_guard_SM1_NominalDir_SM2_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise */ kcg_bool br_2_guard_SM1_NominalDir_SM2_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise */ kcg_bool br_3_guard_SM1_NominalDir_SM2_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _99_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _100_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _101_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_1_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_2_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_3_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_4_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_5_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_6_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_7_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_8_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _102_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _103_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _104_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise */ kcg_bool _152_br_1_guard_SM1_NominalDir_SM2_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise */ kcg_bool _153_br_2_guard_SM1_NominalDir_SM2_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise */ kcg_bool _154_br_3_guard_SM1_NominalDir_SM2_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _105_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _106_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _107_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool _155_br_1_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool _156_br_2_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool _157_br_3_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool br_4_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _108_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _109_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _110_SM2_fired_strong_SM1_NominalDir;
  kcg_bool noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _27_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _28_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _29_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _30_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir SM2_fired_SM1_NominalDir;
  kcg_bool _117_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _31_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _32_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _33_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _34_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _35_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _36_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _37_SM2_fired_SM1_NominalDir;
  kcg_bool _118_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _38_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _39_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _40_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _41_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _42_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _43_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _44_SM2_fired_SM1_NominalDir;
  kcg_bool _119_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _45_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _46_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _47_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _48_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _49_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _50_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _51_SM2_fired_SM1_NominalDir;
  kcg_bool _120_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _52_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _53_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _54_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _55_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _56_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _57_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _58_SM2_fired_SM1_NominalDir;
  kcg_bool _121_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _59_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _60_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _61_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _62_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _63_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _64_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _65_SM2_fired_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _66_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _67_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _68_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _69_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _70_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _71_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _72_SM2_fired_SM1_NominalDir;
  kcg_bool _122_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _73_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _74_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _75_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _76_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _77_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _78_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _79_SM2_fired_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _80_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _81_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _82_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _83_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _84_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _85_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _86_SM2_fired_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ kcg_bool br_2_guard_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 _21_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _22_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 _23_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 _24_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _25_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 _26_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 _10_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _9_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 _8_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG7;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _6_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _5_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _4_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _3_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int _2_count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg _1_out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 _116_SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _115_SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 _114_SM1_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ kcg_bool br_1_guard_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 _113_SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _112_SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 _111_SM1_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_TR_SM1 SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ SSM_ST_SM1 SM1_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::No_BG */ kcg_bool br_2_guard_SM1_No_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::No_BG */ kcg_bool br_1_guard_SM1_No_BG;
  T_internal_Type_Obu_BasicTypes_Pkg _123_noname;
  MsgSource_T_Common_Types_Pkg _124_noname;
  kcg_bool _125_noname;
  kcg_bool _126_noname;
  Q_UPDOWN _127_noname;
  M_DUP _128_noname;
  Q_LINK _129_noname;
  M_VERSION _130_noname;
  CompressedPackets_T_Common_Types_Pkg _131_noname;
  Q_MEDIA _132_noname;
  RadioMetadata_T_Common_Types_Pkg _133_noname;
  kcg_bool _134_noname;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg _135_noname;
  kcg_bool _136_noname;
  LocWithInAcc_T_Obu_BasicTypes_Pkg _137_noname;
  odoMotionDirection_T_Obu_BasicTypes_Pkg _138_noname;
  A_internal_Type_Obu_BasicTypes_Pkg _139_noname;
  odoMotionState_T_Obu_BasicTypes_Pkg _140_noname;
  kcg_bool _141_noname;
  T_internal_Type_Obu_BasicTypes_Pkg _142_noname;
  OdometryLocations_T_Obu_BasicTypes_Pkg _143_noname;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg _144_noname;
  M_MCOUNT _145_noname;
  NID_C _146_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BTM_valid */ kcg_bool last_BTM_valid;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int last_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int last_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg last_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg last_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool last_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int last_count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg last_out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool SM1_reset_sel;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool SM1_reset_prv;
  
  if (outC->init5) {
    outC->SM1_state_sel = SSM_st_No_BG_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  if (outC->init5) {
    last_BTM_valid = kcg_false;
  }
  else {
    last_BTM_valid = outC->BTM_valid;
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L30, &inC->BTM_TrackMsg);
  /* 1 */ Decop_Track_Msg_Subfunctions(&outC->_L30, &outC->Context_1);
  outC->_L1 = outC->Context_1.BTM_Msg_valid;
  outC->_L2 = outC->Context_1.MsgReceivedTime;
  outC->_L3 = outC->Context_1.MsgSource;
  outC->_L4 = outC->Context_1.TelegramPresent;
  outC->_L5 = outC->Context_1.CheckResult;
  outC->_L6 = outC->Context_1.badbalise;
  outC->_L7 = outC->Context_1.q_updown;
  outC->_L8 = outC->Context_1.m_dup;
  outC->_L9 = outC->Context_1.q_link;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L10,
    &outC->Context_1.Compressed_Packets);
  outC->_L11 = outC->Context_1.m_Version;
  outC->_L12 = outC->Context_1.q_media;
  outC->_L13 = outC->Context_1.n_pig;
  outC->_L14 = outC->Context_1.n_total;
  outC->_L15 = outC->Context_1.m_mcount;
  outC->_L16 = outC->Context_1.nid_c;
  outC->_L17 = outC->Context_1.nid_bg;
  outC->_L18 = outC->Context_1.odo_valid;
  outC->_L19 = outC->Context_1.odo_time;
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(
    &outC->_L20,
    &outC->Context_1.odo_loc);
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(
    &outC->_L21,
    &outC->Context_1.odo_speed);
  outC->_L22 = outC->Context_1.odo_acc;
  outC->_L23 = outC->Context_1.odo_motion;
  outC->_L24 = outC->Context_1.odo_dir;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(
    &outC->_L25,
    &outC->Context_1.odo_locinacc);
  outC->_L26 = outC->Context_1.radio_present;
  outC->_L27 = outC->Context_1.radio_consistency;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(
    &outC->_L28,
    &outC->Context_1.RadioHeader);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L29,
    &outC->Context_1.RadioMetadata);
  outC->BTM_valid = outC->_L1;
  /* 1 */ CAST_N_PIG_to_int_TM_conversions(outC->_L13, &outC->_1_Context_1);
  outC->_L34 = outC->_1_Context_1.n_pig_int;
  outC->API_n_pig = outC->_L34;
  switch (outC->SM1_state_sel) {
    case SSM_st_No_BG_SM1 :
      br_1_guard_SM1_No_BG = outC->BTM_valid & (outC->API_n_pig == 0);
      break;
    
  }
  /* 1 */ CAST_N_TOTAL_to_int_TM_conversions(outC->_L14, &outC->_2_Context_1);
  outC->_L33 = outC->_2_Context_1.n_total_int;
  outC->API_n_total = outC->_L33;
  switch (outC->SM1_state_sel) {
    case SSM_st_NominalDir_SM1 :
      _114_SM1_state_act = SSM_st_NominalDir_SM1;
      outC->SM1_state_act = _114_SM1_state_act;
      break;
    case SSM_st_ReverseDir_SM1 :
      _111_SM1_state_act = SSM_st_ReverseDir_SM1;
      outC->SM1_state_act = _111_SM1_state_act;
      break;
    case SSM_st_No_BG_SM1 :
      br_2_guard_SM1_No_BG = outC->BTM_valid & (outC->API_n_pig ==
          outC->API_n_total);
      if (br_1_guard_SM1_No_BG) {
        SM1_state_act = SSM_st_NominalDir_SM1;
      }
      else if (br_2_guard_SM1_No_BG) {
        SM1_state_act = SSM_st_ReverseDir_SM1;
      }
      else {
        SM1_state_act = SSM_st_No_BG_SM1;
      }
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  if (outC->init5) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_ReverseDir_SM1 :
      _112_SM1_reset_act = kcg_false;
      break;
    case SSM_st_No_BG_SM1 :
      if (br_1_guard_SM1_No_BG) {
        SM1_reset_act = kcg_true;
      }
      else {
        SM1_reset_act = br_2_guard_SM1_No_BG;
      }
      break;
    
  }
  /* 1 */ CAST_NID_BG_to_int_TM_conversions(outC->_L17, &outC->_3_Context_1);
  outC->_L32 = outC->_3_Context_1.nid_bg_int;
  outC->API_nid_bg = outC->_L32;
  if (outC->init5) {
    last_BG = 999;
  }
  else {
    last_BG = outC->BG;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_NominalDir_SM1 :
      br_1_guard_SM1_NominalDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig == 0);
      _115_SM1_reset_act = br_1_guard_SM1_NominalDir;
      outC->SM1_reset_act = _115_SM1_reset_act;
      break;
    case SSM_st_ReverseDir_SM1 :
      outC->SM1_reset_act = _112_SM1_reset_act;
      break;
    case SSM_st_No_BG_SM1 :
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NominalDir_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      break;
    
  }
  if (outC->init5) {
    last_Expected_Balise = 0;
  }
  else {
    last_Expected_Balise = outC->Expected_Balise;
  }
  if (outC->init5) {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_current_BG,
      (ReceivedBG_CheckBGInputChannel_Pkg *)
        &emptyReceivedBG_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_current_BG,
      &outC->current_BG);
  }
  if (outC->init5) {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_out_BG,
      (ReceivedBG_CheckBGInputChannel_Pkg *)
        &emptyReceivedBG_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&last_out_BG, &outC->out_BG);
  }
  if (outC->init5) {
    last_out_BG_complete = kcg_false;
  }
  else {
    last_out_BG_complete = outC->out_BG_complete;
  }
  if (outC->init5) {
    last_count_BTM_BGs = - 1;
  }
  else {
    last_count_BTM_BGs = outC->count_BTM_BGs;
  }
  if (outC->init5) {
    kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
      &last_out_Track_BGs,
      (ReceivedBGs_CheckBGInputChannel_Pkg *)
        &emptyReceivedBGs_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
      &last_out_Track_BGs,
      &outC->out_Track_BGs);
  }
  _146_noname = outC->_L16;
  _145_noname = outC->_L15;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_144_noname, &outC->_L21);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_143_noname, &outC->_L20);
  _142_noname = outC->_L19;
  _141_noname = outC->_L18;
  _140_noname = outC->_L23;
  _139_noname = outC->_L22;
  _138_noname = outC->_L24;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_137_noname, &outC->_L25);
  _136_noname = outC->_L26;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_135_noname, &outC->_L28);
  _134_noname = outC->_L27;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_133_noname, &outC->_L29);
  _132_noname = outC->_L12;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_131_noname, &outC->_L10);
  _130_noname = outC->_L11;
  _129_noname = outC->_L9;
  _128_noname = outC->_L8;
  _127_noname = outC->_L7;
  _126_noname = outC->_L6;
  _125_noname = outC->_L5;
  _124_noname = outC->_L3;
  _123_noname = outC->_L2;
  outC->API_Msg_Present = outC->_L4;
  switch (outC->SM1_state_sel) {
    case SSM_st_NominalDir_SM1 :
      if (br_1_guard_SM1_NominalDir) {
        _116_SM1_fired_strong = SSM_TR_NominalDir_1_SM1;
      }
      else {
        _116_SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _116_SM1_fired_strong;
      break;
    case SSM_st_ReverseDir_SM1 :
      _113_SM1_fired_strong = SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = _113_SM1_fired_strong;
      break;
    case SSM_st_No_BG_SM1 :
      if (br_1_guard_SM1_No_BG) {
        SM1_fired_strong = SSM_TR_No_BG_1_SM1;
      }
      else if (br_2_guard_SM1_No_BG) {
        SM1_fired_strong = SSM_TR_No_BG_2_SM1;
      }
      else {
        SM1_fired_strong = SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NominalDir_SM1 :
      outC->NominalDir_weakb_clock_SM1 = outC->SM1_fired_strong !=
        SSM_TR_no_trans_SM1;
      if (outC->NominalDir_weakb_clock_SM1) {
        _26_SM1_fired = outC->SM1_fired_strong;
        _25_SM1_reset_nxt = kcg_false;
        _24_SM1_state_nxt = SSM_st_NominalDir_SM1;
      }
      if (outC->init) {
        outC->SM2_state_sel_SM1_NominalDir =
          SSM_st_FirstBalise_SM1_NominalDir_SM2;
      }
      else {
        outC->SM2_state_sel_SM1_NominalDir = outC->SM2_state_nxt_SM1_NominalDir;
      }
      outC->_6_SM2_clock_SM1_NominalDir = outC->SM2_state_sel_SM1_NominalDir;
      switch (outC->_6_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          _155_br_1_guard_SM1_NominalDir_SM2_FirstBalise =
            !outC->API_Msg_Present;
          _156_br_2_guard_SM1_NominalDir_SM2_FirstBalise = (outC->API_n_total ==
              0) & (outC->API_n_pig == 0);
          _157_br_3_guard_SM1_NominalDir_SM2_FirstBalise = (outC->API_n_total ==
              1) & (outC->API_n_pig == 1);
          br_4_guard_SM1_NominalDir_SM2_FirstBalise = (outC->API_n_pig == 1) &
            (outC->API_n_total > 1);
          if (_155_br_1_guard_SM1_NominalDir_SM2_FirstBalise) {
            _108_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_156_br_2_guard_SM1_NominalDir_SM2_FirstBalise) {
            _108_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (_157_br_3_guard_SM1_NominalDir_SM2_FirstBalise) {
            _108_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_FirstBalise) {
            _108_SM2_state_act_SM1_NominalDir =
              SSM_st_SecondBalise_SM1_NominalDir_SM2;
          }
          else {
            _108_SM2_state_act_SM1_NominalDir =
              SSM_st_FirstBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _108_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          _152_br_1_guard_SM1_NominalDir_SM2_SecondBalise =
            !outC->API_Msg_Present;
          _153_br_2_guard_SM1_NominalDir_SM2_SecondBalise =
            (outC->API_n_total == 2) & (outC->API_n_pig == 2);
          _154_br_3_guard_SM1_NominalDir_SM2_SecondBalise = (outC->API_n_pig ==
              2) & (outC->API_n_total > 2);
          if (_152_br_1_guard_SM1_NominalDir_SM2_SecondBalise) {
            _105_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_153_br_2_guard_SM1_NominalDir_SM2_SecondBalise) {
            _105_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (_154_br_3_guard_SM1_NominalDir_SM2_SecondBalise) {
            _105_SM2_state_act_SM1_NominalDir =
              SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          }
          else {
            _105_SM2_state_act_SM1_NominalDir =
              SSM_st_SecondBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _105_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == outC->API_n_total);
          br_2_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 0) & (outC->API_n_total > 0);
          br_3_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 1) & (outC->API_n_total > 1);
          br_4_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 2) & (outC->API_n_total > 2);
          br_5_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 3) & (outC->API_n_total > 3);
          br_6_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 4) & (outC->API_n_total > 4);
          br_7_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 5) & (outC->API_n_total > 5);
          br_8_guard_SM1_NominalDir_SM2_Wait = outC->API_Msg_Present &
            (outC->API_n_pig == 6) & (outC->API_n_total > 6);
          if (br_1_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_FirstBalise_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_SecondBalise_SM1_NominalDir_SM2;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          }
          else if (br_5_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_FourthBalise_SM1_NominalDir_SM2;
          }
          else if (br_6_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_FifthBalise_SM1_NominalDir_SM2;
          }
          else if (br_7_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_SixthBalise_SM1_NominalDir_SM2;
          }
          else if (br_8_guard_SM1_NominalDir_SM2_Wait) {
            _102_SM2_state_act_SM1_NominalDir =
              SSM_st_SevensBalise_SM1_NominalDir_SM2;
          }
          else {
            _102_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _102_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_ThirdBalise = !outC->API_Msg_Present;
          br_2_guard_SM1_NominalDir_SM2_ThirdBalise = (outC->API_n_total == 3) &
            (outC->API_n_pig == 3);
          br_3_guard_SM1_NominalDir_SM2_ThirdBalise = (outC->API_n_pig == 3) &
            (outC->API_n_total > 3);
          if (br_1_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _99_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _99_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _99_SM2_state_act_SM1_NominalDir =
              SSM_st_FourthBalise_SM1_NominalDir_SM2;
          }
          else {
            _99_SM2_state_act_SM1_NominalDir =
              SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir = _99_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          _149_br_1_guard_SM1_NominalDir_SM2_FourthBalise =
            !outC->API_Msg_Present;
          _150_br_2_guard_SM1_NominalDir_SM2_FourthBalise =
            (outC->API_n_total == 4) & (outC->API_n_pig == 4);
          _151_br_3_guard_SM1_NominalDir_SM2_FourthBalise = (outC->API_n_pig ==
              4) & (outC->API_n_total > 4);
          if (_149_br_1_guard_SM1_NominalDir_SM2_FourthBalise) {
            _96_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_150_br_2_guard_SM1_NominalDir_SM2_FourthBalise) {
            _96_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (_151_br_3_guard_SM1_NominalDir_SM2_FourthBalise) {
            _96_SM2_state_act_SM1_NominalDir =
              SSM_st_FifthBalise_SM1_NominalDir_SM2;
          }
          else {
            _96_SM2_state_act_SM1_NominalDir =
              SSM_st_FourthBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir = _96_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_FifthBalise = !outC->API_Msg_Present;
          br_2_guard_SM1_NominalDir_SM2_FifthBalise = (outC->API_n_total == 5) &
            (outC->API_n_pig == 5);
          br_3_guard_SM1_NominalDir_SM2_FifthBalise = (outC->API_n_pig == 5) &
            (outC->API_n_total > 5);
          if (br_1_guard_SM1_NominalDir_SM2_FifthBalise) {
            _93_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_FifthBalise) {
            _93_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_FifthBalise) {
            _93_SM2_state_act_SM1_NominalDir =
              SSM_st_SixthBalise_SM1_NominalDir_SM2;
          }
          else {
            _93_SM2_state_act_SM1_NominalDir =
              SSM_st_FifthBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir = _93_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          _147_br_1_guard_SM1_NominalDir_SM2_SixthBalise =
            !outC->API_Msg_Present;
          _148_br_2_guard_SM1_NominalDir_SM2_SixthBalise = (outC->API_n_total ==
              6) & (outC->API_n_pig == 6);
          br_3_guard_SM1_NominalDir_SM2_SixthBalise = (outC->API_n_pig == 6) &
            (outC->API_n_total > 6);
          if (_147_br_1_guard_SM1_NominalDir_SM2_SixthBalise) {
            _90_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_148_br_2_guard_SM1_NominalDir_SM2_SixthBalise) {
            _90_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_SixthBalise) {
            _90_SM2_state_act_SM1_NominalDir =
              SSM_st_SevensBalise_SM1_NominalDir_SM2;
          }
          else {
            _90_SM2_state_act_SM1_NominalDir =
              SSM_st_SixthBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir = _90_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_SevensBalise = !outC->API_Msg_Present;
          br_2_guard_SM1_NominalDir_SM2_SevensBalise = (outC->API_n_total ==
              7) & (outC->API_n_pig == 7);
          if (br_1_guard_SM1_NominalDir_SM2_SevensBalise) {
            _87_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_SevensBalise) {
            _87_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else {
            _87_SM2_state_act_SM1_NominalDir =
              SSM_st_SevensBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir = _87_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_LastBaliseinBG = !outC->API_Msg_Present;
          if (br_1_guard_SM1_NominalDir_SM2_LastBaliseinBG) {
            SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else {
            SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir = SM2_state_act_SM1_NominalDir;
          break;
        
      }
      outC->SM2_clock_SM1_NominalDir = outC->SM2_state_act_SM1_NominalDir;
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          _80_out_BG_complete = kcg_false;
          _13_out_BG_complete = _80_out_BG_complete;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          _73_out_BG_complete = kcg_false;
          _13_out_BG_complete = _73_out_BG_complete;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          _66_out_BG_complete = kcg_false;
          _13_out_BG_complete = _66_out_BG_complete;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          _59_out_BG_complete = kcg_false;
          _13_out_BG_complete = _59_out_BG_complete;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          _52_out_BG_complete = kcg_false;
          _13_out_BG_complete = _52_out_BG_complete;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          _45_out_BG_complete = kcg_false;
          _13_out_BG_complete = _45_out_BG_complete;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          _38_out_BG_complete = kcg_false;
          _13_out_BG_complete = _38_out_BG_complete;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          _31_out_BG_complete = kcg_false;
          _13_out_BG_complete = _31_out_BG_complete;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_LastBaliseinBG,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_NominalDir_SM2_LastBaliseinBG,
            &last_current_BG);
          outC->_L7_SM1_NominalDir_SM2_LastBaliseinBG = last_Expected_Balise;
          /* 16 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L5_SM1_NominalDir_SM2_LastBaliseinBG,
            &outC->_L2_SM1_NominalDir_SM2_LastBaliseinBG,
            outC->_L7_SM1_NominalDir_SM2_LastBaliseinBG,
            &outC->Context_16);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L3_SM1_NominalDir_SM2_LastBaliseinBG,
            &outC->Context_16.out_BG);
          outC->_L6_SM1_NominalDir_SM2_LastBaliseinBG =
            outC->Context_16.Warning_unexspected_Balise;
          outC->_L8_SM1_NominalDir_SM2_LastBaliseinBG =
            outC->_L3_SM1_NominalDir_SM2_LastBaliseinBG.complete;
          _27_out_BG_complete = outC->_L8_SM1_NominalDir_SM2_LastBaliseinBG;
          _13_out_BG_complete = _27_out_BG_complete;
          break;
        
      }
      if (outC->NominalDir_weakb_clock_SM1) {
        _20_SM1_fired = _26_SM1_fired;
        _19_SM1_reset_nxt = _25_SM1_reset_nxt;
        _18_SM1_state_nxt = _24_SM1_state_nxt;
      }
      else {
        br_2_guard_SM1_NominalDir = _13_out_BG_complete;
        if (br_2_guard_SM1_NominalDir) {
          _23_SM1_fired = SSM_TR_NominalDir_2_SM1;
        }
        else {
          _23_SM1_fired = SSM_TR_no_trans_SM1;
        }
        _22_SM1_reset_nxt = br_2_guard_SM1_NominalDir;
        if (br_2_guard_SM1_NominalDir) {
          _21_SM1_state_nxt = SSM_st_No_BG_SM1;
        }
        else {
          _21_SM1_state_nxt = SSM_st_NominalDir_SM1;
        }
        _20_SM1_fired = _23_SM1_fired;
        _19_SM1_reset_nxt = _22_SM1_reset_nxt;
        _18_SM1_state_nxt = _21_SM1_state_nxt;
      }
      outC->_L42_SM1_NominalDir = last_BG;
      if (outC->init) {
        outC->_L43_SM1_NominalDir = outC->API_nid_bg;
      }
      else {
        outC->_L43_SM1_NominalDir = outC->_L42_SM1_NominalDir;
      }
      BG17 = outC->_L43_SM1_NominalDir;
      outC->_L36_SM1_NominalDir = last_count_BTM_BGs;
      outC->_L40_SM1_NominalDir = 0;
      if (outC->init) {
        outC->_L39_SM1_NominalDir = 1;
      }
      else {
        outC->_L39_SM1_NominalDir = outC->_L40_SM1_NominalDir;
      }
      outC->_L37_SM1_NominalDir = outC->_L36_SM1_NominalDir +
        outC->_L39_SM1_NominalDir;
      _12_count_BTM_BGs = outC->_L37_SM1_NominalDir;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L30_SM1_NominalDir,
        &last_out_Track_BGs);
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L20_SM1_NominalDir_SM2_FirstBalise,
            &inC->BTM_TrackMsg);
          /* InitBG */
          InitBG_Subfunctions(
            &outC->_L20_SM1_NominalDir_SM2_FirstBalise,
            &outC->Context_InitBG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L11_SM1_NominalDir_SM2_FirstBalise,
            &outC->Context_InitBG.out_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_82_current_BG,
            &outC->_L11_SM1_NominalDir_SM2_FirstBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_82_current_BG);
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L4_SM1_NominalDir_SM2_SecondBalise,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_NominalDir_SM2_SecondBalise,
            &last_current_BG);
          outC->_L7_SM1_NominalDir_SM2_SecondBalise = last_Expected_Balise;
          /* 1 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L4_SM1_NominalDir_SM2_SecondBalise,
            &outC->_L2_SM1_NominalDir_SM2_SecondBalise,
            outC->_L7_SM1_NominalDir_SM2_SecondBalise,
            &outC->_4_Context_1);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_NominalDir_SM2_SecondBalise,
            &outC->_4_Context_1.out_BG);
          outC->_L6_SM1_NominalDir_SM2_SecondBalise =
            outC->_4_Context_1.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_75_current_BG,
            &outC->_L1_SM1_NominalDir_SM2_SecondBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_75_current_BG);
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_NominalDir_SM2_Wait,
            &last_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_68_current_BG,
            &outC->_L1_SM1_NominalDir_SM2_Wait);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_68_current_BG);
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_ThirdBalise,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L8_SM1_NominalDir_SM2_ThirdBalise,
            &last_current_BG);
          outC->_L12_SM1_NominalDir_SM2_ThirdBalise = last_Expected_Balise;
          /* 5 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L5_SM1_NominalDir_SM2_ThirdBalise,
            &outC->_L8_SM1_NominalDir_SM2_ThirdBalise,
            outC->_L12_SM1_NominalDir_SM2_ThirdBalise,
            &outC->Context_5);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L6_SM1_NominalDir_SM2_ThirdBalise,
            &outC->Context_5.out_BG);
          outC->_L10_SM1_NominalDir_SM2_ThirdBalise =
            outC->Context_5.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_61_current_BG,
            &outC->_L6_SM1_NominalDir_SM2_ThirdBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_61_current_BG);
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L2_SM1_NominalDir_SM2_FourthBalise,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_FourthBalise,
            &last_current_BG);
          outC->_L7_SM1_NominalDir_SM2_FourthBalise = last_Expected_Balise;
          /* 15 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L2_SM1_NominalDir_SM2_FourthBalise,
            &outC->_L5_SM1_NominalDir_SM2_FourthBalise,
            outC->_L7_SM1_NominalDir_SM2_FourthBalise,
            &outC->Context_15);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L3_SM1_NominalDir_SM2_FourthBalise,
            &outC->Context_15.out_BG);
          outC->_L6_SM1_NominalDir_SM2_FourthBalise =
            outC->Context_15.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_54_current_BG,
            &outC->_L3_SM1_NominalDir_SM2_FourthBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_54_current_BG);
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L7_SM1_NominalDir_SM2_FifthBalise,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_FifthBalise,
            &last_current_BG);
          outC->_L10_SM1_NominalDir_SM2_FifthBalise = last_Expected_Balise;
          /* 14 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L7_SM1_NominalDir_SM2_FifthBalise,
            &outC->_L5_SM1_NominalDir_SM2_FifthBalise,
            outC->_L10_SM1_NominalDir_SM2_FifthBalise,
            &outC->Context_14);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L6_SM1_NominalDir_SM2_FifthBalise,
            &outC->Context_14.out_BG);
          outC->_L9_SM1_NominalDir_SM2_FifthBalise =
            outC->Context_14.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_47_current_BG,
            &outC->_L6_SM1_NominalDir_SM2_FifthBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_47_current_BG);
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L3_SM1_NominalDir_SM2_SixthBalise,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_SixthBalise,
            &last_current_BG);
          outC->_L13_SM1_NominalDir_SM2_SixthBalise = last_Expected_Balise;
          /* 10 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L3_SM1_NominalDir_SM2_SixthBalise,
            &outC->_L5_SM1_NominalDir_SM2_SixthBalise,
            outC->_L13_SM1_NominalDir_SM2_SixthBalise,
            &outC->Context_10);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L4_SM1_NominalDir_SM2_SixthBalise,
            &outC->Context_10.out_BG);
          outC->_L12_SM1_NominalDir_SM2_SixthBalise =
            outC->Context_10.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_40_current_BG,
            &outC->_L4_SM1_NominalDir_SM2_SixthBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_40_current_BG);
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L11_SM1_NominalDir_SM2_SevensBalise,
            &inC->BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L12_SM1_NominalDir_SM2_SevensBalise,
            &last_current_BG);
          outC->_L15_SM1_NominalDir_SM2_SevensBalise = last_Expected_Balise;
          /* 9 */
          Consistency_Check_Track_BG_Subfunctions(
            &outC->_L11_SM1_NominalDir_SM2_SevensBalise,
            &outC->_L12_SM1_NominalDir_SM2_SevensBalise,
            outC->_L15_SM1_NominalDir_SM2_SevensBalise,
            &outC->Context_9);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L10_SM1_NominalDir_SM2_SevensBalise,
            &outC->Context_9.out_BG);
          outC->_L13_SM1_NominalDir_SM2_SevensBalise =
            outC->Context_9.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_33_current_BG,
            &outC->_L10_SM1_NominalDir_SM2_SevensBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_33_current_BG);
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L9_SM1_NominalDir_SM2_LastBaliseinBG,
            &outC->_L3_SM1_NominalDir_SM2_LastBaliseinBG);
          if (kcg_true) {
            outC->_L9_SM1_NominalDir_SM2_LastBaliseinBG.valid =
              outC->_L8_SM1_NominalDir_SM2_LastBaliseinBG;
          }
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_29_current_BG,
            &outC->_L9_SM1_NominalDir_SM2_LastBaliseinBG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_29_current_BG);
          break;
        
      }
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->_L32_SM1_NominalDir,
        &_15_current_BG);
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L31_SM1_NominalDir,
        &outC->_L30_SM1_NominalDir);
      if ((0 <= outC->_L37_SM1_NominalDir) & (outC->_L37_SM1_NominalDir < 10)) {
        kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
          &outC->_L31_SM1_NominalDir[outC->_L37_SM1_NominalDir],
          &outC->_L32_SM1_NominalDir);
      }
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &_11_out_Track_BGs,
        &outC->_L31_SM1_NominalDir);
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_81_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          break;
        
      }
      switch (outC->_6_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          if (_155_br_1_guard_SM1_NominalDir_SM2_FirstBalise) {
            _110_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_1_SM2_SM1_NominalDir;
          }
          else if (_156_br_2_guard_SM1_NominalDir_SM2_FirstBalise) {
            _110_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_2_SM2_SM1_NominalDir;
          }
          else if (_157_br_3_guard_SM1_NominalDir_SM2_FirstBalise) {
            _110_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_3_SM2_SM1_NominalDir;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_FirstBalise) {
            _110_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_4_SM2_SM1_NominalDir;
          }
          else {
            _110_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _110_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          if (_152_br_1_guard_SM1_NominalDir_SM2_SecondBalise) {
            _107_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SecondBalise_1_SM2_SM1_NominalDir;
          }
          else if (_153_br_2_guard_SM1_NominalDir_SM2_SecondBalise) {
            _107_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SecondBalise_2_SM2_SM1_NominalDir;
          }
          else if (_154_br_3_guard_SM1_NominalDir_SM2_SecondBalise) {
            _107_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SecondBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _107_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _107_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_3_SM2_SM1_NominalDir;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_4_SM2_SM1_NominalDir;
          }
          else if (br_5_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_5_SM2_SM1_NominalDir;
          }
          else if (br_6_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_6_SM2_SM1_NominalDir;
          }
          else if (br_7_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_7_SM2_SM1_NominalDir;
          }
          else if (br_8_guard_SM1_NominalDir_SM2_Wait) {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_8_SM2_SM1_NominalDir;
          }
          else {
            _104_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _104_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _101_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _101_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _101_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _101_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _101_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          if (_149_br_1_guard_SM1_NominalDir_SM2_FourthBalise) {
            _98_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FourthBalise_1_SM2_SM1_NominalDir;
          }
          else if (_150_br_2_guard_SM1_NominalDir_SM2_FourthBalise) {
            _98_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FourthBalise_2_SM2_SM1_NominalDir;
          }
          else if (_151_br_3_guard_SM1_NominalDir_SM2_FourthBalise) {
            _98_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FourthBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _98_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _98_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_FifthBalise) {
            _95_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FifthBalise_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_FifthBalise) {
            _95_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FifthBalise_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_FifthBalise) {
            _95_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FifthBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _95_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _95_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          if (_147_br_1_guard_SM1_NominalDir_SM2_SixthBalise) {
            _92_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SixthBalise_1_SM2_SM1_NominalDir;
          }
          else if (_148_br_2_guard_SM1_NominalDir_SM2_SixthBalise) {
            _92_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SixthBalise_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_SixthBalise) {
            _92_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SixthBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _92_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _92_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_SevensBalise) {
            _89_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SevensBalise_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_SevensBalise) {
            _89_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SevensBalise_2_SM2_SM1_NominalDir;
          }
          else {
            _89_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _89_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_LastBaliseinBG) {
            SM2_fired_strong_SM1_NominalDir =
              SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir;
          }
          else {
            SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            SM2_fired_strong_SM1_NominalDir;
          break;
        
      }
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          _86_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _85_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _84_SM2_state_nxt_SM1_NominalDir =
            SSM_st_FirstBalise_SM1_NominalDir_SM2;
          outC->_L22_SM1_NominalDir_SM2_FirstBalise = 1;
          _83_Expected_Balise = outC->_L22_SM1_NominalDir_SM2_FirstBalise;
          outC->SM2_fired_SM1_NominalDir = _86_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_74_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _79_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _78_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _77_SM2_state_nxt_SM1_NominalDir =
            SSM_st_SecondBalise_SM1_NominalDir_SM2;
          _122_noname = outC->_L6_SM1_NominalDir_SM2_SecondBalise;
          outC->_L5_SM1_NominalDir_SM2_SecondBalise = 2;
          _76_Expected_Balise = outC->_L5_SM1_NominalDir_SM2_SecondBalise;
          outC->SM2_fired_SM1_NominalDir = _79_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_67_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _72_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _71_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _70_SM2_state_nxt_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          outC->_L4_SM1_NominalDir_SM2_Wait = last_Expected_Balise;
          _69_Expected_Balise = outC->_L4_SM1_NominalDir_SM2_Wait;
          outC->SM2_fired_SM1_NominalDir = _72_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_60_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _65_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _64_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _63_SM2_state_nxt_SM1_NominalDir =
            SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          _121_noname = outC->_L10_SM1_NominalDir_SM2_ThirdBalise;
          outC->_L9_SM1_NominalDir_SM2_ThirdBalise = 3;
          _62_Expected_Balise = outC->_L9_SM1_NominalDir_SM2_ThirdBalise;
          outC->SM2_fired_SM1_NominalDir = _65_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_53_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _58_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _57_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _56_SM2_state_nxt_SM1_NominalDir =
            SSM_st_FourthBalise_SM1_NominalDir_SM2;
          _120_noname = outC->_L6_SM1_NominalDir_SM2_FourthBalise;
          outC->_L4_SM1_NominalDir_SM2_FourthBalise = 4;
          _55_Expected_Balise = outC->_L4_SM1_NominalDir_SM2_FourthBalise;
          outC->SM2_fired_SM1_NominalDir = _58_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_46_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _51_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _50_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _49_SM2_state_nxt_SM1_NominalDir =
            SSM_st_FifthBalise_SM1_NominalDir_SM2;
          _119_noname = outC->_L9_SM1_NominalDir_SM2_FifthBalise;
          outC->_L8_SM1_NominalDir_SM2_FifthBalise = 5;
          _48_Expected_Balise = outC->_L8_SM1_NominalDir_SM2_FifthBalise;
          outC->SM2_fired_SM1_NominalDir = _51_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_39_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _44_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _43_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _42_SM2_state_nxt_SM1_NominalDir =
            SSM_st_SixthBalise_SM1_NominalDir_SM2;
          _118_noname = outC->_L12_SM1_NominalDir_SM2_SixthBalise;
          outC->_L2_SM1_NominalDir_SM2_SixthBalise = 6;
          _41_Expected_Balise = outC->_L2_SM1_NominalDir_SM2_SixthBalise;
          outC->SM2_fired_SM1_NominalDir = _44_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_32_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &emptyReceivedBG_CheckBGInputChannel_Pkg);
          _37_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _36_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _35_SM2_state_nxt_SM1_NominalDir =
            SSM_st_SevensBalise_SM1_NominalDir_SM2;
          _117_noname = outC->_L13_SM1_NominalDir_SM2_SevensBalise;
          outC->_L6_SM1_NominalDir_SM2_SevensBalise = 7;
          _34_Expected_Balise = outC->_L6_SM1_NominalDir_SM2_SevensBalise;
          outC->SM2_fired_SM1_NominalDir = _37_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          _30_Expected_Balise = last_Expected_Balise;
          SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          SM2_reset_nxt_SM1_NominalDir = kcg_false;
          SM2_state_nxt_SM1_NominalDir =
            SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          noname = outC->_L6_SM1_NominalDir_SM2_LastBaliseinBG;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_28_out_BG,
            &outC->_L9_SM1_NominalDir_SM2_LastBaliseinBG);
          outC->SM2_fired_SM1_NominalDir = SM2_fired_SM1_NominalDir;
          break;
        
      }
      if (outC->init) {
        SM2_reset_sel_SM1_NominalDir = kcg_false;
      }
      else {
        SM2_reset_sel_SM1_NominalDir = outC->SM2_reset_nxt_SM1_NominalDir;
      }
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _85_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _84_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _83_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_81_out_BG);
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _78_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _77_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _76_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_74_out_BG);
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _71_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _70_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _69_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_67_out_BG);
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _64_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _63_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _62_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_60_out_BG);
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _57_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _56_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _55_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_53_out_BG);
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _50_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _49_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _48_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_46_out_BG);
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _43_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _42_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _41_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_39_out_BG);
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = _36_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = _35_SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _34_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_32_out_BG);
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = SM2_state_nxt_SM1_NominalDir;
          _16_Expected_Balise = _30_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_28_out_BG);
          break;
        
      }
      switch (outC->_6_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          if (_155_br_1_guard_SM1_NominalDir_SM2_FirstBalise) {
            _109_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_156_br_2_guard_SM1_NominalDir_SM2_FirstBalise) {
            _109_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_157_br_3_guard_SM1_NominalDir_SM2_FirstBalise) {
            _109_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _109_SM2_reset_act_SM1_NominalDir =
              br_4_guard_SM1_NominalDir_SM2_FirstBalise;
          }
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          if (_152_br_1_guard_SM1_NominalDir_SM2_SecondBalise) {
            _106_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_153_br_2_guard_SM1_NominalDir_SM2_SecondBalise) {
            _106_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _106_SM2_reset_act_SM1_NominalDir =
              _154_br_3_guard_SM1_NominalDir_SM2_SecondBalise;
          }
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_5_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_6_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_7_guard_SM1_NominalDir_SM2_Wait) {
            _103_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _103_SM2_reset_act_SM1_NominalDir =
              br_8_guard_SM1_NominalDir_SM2_Wait;
          }
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _100_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _100_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _100_SM2_reset_act_SM1_NominalDir =
              br_3_guard_SM1_NominalDir_SM2_ThirdBalise;
          }
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          if (_149_br_1_guard_SM1_NominalDir_SM2_FourthBalise) {
            _97_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_150_br_2_guard_SM1_NominalDir_SM2_FourthBalise) {
            _97_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _97_SM2_reset_act_SM1_NominalDir =
              _151_br_3_guard_SM1_NominalDir_SM2_FourthBalise;
          }
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_FifthBalise) {
            _94_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_FifthBalise) {
            _94_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _94_SM2_reset_act_SM1_NominalDir =
              br_3_guard_SM1_NominalDir_SM2_FifthBalise;
          }
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          if (_147_br_1_guard_SM1_NominalDir_SM2_SixthBalise) {
            _91_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_148_br_2_guard_SM1_NominalDir_SM2_SixthBalise) {
            _91_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _91_SM2_reset_act_SM1_NominalDir =
              br_3_guard_SM1_NominalDir_SM2_SixthBalise;
          }
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_SevensBalise) {
            _88_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _88_SM2_reset_act_SM1_NominalDir =
              br_2_guard_SM1_NominalDir_SM2_SevensBalise;
          }
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          SM2_reset_act_SM1_NominalDir =
            br_1_guard_SM1_NominalDir_SM2_LastBaliseinBG;
          break;
        
      }
      if (outC->init) {
        SM2_reset_prv_SM1_NominalDir = kcg_false;
      }
      else {
        SM2_reset_prv_SM1_NominalDir = outC->SM2_reset_act_SM1_NominalDir;
      }
      switch (outC->_6_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _109_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _106_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _103_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _100_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir = _97_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir = _94_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir = _91_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir = _88_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir = SM2_reset_act_SM1_NominalDir;
          break;
        
      }
      outC->SM1_fired = _20_SM1_fired;
      break;
    case SSM_st_ReverseDir_SM1 :
      BG7 = last_BG;
      _6_Expected_Balise = last_Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &_5_current_BG,
        &last_current_BG);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &_4_out_BG,
        (ReceivedBG_CheckBGInputChannel_Pkg *)
          &emptyReceivedBG_CheckBGInputChannel_Pkg);
      _3_out_BG_complete = kcg_false;
      _2_count_BTM_BGs = last_count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &_1_out_Track_BGs,
        &last_out_Track_BGs);
      _10_SM1_fired = outC->SM1_fired_strong;
      _9_SM1_reset_nxt = kcg_false;
      _8_SM1_state_nxt = SSM_st_ReverseDir_SM1;
      outC->SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_No_BG_SM1 :
      BG = last_BG;
      Expected_Balise = last_Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &current_BG,
        &last_current_BG);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &out_BG,
        (ReceivedBG_CheckBGInputChannel_Pkg *)
          &emptyReceivedBG_CheckBGInputChannel_Pkg);
      out_BG_complete = kcg_false;
      count_BTM_BGs = last_count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &out_Track_BGs,
        &last_out_Track_BGs);
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_No_BG_SM1;
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init5) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NominalDir_SM1 :
      outC->SM1_reset_nxt = _19_SM1_reset_nxt;
      outC->SM1_state_nxt = _18_SM1_state_nxt;
      outC->BG = BG17;
      outC->Expected_Balise = _16_Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->current_BG,
        &_15_current_BG);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->out_BG, &_14_out_BG);
      outC->out_BG_complete = _13_out_BG_complete;
      outC->count_BTM_BGs = _12_count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->out_Track_BGs,
        &_11_out_Track_BGs);
      outC->init = kcg_false;
      break;
    case SSM_st_ReverseDir_SM1 :
      outC->SM1_reset_nxt = _9_SM1_reset_nxt;
      outC->SM1_state_nxt = _8_SM1_state_nxt;
      outC->BG = BG7;
      outC->Expected_Balise = _6_Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->current_BG,
        &_5_current_BG);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->out_BG, &_4_out_BG);
      outC->out_BG_complete = _3_out_BG_complete;
      outC->count_BTM_BGs = _2_count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->out_Track_BGs,
        &_1_out_Track_BGs);
      break;
    case SSM_st_No_BG_SM1 :
      outC->SM1_reset_nxt = SM1_reset_nxt;
      outC->SM1_state_nxt = SM1_state_nxt;
      outC->BG = BG;
      outC->Expected_Balise = Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->current_BG,
        &current_BG);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->out_BG, &out_BG);
      outC->out_BG_complete = out_BG_complete;
      outC->count_BTM_BGs = count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->out_Track_BGs,
        &out_Track_BGs);
      break;
    
  }
  outC->init5 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Listen_on_BTM_CheckBGInputChannel_Pkg.c
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

