/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Listen_on_BTM_CheckBGInputChannel_Pkg.h"

void Listen_on_BTM_reset_CheckBGInputChannel_Pkg(
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg *outC)
{
  outC->init = kcg_true;
  outC->init10 = kcg_true;
  outC->init11 = kcg_true;
  outC->init12 = kcg_true;
  outC->init13 = kcg_true;
  /* 9 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_9_Context_9);
  /* 1 */ InitInconBG_reset_Subfunctions_CheckBGInput_Pkg(&outC->_8_Context_1);
  /* 9 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_9);
  /* 4 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_7_Context_4);
  /* 8 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_8);
  /* 6 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_6);
  /* 5 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_6_Context_5);
  /* 2 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_2);
  /* 4 */ InitConsBG_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_4);
  /* 1 */
  Consistency_RevCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_5_Context_1);
  /* InitConsBG */
  InitConsBG_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_InitConsBG);
  /* 1 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->_4_Context_1);
  /* 5 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_5);
  /* 15 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_15);
  /* 14 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_14);
  /* 10 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_10);
  /* 20 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_20);
  /* 16 */
  Consistency_NomCheck_Track_BG_reset_Subfunctions_CheckBGInput_Pkg(
    &outC->Context_16);
  /* 1 */ CAST_N_TOTAL_to_int_reset_TM_conversions(&outC->_3_Context_1);
  /* 1 */ CAST_NID_BG_to_int_reset_TM_conversions(&outC->_2_Context_1);
  /* 1 */ CAST_N_PIG_to_int_reset_TM_conversions(&outC->_1_Context_1);
  /* 1 */ Decop_Track_Msg_reset_Subfunctions_CheckBGInput_Pkg(&outC->Context_1);
}

/* CheckBGInputChannel_Pkg::Listen_on_BTM */
void Listen_on_BTM_CheckBGInputChannel_Pkg(
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BTM_TrackMsg */API_TrackSideInput_T_API_Msg_Pkg *BTM_TrackMsg,
  outC_Listen_on_BTM_CheckBGInputChannel_Pkg *outC)
{
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _30_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _29_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _28_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG27;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _26_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _25_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _24_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _23_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int _22_count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg _21_out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_prv_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_sel_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::LastBaliseinBG */ kcg_bool br_1_guard_SM1_NominalDir_SM2_LastBaliseinBG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise */ kcg_bool br_1_guard_SM1_NominalDir_SM2_SevensBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SevensBalise */ kcg_bool br_2_guard_SM1_NominalDir_SM2_SevensBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _197_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _198_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _199_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise */ kcg_bool _275_br_1_guard_SM1_NominalDir_SM2_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise */ kcg_bool _276_br_2_guard_SM1_NominalDir_SM2_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SixthBalise */ kcg_bool br_3_guard_SM1_NominalDir_SM2_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _200_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _201_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _202_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise */ kcg_bool br_1_guard_SM1_NominalDir_SM2_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise */ kcg_bool br_2_guard_SM1_NominalDir_SM2_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FifthBalise */ kcg_bool br_3_guard_SM1_NominalDir_SM2_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _203_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _204_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _205_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise */ kcg_bool _277_br_1_guard_SM1_NominalDir_SM2_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise */ kcg_bool _278_br_2_guard_SM1_NominalDir_SM2_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FourthBalise */ kcg_bool _279_br_3_guard_SM1_NominalDir_SM2_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _206_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _207_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _208_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise */ kcg_bool br_1_guard_SM1_NominalDir_SM2_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise */ kcg_bool br_2_guard_SM1_NominalDir_SM2_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::ThirdBalise */ kcg_bool br_3_guard_SM1_NominalDir_SM2_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _209_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _210_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _211_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_1_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_2_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_3_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_4_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_5_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_6_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_7_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::Wait */ kcg_bool br_8_guard_SM1_NominalDir_SM2_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _212_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _213_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _214_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise */ kcg_bool _280_br_1_guard_SM1_NominalDir_SM2_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise */ kcg_bool _281_br_2_guard_SM1_NominalDir_SM2_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::SecondBalise */ kcg_bool _282_br_3_guard_SM1_NominalDir_SM2_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _215_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _216_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _217_SM2_fired_strong_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool _283_br_1_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool _284_br_2_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool _285_br_3_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2::FirstBalise */ kcg_bool br_4_guard_SM1_NominalDir_SM2_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _218_SM2_state_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _219_SM2_reset_act_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _220_SM2_fired_strong_SM1_NominalDir;
  kcg_bool _237_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _137_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _138_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _139_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _140_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir SM2_fired_SM1_NominalDir;
  kcg_bool _238_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _141_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _142_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _143_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _144_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _145_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _146_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _147_SM2_fired_SM1_NominalDir;
  kcg_bool _239_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _148_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _149_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _150_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _151_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _152_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _153_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _154_SM2_fired_SM1_NominalDir;
  kcg_bool _240_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _155_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _156_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _157_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _158_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _159_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _160_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _161_SM2_fired_SM1_NominalDir;
  kcg_bool _241_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _162_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _163_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _164_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _165_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _166_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _167_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _168_SM2_fired_SM1_NominalDir;
  kcg_bool _242_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _169_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _170_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _171_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _172_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _173_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _174_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _175_SM2_fired_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _176_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _177_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _178_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _179_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _180_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _181_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _182_SM2_fired_SM1_NominalDir;
  kcg_bool _243_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _183_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _184_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _185_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _186_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _187_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _188_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _189_SM2_fired_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _190_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _191_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _192_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _193_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_ST_SM2_SM1_NominalDir _194_SM2_state_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ kcg_bool _195_SM2_reset_nxt_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir::SM2 */ SSM_TR_SM2_SM1_NominalDir _196_SM2_fired_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ kcg_bool br_4_guard_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _131_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _132_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _133_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _134_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _135_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _136_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _20_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _19_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _18_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG17;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _16_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _15_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _14_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _13_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int _12_count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg _11_out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool SM3_reset_prv_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool SM3_reset_sel_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise */ kcg_bool br_1_guard_SM1_ReverseDir_SM3_SeventhBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SeventhBalise */ kcg_bool br_2_guard_SM1_ReverseDir_SM3_SeventhBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _107_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _108_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _109_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise */ kcg_bool _269_br_1_guard_SM1_ReverseDir_SM3_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SixthBalise */ kcg_bool _270_br_2_guard_SM1_ReverseDir_SM3_SixthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _110_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _111_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _112_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_1_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_2_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_3_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_4_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_5_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_6_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::Wait */ kcg_bool br_7_guard_SM1_ReverseDir_SM3_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _113_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _114_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _115_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise */ kcg_bool br_1_guard_SM1_ReverseDir_SM3_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FifthBalise */ kcg_bool br_2_guard_SM1_ReverseDir_SM3_FifthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _116_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _117_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _118_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise */ kcg_bool _271_br_1_guard_SM1_ReverseDir_SM3_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::FourthBalise */ kcg_bool _272_br_2_guard_SM1_ReverseDir_SM3_FourthBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _119_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _120_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _121_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise */ kcg_bool br_1_guard_SM1_ReverseDir_SM3_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::ThirdBalise */ kcg_bool br_2_guard_SM1_ReverseDir_SM3_ThirdBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _122_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _123_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _124_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise */ kcg_bool _273_br_1_guard_SM1_ReverseDir_SM3_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::SecondBalise */ kcg_bool _274_br_2_guard_SM1_ReverseDir_SM3_SecondBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _125_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _126_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _127_SM3_fired_strong_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_1_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_2_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_3_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_4_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_5_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_6_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_7_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3::LastBalise */ kcg_bool br_8_guard_SM1_ReverseDir_SM3_LastBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _128_SM3_state_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _129_SM3_reset_act_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _130_SM3_fired_strong_SM1_ReverseDir;
  kcg_bool _230_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _47_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _48_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _49_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _50_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir SM3_fired_SM1_ReverseDir;
  kcg_bool _231_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _51_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _52_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _53_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _54_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _55_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _56_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _57_SM3_fired_SM1_ReverseDir;
  kcg_bool _232_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _58_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _59_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _60_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _61_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _62_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _63_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _64_SM3_fired_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _65_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _66_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _67_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _68_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _69_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _70_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _71_SM3_fired_SM1_ReverseDir;
  kcg_bool _233_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _72_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _73_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _74_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _75_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _76_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _77_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _78_SM3_fired_SM1_ReverseDir;
  kcg_bool _234_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _79_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _80_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _81_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _82_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _83_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _84_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _85_SM3_fired_SM1_ReverseDir;
  kcg_bool _235_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _86_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _87_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _88_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _89_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _90_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _91_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _92_SM3_fired_SM1_ReverseDir;
  kcg_bool _236_noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _93_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _94_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _95_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _96_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _97_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _98_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _99_SM3_fired_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _100_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _101_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _102_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _103_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_ST_SM3_SM1_ReverseDir _104_SM3_state_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ kcg_bool _105_SM3_reset_nxt_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir::SM3 */ SSM_TR_SM3_SM1_ReverseDir _106_SM3_fired_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir */ kcg_bool br_4_guard_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _41_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _42_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _43_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _44_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _45_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _46_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _10_SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _9_SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _8_SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG7;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _6_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _5_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg _4_out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool _3_out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int _2_count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg _1_out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 SM1_fired;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool SM1_reset_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 SM1_state_nxt;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::BG */ kcg_int BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG */ ReceivedBG_CheckBGInputChannel_Pkg out_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_BG_complete */ kcg_bool out_BG_complete;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::count_BTM_BGs */ kcg_int count_BTM_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::out_Track_BGs */ ReceivedBGs_CheckBGInputChannel_Pkg out_Track_BGs;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ kcg_bool SM4_reset_prv_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ kcg_bool SM4_reset_sel_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::Wait */ kcg_bool br_1_guard_SM1_InconsistentDir_SM4_Wait;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_ST_SM4_SM1_InconsistentDir SM4_state_act_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ kcg_bool SM4_reset_act_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_TR_SM4_SM1_InconsistentDir SM4_fired_strong_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4::FirstBalise */ kcg_bool _268_br_1_guard_SM1_InconsistentDir_SM4_FirstBalise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_ST_SM4_SM1_InconsistentDir _38_SM4_state_act_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ kcg_bool _39_SM4_reset_act_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_TR_SM4_SM1_InconsistentDir _40_SM4_fired_strong_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _31_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _32_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_ST_SM4_SM1_InconsistentDir SM4_state_nxt_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ kcg_bool SM4_reset_nxt_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_TR_SM4_SM1_InconsistentDir SM4_fired_SM1_InconsistentDir;
  kcg_bool noname;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::current_BG */ ReceivedBG_CheckBGInputChannel_Pkg _33_current_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::Expected_Balise */ kcg_int _34_Expected_Balise;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_ST_SM4_SM1_InconsistentDir _35_SM4_state_nxt_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ kcg_bool _36_SM4_reset_nxt_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::InconsistentDir::SM4 */ SSM_TR_SM4_SM1_InconsistentDir _37_SM4_fired_SM1_InconsistentDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _229_SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _228_SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _227_SM1_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ kcg_bool br_3_guard_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ kcg_bool br_2_guard_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::NominalDir */ kcg_bool br_1_guard_SM1_NominalDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _226_SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _225_SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _224_SM1_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir */ kcg_bool br_3_guard_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir */ kcg_bool br_2_guard_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::ReverseDir */ kcg_bool br_1_guard_SM1_ReverseDir;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 _223_SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool _222_SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 _221_SM1_state_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::No_BG */ kcg_bool br_2_guard_SM1_No_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1::No_BG */ kcg_bool br_1_guard_SM1_No_BG;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _5_SSM_TR_SM1 SM1_fired_strong;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ kcg_bool SM1_reset_act;
  /* CheckBGInputChannel_Pkg::Listen_on_BTM::SM1 */ _3_SSM_ST_SM1 SM1_state_act;
  T_internal_Type_Obu_BasicTypes_Pkg _244_noname;
  MsgSource_T_Common_Types_Pkg _245_noname;
  kcg_bool _246_noname;
  kcg_bool _247_noname;
  Q_UPDOWN _248_noname;
  M_DUP _249_noname;
  Q_LINK _250_noname;
  M_VERSION _251_noname;
  CompressedPackets_T_Common_Types_Pkg _252_noname;
  Q_MEDIA _253_noname;
  RadioMetadata_T_Common_Types_Pkg _254_noname;
  kcg_bool _255_noname;
  Radio_TrackTrain_Header_T_Radio_Types_Pkg _256_noname;
  kcg_bool _257_noname;
  LocWithInAcc_T_Obu_BasicTypes_Pkg _258_noname;
  odoMotionDirection_T_Obu_BasicTypes_Pkg _259_noname;
  A_internal_Type_Obu_BasicTypes_Pkg _260_noname;
  odoMotionState_T_Obu_BasicTypes_Pkg _261_noname;
  kcg_bool _262_noname;
  T_internal_Type_Obu_BasicTypes_Pkg _263_noname;
  OdometryLocations_T_Obu_BasicTypes_Pkg _264_noname;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg _265_noname;
  M_MCOUNT _266_noname;
  NID_C _267_noname;
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
  
  if (outC->init13) {
    outC->SM1_state_sel = SSM_st_No_BG_SM1;
  }
  else {
    outC->SM1_state_sel = outC->SM1_state_nxt;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_InconsistentDir_SM1 :
      SM1_state_act = SSM_st_InconsistentDir_SM1;
      break;
    
  }
  if (outC->init13) {
    last_BTM_valid = kcg_false;
  }
  else {
    last_BTM_valid = outC->BTM_valid;
  }
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(&outC->_L30, BTM_TrackMsg);
  /* 1 */
  Decop_Track_Msg_Subfunctions_CheckBGInput_Pkg(&outC->_L30, &outC->Context_1);
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
  /* 1 */ CAST_NID_BG_to_int_TM_conversions(outC->_L17, &outC->_2_Context_1);
  outC->_L32 = outC->_2_Context_1.nid_bg_int;
  outC->API_nid_bg = outC->_L32;
  if (outC->init13) {
    last_BG = 999;
  }
  else {
    last_BG = outC->BG;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_No_BG_SM1 :
      br_1_guard_SM1_No_BG = outC->BTM_valid & (outC->API_n_pig == 0) &
        (outC->API_nid_bg != last_BG);
      break;
    
  }
  /* 1 */ CAST_N_TOTAL_to_int_TM_conversions(outC->_L14, &outC->_3_Context_1);
  outC->_L33 = outC->_3_Context_1.n_total_int;
  outC->API_n_total = outC->_L33;
  switch (outC->SM1_state_sel) {
    case SSM_st_NominalDir_SM1 :
      br_1_guard_SM1_NominalDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig == 0);
      br_2_guard_SM1_NominalDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig == outC->API_n_total);
      br_3_guard_SM1_NominalDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig > 0) & (outC->API_n_pig <
          outC->API_n_total);
      if (br_1_guard_SM1_NominalDir) {
        _227_SM1_state_act = SSM_st_NominalDir_SM1;
      }
      else if (br_2_guard_SM1_NominalDir) {
        _227_SM1_state_act = SSM_st_ReverseDir_SM1;
      }
      else if (br_3_guard_SM1_NominalDir) {
        _227_SM1_state_act = SSM_st_InconsistentDir_SM1;
      }
      else {
        _227_SM1_state_act = SSM_st_NominalDir_SM1;
      }
      outC->SM1_state_act = _227_SM1_state_act;
      break;
    case SSM_st_ReverseDir_SM1 :
      br_1_guard_SM1_ReverseDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig == 0);
      br_2_guard_SM1_ReverseDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig == outC->API_n_total);
      br_3_guard_SM1_ReverseDir = outC->BTM_valid & (outC->API_nid_bg !=
          last_BG) & (outC->API_n_pig > 0) & (outC->API_n_pig <
          outC->API_n_total);
      if (br_1_guard_SM1_ReverseDir) {
        _224_SM1_state_act = SSM_st_NominalDir_SM1;
      }
      else if (br_2_guard_SM1_ReverseDir) {
        _224_SM1_state_act = SSM_st_ReverseDir_SM1;
      }
      else if (br_3_guard_SM1_ReverseDir) {
        _224_SM1_state_act = SSM_st_InconsistentDir_SM1;
      }
      else {
        _224_SM1_state_act = SSM_st_ReverseDir_SM1;
      }
      outC->SM1_state_act = _224_SM1_state_act;
      break;
    case SSM_st_No_BG_SM1 :
      br_2_guard_SM1_No_BG = outC->BTM_valid & (outC->API_n_pig ==
          outC->API_n_total) & (outC->API_nid_bg != last_BG);
      if (br_1_guard_SM1_No_BG) {
        _221_SM1_state_act = SSM_st_NominalDir_SM1;
      }
      else if (br_2_guard_SM1_No_BG) {
        _221_SM1_state_act = SSM_st_ReverseDir_SM1;
      }
      else {
        _221_SM1_state_act = SSM_st_No_BG_SM1;
      }
      outC->SM1_state_act = _221_SM1_state_act;
      break;
    case SSM_st_InconsistentDir_SM1 :
      outC->SM1_state_act = SM1_state_act;
      break;
    
  }
  if (outC->init13) {
    SM1_reset_prv = kcg_false;
  }
  else {
    SM1_reset_prv = outC->SM1_reset_act;
  }
  switch (outC->SM1_state_sel) {
    case SSM_st_NominalDir_SM1 :
      if (br_1_guard_SM1_NominalDir) {
        _228_SM1_reset_act = kcg_true;
      }
      else if (br_2_guard_SM1_NominalDir) {
        _228_SM1_reset_act = kcg_true;
      }
      else {
        _228_SM1_reset_act = br_3_guard_SM1_NominalDir;
      }
      outC->SM1_reset_act = _228_SM1_reset_act;
      break;
    case SSM_st_ReverseDir_SM1 :
      if (br_1_guard_SM1_ReverseDir) {
        _225_SM1_reset_act = kcg_true;
      }
      else if (br_2_guard_SM1_ReverseDir) {
        _225_SM1_reset_act = kcg_true;
      }
      else {
        _225_SM1_reset_act = br_3_guard_SM1_ReverseDir;
      }
      outC->SM1_reset_act = _225_SM1_reset_act;
      break;
    case SSM_st_No_BG_SM1 :
      if (br_1_guard_SM1_No_BG) {
        _222_SM1_reset_act = kcg_true;
      }
      else {
        _222_SM1_reset_act = br_2_guard_SM1_No_BG;
      }
      outC->SM1_reset_act = _222_SM1_reset_act;
      break;
    case SSM_st_InconsistentDir_SM1 :
      SM1_reset_act = kcg_false;
      outC->SM1_reset_act = SM1_reset_act;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_InconsistentDir_SM1 :
      if (outC->SM1_reset_act) {
        outC->init12 = kcg_true;
      }
      if (outC->init12) {
        outC->SM4_state_sel_SM1_InconsistentDir =
          SSM_st_FirstBalise_SM1_InconsistentDir_SM4;
      }
      else {
        outC->SM4_state_sel_SM1_InconsistentDir =
          outC->SM4_state_nxt_SM1_InconsistentDir;
      }
      outC->_14_SM4_clock_SM1_InconsistentDir =
        outC->SM4_state_sel_SM1_InconsistentDir;
      break;
    
  }
  outC->API_Msg_Present = outC->_L4;
  switch (outC->SM1_state_act) {
    case SSM_st_NominalDir_SM1 :
      if (outC->SM1_reset_act) {
        outC->init = kcg_true;
      }
      break;
    case SSM_st_ReverseDir_SM1 :
      if (outC->SM1_reset_act) {
        outC->init10 = kcg_true;
      }
      break;
    case SSM_st_InconsistentDir_SM1 :
      switch (outC->_14_SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          _268_br_1_guard_SM1_InconsistentDir_SM4_FirstBalise =
            !outC->API_Msg_Present;
          if (_268_br_1_guard_SM1_InconsistentDir_SM4_FirstBalise) {
            _38_SM4_state_act_SM1_InconsistentDir =
              SSM_st_Wait_SM1_InconsistentDir_SM4;
          }
          else {
            _38_SM4_state_act_SM1_InconsistentDir =
              SSM_st_FirstBalise_SM1_InconsistentDir_SM4;
          }
          outC->SM4_state_act_SM1_InconsistentDir =
            _38_SM4_state_act_SM1_InconsistentDir;
          break;
        case SSM_st_Wait_SM1_InconsistentDir_SM4 :
          br_1_guard_SM1_InconsistentDir_SM4_Wait = outC->API_Msg_Present;
          if (br_1_guard_SM1_InconsistentDir_SM4_Wait) {
            SM4_state_act_SM1_InconsistentDir =
              SSM_st_FirstBalise_SM1_InconsistentDir_SM4;
          }
          else {
            SM4_state_act_SM1_InconsistentDir =
              SSM_st_Wait_SM1_InconsistentDir_SM4;
          }
          outC->SM4_state_act_SM1_InconsistentDir =
            SM4_state_act_SM1_InconsistentDir;
          break;
        
      }
      outC->SM4_clock_SM1_InconsistentDir =
        outC->SM4_state_act_SM1_InconsistentDir;
      if (outC->init12) {
        SM4_reset_prv_SM1_InconsistentDir = kcg_false;
      }
      else {
        SM4_reset_prv_SM1_InconsistentDir =
          outC->SM4_reset_act_SM1_InconsistentDir;
      }
      switch (outC->_14_SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          _39_SM4_reset_act_SM1_InconsistentDir =
            _268_br_1_guard_SM1_InconsistentDir_SM4_FirstBalise;
          outC->SM4_reset_act_SM1_InconsistentDir =
            _39_SM4_reset_act_SM1_InconsistentDir;
          break;
        case SSM_st_Wait_SM1_InconsistentDir_SM4 :
          SM4_reset_act_SM1_InconsistentDir =
            br_1_guard_SM1_InconsistentDir_SM4_Wait;
          outC->SM4_reset_act_SM1_InconsistentDir =
            SM4_reset_act_SM1_InconsistentDir;
          break;
        
      }
      switch (outC->SM4_state_act_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          if (outC->SM4_reset_act_SM1_InconsistentDir) {
            outC->init11 = kcg_true;
          }
          break;
        
      }
      if (outC->SM1_reset_act) {
        outC->init11 = kcg_true;
      }
      break;
    
  }
  if (outC->init13) {
    last_Expected_Balise = 0;
  }
  else {
    last_Expected_Balise = outC->Expected_Balise;
  }
  if (outC->init13) {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_current_BG,
      (ReceivedBG_CheckBGInputChannel_Pkg *)
        &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_current_BG,
      &outC->current_BG);
  }
  if (outC->init13) {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
      &last_out_BG,
      (ReceivedBG_CheckBGInputChannel_Pkg *)
        &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&last_out_BG, &outC->out_BG);
  }
  if (outC->init13) {
    last_out_BG_complete = kcg_false;
  }
  else {
    last_out_BG_complete = outC->out_BG_complete;
  }
  if (outC->init13) {
    last_count_BTM_BGs = - 1;
  }
  else {
    last_count_BTM_BGs = outC->count_BTM_BGs;
  }
  if (outC->init13) {
    kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
      &last_out_Track_BGs,
      (ReceivedBGs_CheckBGInputChannel_Pkg *)
        &c_emptyReceivedBGs_CheckBGInputChannel_Pkg);
  }
  else {
    kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
      &last_out_Track_BGs,
      &outC->out_Track_BGs);
  }
  _267_noname = outC->_L16;
  _266_noname = outC->_L15;
  kcg_copy_OdometrySpeeds_T_Obu_BasicTypes_Pkg(&_265_noname, &outC->_L21);
  kcg_copy_OdometryLocations_T_Obu_BasicTypes_Pkg(&_264_noname, &outC->_L20);
  _263_noname = outC->_L19;
  _262_noname = outC->_L18;
  _261_noname = outC->_L23;
  _260_noname = outC->_L22;
  _259_noname = outC->_L24;
  kcg_copy_LocWithInAcc_T_Obu_BasicTypes_Pkg(&_258_noname, &outC->_L25);
  _257_noname = outC->_L26;
  kcg_copy_Radio_TrackTrain_Header_T_Radio_Types_Pkg(&_256_noname, &outC->_L28);
  _255_noname = outC->_L27;
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&_254_noname, &outC->_L29);
  _253_noname = outC->_L12;
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(&_252_noname, &outC->_L10);
  _251_noname = outC->_L11;
  _250_noname = outC->_L9;
  _249_noname = outC->_L8;
  _248_noname = outC->_L7;
  _247_noname = outC->_L6;
  _246_noname = outC->_L5;
  _245_noname = outC->_L3;
  _244_noname = outC->_L2;
  switch (outC->SM1_state_sel) {
    case SSM_st_NominalDir_SM1 :
      if (br_1_guard_SM1_NominalDir) {
        _229_SM1_fired_strong = SSM_TR_NominalDir_1_SM1;
      }
      else if (br_2_guard_SM1_NominalDir) {
        _229_SM1_fired_strong = SSM_TR_NominalDir_2_SM1;
      }
      else if (br_3_guard_SM1_NominalDir) {
        _229_SM1_fired_strong = SSM_TR_NominalDir_3_SM1;
      }
      else {
        _229_SM1_fired_strong = _4_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _229_SM1_fired_strong;
      break;
    case SSM_st_ReverseDir_SM1 :
      if (br_1_guard_SM1_ReverseDir) {
        _226_SM1_fired_strong = SSM_TR_ReverseDir_1_SM1;
      }
      else if (br_2_guard_SM1_ReverseDir) {
        _226_SM1_fired_strong = SSM_TR_ReverseDir_2_SM1;
      }
      else if (br_3_guard_SM1_ReverseDir) {
        _226_SM1_fired_strong = SSM_TR_ReverseDir_3_SM1;
      }
      else {
        _226_SM1_fired_strong = _4_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _226_SM1_fired_strong;
      break;
    case SSM_st_No_BG_SM1 :
      if (br_1_guard_SM1_No_BG) {
        _223_SM1_fired_strong = SSM_TR_No_BG_1_SM1;
      }
      else if (br_2_guard_SM1_No_BG) {
        _223_SM1_fired_strong = SSM_TR_No_BG_2_SM1;
      }
      else {
        _223_SM1_fired_strong = _4_SSM_TR_no_trans_SM1;
      }
      outC->SM1_fired_strong = _223_SM1_fired_strong;
      break;
    case SSM_st_InconsistentDir_SM1 :
      SM1_fired_strong = _4_SSM_TR_no_trans_SM1;
      outC->SM1_fired_strong = SM1_fired_strong;
      break;
    
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NominalDir_SM1 :
      outC->NominalDir_weakb_clock_SM1 = outC->SM1_fired_strong !=
        _4_SSM_TR_no_trans_SM1;
      if (outC->NominalDir_weakb_clock_SM1) {
        _136_SM1_fired = outC->SM1_fired_strong;
        _135_SM1_reset_nxt = kcg_false;
        _134_SM1_state_nxt = SSM_st_NominalDir_SM1;
      }
      if (outC->init) {
        outC->SM2_state_sel_SM1_NominalDir =
          SSM_st_FirstBalise_SM1_NominalDir_SM2;
      }
      else {
        outC->SM2_state_sel_SM1_NominalDir = outC->SM2_state_nxt_SM1_NominalDir;
      }
      outC->_16_SM2_clock_SM1_NominalDir = outC->SM2_state_sel_SM1_NominalDir;
      switch (outC->_16_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          _283_br_1_guard_SM1_NominalDir_SM2_FirstBalise =
            !outC->API_Msg_Present;
          _284_br_2_guard_SM1_NominalDir_SM2_FirstBalise = (outC->API_n_total ==
              0) & (outC->API_n_pig == 0);
          _285_br_3_guard_SM1_NominalDir_SM2_FirstBalise = (outC->API_n_total ==
              1) & (outC->API_n_pig == 1);
          br_4_guard_SM1_NominalDir_SM2_FirstBalise = (outC->API_n_pig == 1) &
            (outC->API_n_total > 1);
          if (_283_br_1_guard_SM1_NominalDir_SM2_FirstBalise) {
            _218_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_284_br_2_guard_SM1_NominalDir_SM2_FirstBalise) {
            _218_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (_285_br_3_guard_SM1_NominalDir_SM2_FirstBalise) {
            _218_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_FirstBalise) {
            _218_SM2_state_act_SM1_NominalDir =
              SSM_st_SecondBalise_SM1_NominalDir_SM2;
          }
          else {
            _218_SM2_state_act_SM1_NominalDir =
              SSM_st_FirstBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _218_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          _280_br_1_guard_SM1_NominalDir_SM2_SecondBalise =
            !outC->API_Msg_Present;
          _281_br_2_guard_SM1_NominalDir_SM2_SecondBalise =
            (outC->API_n_total == 2) & (outC->API_n_pig == 2);
          _282_br_3_guard_SM1_NominalDir_SM2_SecondBalise = (outC->API_n_pig ==
              2) & (outC->API_n_total > 2);
          if (_280_br_1_guard_SM1_NominalDir_SM2_SecondBalise) {
            _215_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_281_br_2_guard_SM1_NominalDir_SM2_SecondBalise) {
            _215_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (_282_br_3_guard_SM1_NominalDir_SM2_SecondBalise) {
            _215_SM2_state_act_SM1_NominalDir =
              SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          }
          else {
            _215_SM2_state_act_SM1_NominalDir =
              SSM_st_SecondBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _215_SM2_state_act_SM1_NominalDir;
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
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_FirstBalise_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_SecondBalise_SM1_NominalDir_SM2;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          }
          else if (br_5_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_FourthBalise_SM1_NominalDir_SM2;
          }
          else if (br_6_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_FifthBalise_SM1_NominalDir_SM2;
          }
          else if (br_7_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_SixthBalise_SM1_NominalDir_SM2;
          }
          else if (br_8_guard_SM1_NominalDir_SM2_Wait) {
            _212_SM2_state_act_SM1_NominalDir =
              SSM_st_SevensBalise_SM1_NominalDir_SM2;
          }
          else {
            _212_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _212_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_ThirdBalise = !outC->API_Msg_Present;
          br_2_guard_SM1_NominalDir_SM2_ThirdBalise = (outC->API_n_total == 3) &
            (outC->API_n_pig == 3);
          br_3_guard_SM1_NominalDir_SM2_ThirdBalise = (outC->API_n_pig == 3) &
            (outC->API_n_total > 3);
          if (br_1_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _209_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _209_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _209_SM2_state_act_SM1_NominalDir =
              SSM_st_FourthBalise_SM1_NominalDir_SM2;
          }
          else {
            _209_SM2_state_act_SM1_NominalDir =
              SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _209_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          _277_br_1_guard_SM1_NominalDir_SM2_FourthBalise =
            !outC->API_Msg_Present;
          _278_br_2_guard_SM1_NominalDir_SM2_FourthBalise =
            (outC->API_n_total == 4) & (outC->API_n_pig == 4);
          _279_br_3_guard_SM1_NominalDir_SM2_FourthBalise = (outC->API_n_pig ==
              4) & (outC->API_n_total > 4);
          if (_277_br_1_guard_SM1_NominalDir_SM2_FourthBalise) {
            _206_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_278_br_2_guard_SM1_NominalDir_SM2_FourthBalise) {
            _206_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (_279_br_3_guard_SM1_NominalDir_SM2_FourthBalise) {
            _206_SM2_state_act_SM1_NominalDir =
              SSM_st_FifthBalise_SM1_NominalDir_SM2;
          }
          else {
            _206_SM2_state_act_SM1_NominalDir =
              SSM_st_FourthBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _206_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_FifthBalise = !outC->API_Msg_Present;
          br_2_guard_SM1_NominalDir_SM2_FifthBalise = (outC->API_n_total == 5) &
            (outC->API_n_pig == 5);
          br_3_guard_SM1_NominalDir_SM2_FifthBalise = (outC->API_n_pig == 5) &
            (outC->API_n_total > 5);
          if (br_1_guard_SM1_NominalDir_SM2_FifthBalise) {
            _203_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_FifthBalise) {
            _203_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_FifthBalise) {
            _203_SM2_state_act_SM1_NominalDir =
              SSM_st_SixthBalise_SM1_NominalDir_SM2;
          }
          else {
            _203_SM2_state_act_SM1_NominalDir =
              SSM_st_FifthBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _203_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          _275_br_1_guard_SM1_NominalDir_SM2_SixthBalise =
            !outC->API_Msg_Present;
          _276_br_2_guard_SM1_NominalDir_SM2_SixthBalise = (outC->API_n_total ==
              6) & (outC->API_n_pig == 6);
          br_3_guard_SM1_NominalDir_SM2_SixthBalise = (outC->API_n_pig == 6) &
            (outC->API_n_total > 6);
          if (_275_br_1_guard_SM1_NominalDir_SM2_SixthBalise) {
            _200_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (_276_br_2_guard_SM1_NominalDir_SM2_SixthBalise) {
            _200_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_SixthBalise) {
            _200_SM2_state_act_SM1_NominalDir =
              SSM_st_SevensBalise_SM1_NominalDir_SM2;
          }
          else {
            _200_SM2_state_act_SM1_NominalDir =
              SSM_st_SixthBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _200_SM2_state_act_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          br_1_guard_SM1_NominalDir_SM2_SevensBalise = !outC->API_Msg_Present;
          br_2_guard_SM1_NominalDir_SM2_SevensBalise = (outC->API_n_total ==
              7) & (outC->API_n_pig == 7);
          if (br_1_guard_SM1_NominalDir_SM2_SevensBalise) {
            _197_SM2_state_act_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_SevensBalise) {
            _197_SM2_state_act_SM1_NominalDir =
              SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          }
          else {
            _197_SM2_state_act_SM1_NominalDir =
              SSM_st_SevensBalise_SM1_NominalDir_SM2;
          }
          outC->SM2_state_act_SM1_NominalDir =
            _197_SM2_state_act_SM1_NominalDir;
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
          _190_out_BG_complete = kcg_false;
          _23_out_BG_complete = _190_out_BG_complete;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          _183_out_BG_complete = kcg_false;
          _23_out_BG_complete = _183_out_BG_complete;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          _176_out_BG_complete = kcg_false;
          _23_out_BG_complete = _176_out_BG_complete;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          _169_out_BG_complete = kcg_false;
          _23_out_BG_complete = _169_out_BG_complete;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          _162_out_BG_complete = kcg_false;
          _23_out_BG_complete = _162_out_BG_complete;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          _155_out_BG_complete = kcg_false;
          _23_out_BG_complete = _155_out_BG_complete;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          _148_out_BG_complete = kcg_false;
          _23_out_BG_complete = _148_out_BG_complete;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          _141_out_BG_complete = kcg_false;
          _23_out_BG_complete = _141_out_BG_complete;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_LastBaliseinBG,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_NominalDir_SM2_LastBaliseinBG,
            &last_current_BG);
          outC->_L7_SM1_NominalDir_SM2_LastBaliseinBG = last_Expected_Balise;
          /* 16 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
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
          _137_out_BG_complete = outC->_L8_SM1_NominalDir_SM2_LastBaliseinBG;
          _23_out_BG_complete = _137_out_BG_complete;
          break;
        
      }
      if (outC->NominalDir_weakb_clock_SM1) {
        _30_SM1_fired = _136_SM1_fired;
        _29_SM1_reset_nxt = _135_SM1_reset_nxt;
        _28_SM1_state_nxt = _134_SM1_state_nxt;
      }
      else {
        br_4_guard_SM1_NominalDir = _23_out_BG_complete;
        if (br_4_guard_SM1_NominalDir) {
          _133_SM1_fired = SSM_TR_NominalDir_4_SM1;
        }
        else {
          _133_SM1_fired = _4_SSM_TR_no_trans_SM1;
        }
        _132_SM1_reset_nxt = br_4_guard_SM1_NominalDir;
        if (br_4_guard_SM1_NominalDir) {
          _131_SM1_state_nxt = SSM_st_No_BG_SM1;
        }
        else {
          _131_SM1_state_nxt = SSM_st_NominalDir_SM1;
        }
        _30_SM1_fired = _133_SM1_fired;
        _29_SM1_reset_nxt = _132_SM1_reset_nxt;
        _28_SM1_state_nxt = _131_SM1_state_nxt;
      }
      outC->_L42_SM1_NominalDir = last_BG;
      if (outC->init) {
        outC->_L43_SM1_NominalDir = outC->API_nid_bg;
      }
      else {
        outC->_L43_SM1_NominalDir = outC->_L42_SM1_NominalDir;
      }
      BG27 = outC->_L43_SM1_NominalDir;
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
      _22_count_BTM_BGs = outC->_L37_SM1_NominalDir;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L30_SM1_NominalDir,
        &last_out_Track_BGs);
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L20_SM1_NominalDir_SM2_FirstBalise,
            BTM_TrackMsg);
          /* InitConsBG */
          InitConsBG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L20_SM1_NominalDir_SM2_FirstBalise,
            &outC->Context_InitConsBG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L11_SM1_NominalDir_SM2_FirstBalise,
            &outC->Context_InitConsBG.out_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_192_current_BG,
            &outC->_L11_SM1_NominalDir_SM2_FirstBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_192_current_BG);
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L4_SM1_NominalDir_SM2_SecondBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_NominalDir_SM2_SecondBalise,
            &last_current_BG);
          outC->_L7_SM1_NominalDir_SM2_SecondBalise = last_Expected_Balise;
          /* 1 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
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
            &_185_current_BG,
            &outC->_L1_SM1_NominalDir_SM2_SecondBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_185_current_BG);
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_NominalDir_SM2_Wait,
            &last_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_178_current_BG,
            &outC->_L1_SM1_NominalDir_SM2_Wait);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_178_current_BG);
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_ThirdBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L8_SM1_NominalDir_SM2_ThirdBalise,
            &last_current_BG);
          outC->_L12_SM1_NominalDir_SM2_ThirdBalise = last_Expected_Balise;
          /* 5 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
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
            &_171_current_BG,
            &outC->_L6_SM1_NominalDir_SM2_ThirdBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_171_current_BG);
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L2_SM1_NominalDir_SM2_FourthBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_FourthBalise,
            &last_current_BG);
          outC->_L7_SM1_NominalDir_SM2_FourthBalise = last_Expected_Balise;
          /* 15 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
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
            &_164_current_BG,
            &outC->_L3_SM1_NominalDir_SM2_FourthBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_164_current_BG);
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L7_SM1_NominalDir_SM2_FifthBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_FifthBalise,
            &last_current_BG);
          outC->_L10_SM1_NominalDir_SM2_FifthBalise = last_Expected_Balise;
          /* 14 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
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
            &_157_current_BG,
            &outC->_L6_SM1_NominalDir_SM2_FifthBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_157_current_BG);
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L3_SM1_NominalDir_SM2_SixthBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L5_SM1_NominalDir_SM2_SixthBalise,
            &last_current_BG);
          outC->_L13_SM1_NominalDir_SM2_SixthBalise = last_Expected_Balise;
          /* 10 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
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
            &_150_current_BG,
            &outC->_L4_SM1_NominalDir_SM2_SixthBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_150_current_BG);
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L11_SM1_NominalDir_SM2_SevensBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L12_SM1_NominalDir_SM2_SevensBalise,
            &last_current_BG);
          outC->_L15_SM1_NominalDir_SM2_SevensBalise = last_Expected_Balise;
          /* 20 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L11_SM1_NominalDir_SM2_SevensBalise,
            &outC->_L12_SM1_NominalDir_SM2_SevensBalise,
            outC->_L15_SM1_NominalDir_SM2_SevensBalise,
            &outC->Context_20);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L10_SM1_NominalDir_SM2_SevensBalise,
            &outC->Context_20.out_BG);
          outC->_L13_SM1_NominalDir_SM2_SevensBalise =
            outC->Context_20.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_143_current_BG,
            &outC->_L10_SM1_NominalDir_SM2_SevensBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_143_current_BG);
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
            &_139_current_BG,
            &outC->_L9_SM1_NominalDir_SM2_LastBaliseinBG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_25_current_BG,
            &_139_current_BG);
          break;
        
      }
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->_L32_SM1_NominalDir,
        &_25_current_BG);
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L31_SM1_NominalDir,
        &outC->_L30_SM1_NominalDir);
      if ((0 <= outC->_L37_SM1_NominalDir) & (outC->_L37_SM1_NominalDir < 10)) {
        kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
          &outC->_L31_SM1_NominalDir[outC->_L37_SM1_NominalDir],
          &outC->_L32_SM1_NominalDir);
      }
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &_21_out_Track_BGs,
        &outC->_L31_SM1_NominalDir);
      switch (outC->SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_191_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          break;
        
      }
      switch (outC->_16_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          if (_283_br_1_guard_SM1_NominalDir_SM2_FirstBalise) {
            _220_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_1_SM2_SM1_NominalDir;
          }
          else if (_284_br_2_guard_SM1_NominalDir_SM2_FirstBalise) {
            _220_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_2_SM2_SM1_NominalDir;
          }
          else if (_285_br_3_guard_SM1_NominalDir_SM2_FirstBalise) {
            _220_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_3_SM2_SM1_NominalDir;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_FirstBalise) {
            _220_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FirstBalise_4_SM2_SM1_NominalDir;
          }
          else {
            _220_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _220_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          if (_280_br_1_guard_SM1_NominalDir_SM2_SecondBalise) {
            _217_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SecondBalise_1_SM2_SM1_NominalDir;
          }
          else if (_281_br_2_guard_SM1_NominalDir_SM2_SecondBalise) {
            _217_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SecondBalise_2_SM2_SM1_NominalDir;
          }
          else if (_282_br_3_guard_SM1_NominalDir_SM2_SecondBalise) {
            _217_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SecondBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _217_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _217_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_3_SM2_SM1_NominalDir;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_4_SM2_SM1_NominalDir;
          }
          else if (br_5_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_5_SM2_SM1_NominalDir;
          }
          else if (br_6_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_6_SM2_SM1_NominalDir;
          }
          else if (br_7_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_7_SM2_SM1_NominalDir;
          }
          else if (br_8_guard_SM1_NominalDir_SM2_Wait) {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_Wait_8_SM2_SM1_NominalDir;
          }
          else {
            _214_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _214_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _211_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _211_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _211_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _211_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _211_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          if (_277_br_1_guard_SM1_NominalDir_SM2_FourthBalise) {
            _208_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FourthBalise_1_SM2_SM1_NominalDir;
          }
          else if (_278_br_2_guard_SM1_NominalDir_SM2_FourthBalise) {
            _208_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FourthBalise_2_SM2_SM1_NominalDir;
          }
          else if (_279_br_3_guard_SM1_NominalDir_SM2_FourthBalise) {
            _208_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FourthBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _208_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _208_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_FifthBalise) {
            _205_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FifthBalise_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_FifthBalise) {
            _205_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FifthBalise_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_FifthBalise) {
            _205_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_FifthBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _205_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _205_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          if (_275_br_1_guard_SM1_NominalDir_SM2_SixthBalise) {
            _202_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SixthBalise_1_SM2_SM1_NominalDir;
          }
          else if (_276_br_2_guard_SM1_NominalDir_SM2_SixthBalise) {
            _202_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SixthBalise_2_SM2_SM1_NominalDir;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_SixthBalise) {
            _202_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SixthBalise_3_SM2_SM1_NominalDir;
          }
          else {
            _202_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _202_SM2_fired_strong_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_SevensBalise) {
            _199_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SevensBalise_1_SM2_SM1_NominalDir;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_SevensBalise) {
            _199_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_SevensBalise_2_SM2_SM1_NominalDir;
          }
          else {
            _199_SM2_fired_strong_SM1_NominalDir =
              SSM_TR_no_trans_SM2_SM1_NominalDir;
          }
          outC->SM2_fired_strong_SM1_NominalDir =
            _199_SM2_fired_strong_SM1_NominalDir;
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
          _196_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _195_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _194_SM2_state_nxt_SM1_NominalDir =
            SSM_st_FirstBalise_SM1_NominalDir_SM2;
          outC->_L22_SM1_NominalDir_SM2_FirstBalise = 1;
          _193_Expected_Balise = outC->_L22_SM1_NominalDir_SM2_FirstBalise;
          outC->SM2_fired_SM1_NominalDir = _196_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_184_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _189_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _188_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _187_SM2_state_nxt_SM1_NominalDir =
            SSM_st_SecondBalise_SM1_NominalDir_SM2;
          _243_noname = outC->_L6_SM1_NominalDir_SM2_SecondBalise;
          outC->_L5_SM1_NominalDir_SM2_SecondBalise = 2;
          _186_Expected_Balise = outC->_L5_SM1_NominalDir_SM2_SecondBalise;
          outC->SM2_fired_SM1_NominalDir = _189_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_177_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _182_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _181_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _180_SM2_state_nxt_SM1_NominalDir = SSM_st_Wait_SM1_NominalDir_SM2;
          outC->_L4_SM1_NominalDir_SM2_Wait = last_Expected_Balise;
          _179_Expected_Balise = outC->_L4_SM1_NominalDir_SM2_Wait;
          outC->SM2_fired_SM1_NominalDir = _182_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_170_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _175_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _174_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _173_SM2_state_nxt_SM1_NominalDir =
            SSM_st_ThirdBalise_SM1_NominalDir_SM2;
          _242_noname = outC->_L10_SM1_NominalDir_SM2_ThirdBalise;
          outC->_L9_SM1_NominalDir_SM2_ThirdBalise = 3;
          _172_Expected_Balise = outC->_L9_SM1_NominalDir_SM2_ThirdBalise;
          outC->SM2_fired_SM1_NominalDir = _175_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_163_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _168_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _167_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _166_SM2_state_nxt_SM1_NominalDir =
            SSM_st_FourthBalise_SM1_NominalDir_SM2;
          _241_noname = outC->_L6_SM1_NominalDir_SM2_FourthBalise;
          outC->_L4_SM1_NominalDir_SM2_FourthBalise = 4;
          _165_Expected_Balise = outC->_L4_SM1_NominalDir_SM2_FourthBalise;
          outC->SM2_fired_SM1_NominalDir = _168_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_156_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _161_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _160_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _159_SM2_state_nxt_SM1_NominalDir =
            SSM_st_FifthBalise_SM1_NominalDir_SM2;
          _240_noname = outC->_L9_SM1_NominalDir_SM2_FifthBalise;
          outC->_L8_SM1_NominalDir_SM2_FifthBalise = 5;
          _158_Expected_Balise = outC->_L8_SM1_NominalDir_SM2_FifthBalise;
          outC->SM2_fired_SM1_NominalDir = _161_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_149_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _154_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _153_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _152_SM2_state_nxt_SM1_NominalDir =
            SSM_st_SixthBalise_SM1_NominalDir_SM2;
          _239_noname = outC->_L12_SM1_NominalDir_SM2_SixthBalise;
          outC->_L2_SM1_NominalDir_SM2_SixthBalise = 6;
          _151_Expected_Balise = outC->_L2_SM1_NominalDir_SM2_SixthBalise;
          outC->SM2_fired_SM1_NominalDir = _154_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_142_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _147_SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          _146_SM2_reset_nxt_SM1_NominalDir = kcg_false;
          _145_SM2_state_nxt_SM1_NominalDir =
            SSM_st_SevensBalise_SM1_NominalDir_SM2;
          _238_noname = outC->_L13_SM1_NominalDir_SM2_SevensBalise;
          outC->_L6_SM1_NominalDir_SM2_SevensBalise = 7;
          _144_Expected_Balise = outC->_L6_SM1_NominalDir_SM2_SevensBalise;
          outC->SM2_fired_SM1_NominalDir = _147_SM2_fired_SM1_NominalDir;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          _140_Expected_Balise = last_Expected_Balise;
          SM2_fired_SM1_NominalDir = outC->SM2_fired_strong_SM1_NominalDir;
          SM2_reset_nxt_SM1_NominalDir = kcg_false;
          SM2_state_nxt_SM1_NominalDir =
            SSM_st_LastBaliseinBG_SM1_NominalDir_SM2;
          _237_noname = outC->_L6_SM1_NominalDir_SM2_LastBaliseinBG;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_138_out_BG,
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
          outC->SM2_reset_nxt_SM1_NominalDir =
            _195_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _194_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _193_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_191_out_BG);
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _188_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _187_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _186_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_184_out_BG);
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _181_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _180_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _179_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_177_out_BG);
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _174_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _173_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _172_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_170_out_BG);
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _167_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _166_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _165_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_163_out_BG);
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _160_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _159_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _158_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_156_out_BG);
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _153_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _152_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _151_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_149_out_BG);
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir =
            _146_SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir =
            _145_SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _144_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_142_out_BG);
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          outC->SM2_reset_nxt_SM1_NominalDir = SM2_reset_nxt_SM1_NominalDir;
          outC->SM2_state_nxt_SM1_NominalDir = SM2_state_nxt_SM1_NominalDir;
          _26_Expected_Balise = _140_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_24_out_BG,
            &_138_out_BG);
          break;
        
      }
      switch (outC->_16_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          if (_283_br_1_guard_SM1_NominalDir_SM2_FirstBalise) {
            _219_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_284_br_2_guard_SM1_NominalDir_SM2_FirstBalise) {
            _219_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_285_br_3_guard_SM1_NominalDir_SM2_FirstBalise) {
            _219_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _219_SM2_reset_act_SM1_NominalDir =
              br_4_guard_SM1_NominalDir_SM2_FirstBalise;
          }
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          if (_280_br_1_guard_SM1_NominalDir_SM2_SecondBalise) {
            _216_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_281_br_2_guard_SM1_NominalDir_SM2_SecondBalise) {
            _216_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _216_SM2_reset_act_SM1_NominalDir =
              _282_br_3_guard_SM1_NominalDir_SM2_SecondBalise;
          }
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_3_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_4_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_5_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_6_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_7_guard_SM1_NominalDir_SM2_Wait) {
            _213_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _213_SM2_reset_act_SM1_NominalDir =
              br_8_guard_SM1_NominalDir_SM2_Wait;
          }
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _210_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_ThirdBalise) {
            _210_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _210_SM2_reset_act_SM1_NominalDir =
              br_3_guard_SM1_NominalDir_SM2_ThirdBalise;
          }
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          if (_277_br_1_guard_SM1_NominalDir_SM2_FourthBalise) {
            _207_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_278_br_2_guard_SM1_NominalDir_SM2_FourthBalise) {
            _207_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _207_SM2_reset_act_SM1_NominalDir =
              _279_br_3_guard_SM1_NominalDir_SM2_FourthBalise;
          }
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_FifthBalise) {
            _204_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (br_2_guard_SM1_NominalDir_SM2_FifthBalise) {
            _204_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _204_SM2_reset_act_SM1_NominalDir =
              br_3_guard_SM1_NominalDir_SM2_FifthBalise;
          }
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          if (_275_br_1_guard_SM1_NominalDir_SM2_SixthBalise) {
            _201_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else if (_276_br_2_guard_SM1_NominalDir_SM2_SixthBalise) {
            _201_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _201_SM2_reset_act_SM1_NominalDir =
              br_3_guard_SM1_NominalDir_SM2_SixthBalise;
          }
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          if (br_1_guard_SM1_NominalDir_SM2_SevensBalise) {
            _198_SM2_reset_act_SM1_NominalDir = kcg_true;
          }
          else {
            _198_SM2_reset_act_SM1_NominalDir =
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
      switch (outC->_16_SM2_clock_SM1_NominalDir) {
        case SSM_st_FirstBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _219_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_SecondBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _216_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_Wait_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _213_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_ThirdBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _210_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_FourthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _207_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_FifthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _204_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_SixthBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _201_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_SevensBalise_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir =
            _198_SM2_reset_act_SM1_NominalDir;
          break;
        case SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 :
          outC->SM2_reset_act_SM1_NominalDir = SM2_reset_act_SM1_NominalDir;
          break;
        
      }
      outC->SM1_fired = _30_SM1_fired;
      break;
    case SSM_st_ReverseDir_SM1 :
      outC->ReverseDir_weakb_clock_SM1 = outC->SM1_fired_strong !=
        _4_SSM_TR_no_trans_SM1;
      if (outC->ReverseDir_weakb_clock_SM1) {
        _46_SM1_fired = outC->SM1_fired_strong;
        _45_SM1_reset_nxt = kcg_false;
        _44_SM1_state_nxt = SSM_st_ReverseDir_SM1;
      }
      if (outC->init10) {
        outC->SM3_state_sel_SM1_ReverseDir =
          SSM_st_LastBalise_SM1_ReverseDir_SM3;
      }
      else {
        outC->SM3_state_sel_SM1_ReverseDir = outC->SM3_state_nxt_SM1_ReverseDir;
      }
      outC->_15_SM3_clock_SM1_ReverseDir = outC->SM3_state_sel_SM1_ReverseDir;
      switch (outC->_15_SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          br_1_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 6) &
            (outC->API_n_total > 6);
          br_2_guard_SM1_ReverseDir_SM3_LastBalise = !outC->API_Msg_Present;
          br_3_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 5) &
            (outC->API_n_total > 5);
          br_4_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 4) &
            (outC->API_n_total > 4);
          br_5_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 3) &
            (outC->API_n_total > 3);
          br_6_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 2) &
            (outC->API_n_total > 2);
          br_7_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 1) &
            (outC->API_n_total > 1);
          br_8_guard_SM1_ReverseDir_SM3_LastBalise = (outC->API_n_pig == 0) &
            (outC->API_n_total > 0);
          if (br_1_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_SeventhBalise_SM1_ReverseDir_SM3;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else if (br_3_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_SixthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_4_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_FifthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_5_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_FourthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_6_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_ThirdBalise_SM1_ReverseDir_SM3;
          }
          else if (br_7_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_SecondBalise_SM1_ReverseDir_SM3;
          }
          else if (br_8_guard_SM1_ReverseDir_SM3_LastBalise) {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_FirstBalise_SM1_ReverseDir_SM3;
          }
          else {
            _128_SM3_state_act_SM1_ReverseDir =
              SSM_st_LastBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _128_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          _273_br_1_guard_SM1_ReverseDir_SM3_SecondBalise = outC->API_n_pig ==
            0;
          _274_br_2_guard_SM1_ReverseDir_SM3_SecondBalise =
            !outC->API_Msg_Present;
          if (_273_br_1_guard_SM1_ReverseDir_SM3_SecondBalise) {
            _125_SM3_state_act_SM1_ReverseDir =
              SSM_st_FirstBalise_SM1_ReverseDir_SM3;
          }
          else if (_274_br_2_guard_SM1_ReverseDir_SM3_SecondBalise) {
            _125_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else {
            _125_SM3_state_act_SM1_ReverseDir =
              SSM_st_SecondBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _125_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          br_1_guard_SM1_ReverseDir_SM3_ThirdBalise = outC->API_n_pig == 1;
          br_2_guard_SM1_ReverseDir_SM3_ThirdBalise = !outC->API_Msg_Present;
          if (br_1_guard_SM1_ReverseDir_SM3_ThirdBalise) {
            _122_SM3_state_act_SM1_ReverseDir =
              SSM_st_SecondBalise_SM1_ReverseDir_SM3;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_ThirdBalise) {
            _122_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else {
            _122_SM3_state_act_SM1_ReverseDir =
              SSM_st_ThirdBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _122_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          _271_br_1_guard_SM1_ReverseDir_SM3_FourthBalise = outC->API_n_pig ==
            2;
          _272_br_2_guard_SM1_ReverseDir_SM3_FourthBalise =
            !outC->API_Msg_Present;
          if (_271_br_1_guard_SM1_ReverseDir_SM3_FourthBalise) {
            _119_SM3_state_act_SM1_ReverseDir =
              SSM_st_ThirdBalise_SM1_ReverseDir_SM3;
          }
          else if (_272_br_2_guard_SM1_ReverseDir_SM3_FourthBalise) {
            _119_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else {
            _119_SM3_state_act_SM1_ReverseDir =
              SSM_st_FourthBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _119_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          br_1_guard_SM1_ReverseDir_SM3_FifthBalise = outC->API_n_pig == 3;
          br_2_guard_SM1_ReverseDir_SM3_FifthBalise = !outC->API_Msg_Present;
          if (br_1_guard_SM1_ReverseDir_SM3_FifthBalise) {
            _116_SM3_state_act_SM1_ReverseDir =
              SSM_st_FourthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_FifthBalise) {
            _116_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else {
            _116_SM3_state_act_SM1_ReverseDir =
              SSM_st_FifthBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _116_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          br_1_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 6;
          br_2_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 5;
          br_3_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 0;
          br_4_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 4;
          br_5_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 3;
          br_6_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 2;
          br_7_guard_SM1_ReverseDir_SM3_Wait = outC->API_n_pig == 1;
          if (br_1_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_SeventhBalise_SM1_ReverseDir_SM3;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_SixthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_3_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_FirstBalise_SM1_ReverseDir_SM3;
          }
          else if (br_4_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_FifthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_5_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_FourthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_6_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_ThirdBalise_SM1_ReverseDir_SM3;
          }
          else if (br_7_guard_SM1_ReverseDir_SM3_Wait) {
            _113_SM3_state_act_SM1_ReverseDir =
              SSM_st_SecondBalise_SM1_ReverseDir_SM3;
          }
          else {
            _113_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _113_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          _269_br_1_guard_SM1_ReverseDir_SM3_SixthBalise = outC->API_n_pig == 4;
          _270_br_2_guard_SM1_ReverseDir_SM3_SixthBalise =
            !outC->API_Msg_Present;
          if (_269_br_1_guard_SM1_ReverseDir_SM3_SixthBalise) {
            _110_SM3_state_act_SM1_ReverseDir =
              SSM_st_FifthBalise_SM1_ReverseDir_SM3;
          }
          else if (_270_br_2_guard_SM1_ReverseDir_SM3_SixthBalise) {
            _110_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else {
            _110_SM3_state_act_SM1_ReverseDir =
              SSM_st_SixthBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _110_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          br_1_guard_SM1_ReverseDir_SM3_SeventhBalise = outC->API_n_pig == 5;
          br_2_guard_SM1_ReverseDir_SM3_SeventhBalise = !outC->API_Msg_Present;
          if (br_1_guard_SM1_ReverseDir_SM3_SeventhBalise) {
            _107_SM3_state_act_SM1_ReverseDir =
              SSM_st_SixthBalise_SM1_ReverseDir_SM3;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_SeventhBalise) {
            _107_SM3_state_act_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          }
          else {
            _107_SM3_state_act_SM1_ReverseDir =
              SSM_st_SeventhBalise_SM1_ReverseDir_SM3;
          }
          outC->SM3_state_act_SM1_ReverseDir =
            _107_SM3_state_act_SM1_ReverseDir;
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          SM3_state_act_SM1_ReverseDir = SSM_st_FirstBalise_SM1_ReverseDir_SM3;
          outC->SM3_state_act_SM1_ReverseDir = SM3_state_act_SM1_ReverseDir;
          break;
        
      }
      outC->SM3_clock_SM1_ReverseDir = outC->SM3_state_act_SM1_ReverseDir;
      switch (outC->SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          _100_out_BG_complete = kcg_false;
          _13_out_BG_complete = _100_out_BG_complete;
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          _93_out_BG_complete = kcg_false;
          _13_out_BG_complete = _93_out_BG_complete;
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          _86_out_BG_complete = kcg_false;
          _13_out_BG_complete = _86_out_BG_complete;
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          _79_out_BG_complete = kcg_false;
          _13_out_BG_complete = _79_out_BG_complete;
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          _72_out_BG_complete = kcg_false;
          _13_out_BG_complete = _72_out_BG_complete;
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          _65_out_BG_complete = kcg_false;
          _13_out_BG_complete = _65_out_BG_complete;
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          _58_out_BG_complete = kcg_false;
          _13_out_BG_complete = _58_out_BG_complete;
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          _51_out_BG_complete = kcg_false;
          _13_out_BG_complete = _51_out_BG_complete;
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L7_SM1_ReverseDir_SM3_FirstBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_ReverseDir_SM3_FirstBalise,
            &last_current_BG);
          outC->_L3_SM1_ReverseDir_SM3_FirstBalise = last_Expected_Balise;
          /* 1 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L7_SM1_ReverseDir_SM3_FirstBalise,
            &outC->_L1_SM1_ReverseDir_SM3_FirstBalise,
            outC->_L3_SM1_ReverseDir_SM3_FirstBalise,
            &outC->_5_Context_1);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L8_SM1_ReverseDir_SM3_FirstBalise,
            &outC->_5_Context_1.out_BG);
          outC->_L9_SM1_ReverseDir_SM3_FirstBalise =
            outC->_5_Context_1.Warning_unexspected_Balise;
          outC->_L6_SM1_ReverseDir_SM3_FirstBalise =
            outC->_L8_SM1_ReverseDir_SM3_FirstBalise.complete;
          _47_out_BG_complete = outC->_L6_SM1_ReverseDir_SM3_FirstBalise;
          _13_out_BG_complete = _47_out_BG_complete;
          break;
        
      }
      if (outC->ReverseDir_weakb_clock_SM1) {
        _20_SM1_fired = _46_SM1_fired;
        _19_SM1_reset_nxt = _45_SM1_reset_nxt;
        _18_SM1_state_nxt = _44_SM1_state_nxt;
      }
      else {
        br_4_guard_SM1_ReverseDir = _13_out_BG_complete;
        if (br_4_guard_SM1_ReverseDir) {
          _43_SM1_fired = SSM_TR_ReverseDir_4_SM1;
        }
        else {
          _43_SM1_fired = _4_SSM_TR_no_trans_SM1;
        }
        _42_SM1_reset_nxt = br_4_guard_SM1_ReverseDir;
        if (br_4_guard_SM1_ReverseDir) {
          _41_SM1_state_nxt = SSM_st_No_BG_SM1;
        }
        else {
          _41_SM1_state_nxt = SSM_st_ReverseDir_SM1;
        }
        _20_SM1_fired = _43_SM1_fired;
        _19_SM1_reset_nxt = _42_SM1_reset_nxt;
        _18_SM1_state_nxt = _41_SM1_state_nxt;
      }
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L17_SM1_ReverseDir,
        &last_out_Track_BGs);
      switch (outC->SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_101_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          break;
        
      }
      switch (outC->_15_SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_1_SM3_SM1_ReverseDir;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_2_SM3_SM1_ReverseDir;
          }
          else if (br_3_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_3_SM3_SM1_ReverseDir;
          }
          else if (br_4_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_4_SM3_SM1_ReverseDir;
          }
          else if (br_5_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_5_SM3_SM1_ReverseDir;
          }
          else if (br_6_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_6_SM3_SM1_ReverseDir;
          }
          else if (br_7_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_7_SM3_SM1_ReverseDir;
          }
          else if (br_8_guard_SM1_ReverseDir_SM3_LastBalise) {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_LastBalise_8_SM3_SM1_ReverseDir;
          }
          else {
            _130_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _130_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          if (_273_br_1_guard_SM1_ReverseDir_SM3_SecondBalise) {
            _127_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_SecondBalise_1_SM3_SM1_ReverseDir;
          }
          else if (_274_br_2_guard_SM1_ReverseDir_SM3_SecondBalise) {
            _127_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_SecondBalise_2_SM3_SM1_ReverseDir;
          }
          else {
            _127_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _127_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_ThirdBalise) {
            _124_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_ThirdBalise_1_SM3_SM1_ReverseDir;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_ThirdBalise) {
            _124_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_ThirdBalise_2_SM3_SM1_ReverseDir;
          }
          else {
            _124_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _124_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          if (_271_br_1_guard_SM1_ReverseDir_SM3_FourthBalise) {
            _121_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_FourthBalise_1_SM3_SM1_ReverseDir;
          }
          else if (_272_br_2_guard_SM1_ReverseDir_SM3_FourthBalise) {
            _121_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_FourthBalise_2_SM3_SM1_ReverseDir;
          }
          else {
            _121_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _121_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_FifthBalise) {
            _118_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_FifthBalise_1_SM3_SM1_ReverseDir;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_FifthBalise) {
            _118_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_FifthBalise_2_SM3_SM1_ReverseDir;
          }
          else {
            _118_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _118_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_1_SM3_SM1_ReverseDir;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_2_SM3_SM1_ReverseDir;
          }
          else if (br_3_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_3_SM3_SM1_ReverseDir;
          }
          else if (br_4_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_4_SM3_SM1_ReverseDir;
          }
          else if (br_5_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_5_SM3_SM1_ReverseDir;
          }
          else if (br_6_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_6_SM3_SM1_ReverseDir;
          }
          else if (br_7_guard_SM1_ReverseDir_SM3_Wait) {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_Wait_7_SM3_SM1_ReverseDir;
          }
          else {
            _115_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _115_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          if (_269_br_1_guard_SM1_ReverseDir_SM3_SixthBalise) {
            _112_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_SixthBalise_1_SM3_SM1_ReverseDir;
          }
          else if (_270_br_2_guard_SM1_ReverseDir_SM3_SixthBalise) {
            _112_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_SixthBalise_2_SM3_SM1_ReverseDir;
          }
          else {
            _112_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _112_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_SeventhBalise) {
            _109_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_SeventhBalise_1_SM3_SM1_ReverseDir;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_SeventhBalise) {
            _109_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_SeventhBalise_2_SM3_SM1_ReverseDir;
          }
          else {
            _109_SM3_fired_strong_SM1_ReverseDir =
              SSM_TR_no_trans_SM3_SM1_ReverseDir;
          }
          outC->SM3_fired_strong_SM1_ReverseDir =
            _109_SM3_fired_strong_SM1_ReverseDir;
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          SM3_fired_strong_SM1_ReverseDir = SSM_TR_no_trans_SM3_SM1_ReverseDir;
          outC->SM3_fired_strong_SM1_ReverseDir =
            SM3_fired_strong_SM1_ReverseDir;
          break;
        
      }
      switch (outC->SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          _106_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _105_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _104_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_LastBalise_SM1_ReverseDir_SM3;
          outC->_L9_SM1_ReverseDir_SM3_LastBalise = outC->API_n_total;
          outC->_L8_SM1_ReverseDir_SM3_LastBalise = 1;
          outC->_L7_SM1_ReverseDir_SM3_LastBalise =
            outC->_L9_SM1_ReverseDir_SM3_LastBalise -
            outC->_L8_SM1_ReverseDir_SM3_LastBalise;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L5_SM1_ReverseDir_SM3_LastBalise,
            BTM_TrackMsg);
          _103_Expected_Balise = outC->_L7_SM1_ReverseDir_SM3_LastBalise;
          /* 4 */
          InitConsBG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L5_SM1_ReverseDir_SM3_LastBalise,
            &outC->Context_4);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_LastBalise,
            &outC->Context_4.out_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_102_current_BG,
            &outC->_L4_SM1_ReverseDir_SM3_LastBalise);
          outC->SM3_fired_SM1_ReverseDir = _106_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_94_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _99_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _98_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _97_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_SecondBalise_SM1_ReverseDir_SM3;
          outC->_L9_SM1_ReverseDir_SM3_SecondBalise = 0;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_SecondBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_ReverseDir_SM3_SecondBalise,
            &last_current_BG);
          outC->_L3_SM1_ReverseDir_SM3_SecondBalise = last_Expected_Balise;
          /* 2 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_SecondBalise,
            &outC->_L1_SM1_ReverseDir_SM3_SecondBalise,
            outC->_L3_SM1_ReverseDir_SM3_SecondBalise,
            &outC->Context_2);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L7_SM1_ReverseDir_SM3_SecondBalise,
            &outC->Context_2.out_BG);
          outC->_L8_SM1_ReverseDir_SM3_SecondBalise =
            outC->Context_2.Warning_unexspected_Balise;
          _236_noname = outC->_L8_SM1_ReverseDir_SM3_SecondBalise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_95_current_BG,
            &outC->_L7_SM1_ReverseDir_SM3_SecondBalise);
          _96_Expected_Balise = outC->_L9_SM1_ReverseDir_SM3_SecondBalise;
          outC->SM3_fired_SM1_ReverseDir = _99_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_87_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _92_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _91_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _90_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_ThirdBalise_SM1_ReverseDir_SM3;
          outC->_L6_SM1_ReverseDir_SM3_ThirdBalise = 1;
          outC->_L5_SM1_ReverseDir_SM3_ThirdBalise = last_Expected_Balise;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L1_SM1_ReverseDir_SM3_ThirdBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_ReverseDir_SM3_ThirdBalise,
            &last_current_BG);
          /* 5 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L1_SM1_ReverseDir_SM3_ThirdBalise,
            &outC->_L2_SM1_ReverseDir_SM3_ThirdBalise,
            outC->_L5_SM1_ReverseDir_SM3_ThirdBalise,
            &outC->_6_Context_5);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L3_SM1_ReverseDir_SM3_ThirdBalise,
            &outC->_6_Context_5.out_BG);
          outC->_L4_SM1_ReverseDir_SM3_ThirdBalise =
            outC->_6_Context_5.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_88_current_BG,
            &outC->_L3_SM1_ReverseDir_SM3_ThirdBalise);
          _235_noname = outC->_L4_SM1_ReverseDir_SM3_ThirdBalise;
          _89_Expected_Balise = outC->_L6_SM1_ReverseDir_SM3_ThirdBalise;
          outC->SM3_fired_SM1_ReverseDir = _92_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_80_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _85_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _84_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _83_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_FourthBalise_SM1_ReverseDir_SM3;
          outC->_L6_SM1_ReverseDir_SM3_FourthBalise = last_Expected_Balise;
          outC->_L5_SM1_ReverseDir_SM3_FourthBalise = 2;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_FourthBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_ReverseDir_SM3_FourthBalise,
            &last_current_BG);
          /* 6 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_FourthBalise,
            &outC->_L1_SM1_ReverseDir_SM3_FourthBalise,
            outC->_L6_SM1_ReverseDir_SM3_FourthBalise,
            &outC->Context_6);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_ReverseDir_SM3_FourthBalise,
            &outC->Context_6.out_BG);
          outC->_L3_SM1_ReverseDir_SM3_FourthBalise =
            outC->Context_6.Warning_unexspected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_81_current_BG,
            &outC->_L2_SM1_ReverseDir_SM3_FourthBalise);
          _234_noname = outC->_L3_SM1_ReverseDir_SM3_FourthBalise;
          _82_Expected_Balise = outC->_L5_SM1_ReverseDir_SM3_FourthBalise;
          outC->SM3_fired_SM1_ReverseDir = _85_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_73_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _78_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _77_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _76_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_FifthBalise_SM1_ReverseDir_SM3;
          outC->_L6_SM1_ReverseDir_SM3_FifthBalise = 3;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L3_SM1_ReverseDir_SM3_FifthBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_ReverseDir_SM3_FifthBalise,
            &last_current_BG);
          outC->_L1_SM1_ReverseDir_SM3_FifthBalise = last_Expected_Balise;
          /* 8 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L3_SM1_ReverseDir_SM3_FifthBalise,
            &outC->_L2_SM1_ReverseDir_SM3_FifthBalise,
            outC->_L1_SM1_ReverseDir_SM3_FifthBalise,
            &outC->Context_8);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_FifthBalise,
            &outC->Context_8.out_BG);
          outC->_L5_SM1_ReverseDir_SM3_FifthBalise =
            outC->Context_8.Warning_unexspected_Balise;
          _233_noname = outC->_L5_SM1_ReverseDir_SM3_FifthBalise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_74_current_BG,
            &outC->_L4_SM1_ReverseDir_SM3_FifthBalise);
          _75_Expected_Balise = outC->_L6_SM1_ReverseDir_SM3_FifthBalise;
          outC->SM3_fired_SM1_ReverseDir = _78_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_66_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _71_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _70_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _69_SM3_state_nxt_SM1_ReverseDir = SSM_st_Wait_SM1_ReverseDir_SM3;
          outC->_L2_SM1_ReverseDir_SM3_Wait = last_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_ReverseDir_SM3_Wait,
            &last_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_67_current_BG,
            &outC->_L1_SM1_ReverseDir_SM3_Wait);
          _68_Expected_Balise = outC->_L2_SM1_ReverseDir_SM3_Wait;
          outC->SM3_fired_SM1_ReverseDir = _71_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_59_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _64_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _63_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _62_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_SixthBalise_SM1_ReverseDir_SM3;
          outC->_L6_SM1_ReverseDir_SM3_SixthBalise = 4;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L2_SM1_ReverseDir_SM3_SixthBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L3_SM1_ReverseDir_SM3_SixthBalise,
            &last_current_BG);
          outC->_L1_SM1_ReverseDir_SM3_SixthBalise = last_Expected_Balise;
          /* 4 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L2_SM1_ReverseDir_SM3_SixthBalise,
            &outC->_L3_SM1_ReverseDir_SM3_SixthBalise,
            outC->_L1_SM1_ReverseDir_SM3_SixthBalise,
            &outC->_7_Context_4);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L4_SM1_ReverseDir_SM3_SixthBalise,
            &outC->_7_Context_4.out_BG);
          outC->_L5_SM1_ReverseDir_SM3_SixthBalise =
            outC->_7_Context_4.Warning_unexspected_Balise;
          _232_noname = outC->_L5_SM1_ReverseDir_SM3_SixthBalise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_60_current_BG,
            &outC->_L4_SM1_ReverseDir_SM3_SixthBalise);
          _61_Expected_Balise = outC->_L6_SM1_ReverseDir_SM3_SixthBalise;
          outC->SM3_fired_SM1_ReverseDir = _64_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_52_out_BG,
            (ReceivedBG_CheckBGInputChannel_Pkg *)
              &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
          _57_SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          _56_SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          _55_SM3_state_nxt_SM1_ReverseDir =
            SSM_st_SeventhBalise_SM1_ReverseDir_SM3;
          outC->_L11_SM1_ReverseDir_SM3_SeventhBalise = 5;
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L8_SM1_ReverseDir_SM3_SeventhBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L7_SM1_ReverseDir_SM3_SeventhBalise,
            &last_current_BG);
          outC->_L6_SM1_ReverseDir_SM3_SeventhBalise = last_Expected_Balise;
          /* 9 */
          Consistency_RevCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L8_SM1_ReverseDir_SM3_SeventhBalise,
            &outC->_L7_SM1_ReverseDir_SM3_SeventhBalise,
            outC->_L6_SM1_ReverseDir_SM3_SeventhBalise,
            &outC->Context_9);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L9_SM1_ReverseDir_SM3_SeventhBalise,
            &outC->Context_9.out_BG);
          outC->_L10_SM1_ReverseDir_SM3_SeventhBalise =
            outC->Context_9.Warning_unexspected_Balise;
          _231_noname = outC->_L10_SM1_ReverseDir_SM3_SeventhBalise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_53_current_BG,
            &outC->_L9_SM1_ReverseDir_SM3_SeventhBalise);
          _54_Expected_Balise = outC->_L11_SM1_ReverseDir_SM3_SeventhBalise;
          outC->SM3_fired_SM1_ReverseDir = _57_SM3_fired_SM1_ReverseDir;
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          _50_Expected_Balise = last_Expected_Balise;
          SM3_fired_SM1_ReverseDir = outC->SM3_fired_strong_SM1_ReverseDir;
          SM3_reset_nxt_SM1_ReverseDir = kcg_false;
          SM3_state_nxt_SM1_ReverseDir = SSM_st_FirstBalise_SM1_ReverseDir_SM3;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L2_SM1_ReverseDir_SM3_FirstBalise,
            &outC->_L8_SM1_ReverseDir_SM3_FirstBalise);
          if (kcg_true) {
            outC->_L2_SM1_ReverseDir_SM3_FirstBalise.valid =
              outC->_L6_SM1_ReverseDir_SM3_FirstBalise;
          }
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_49_current_BG,
            &outC->_L2_SM1_ReverseDir_SM3_FirstBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_48_out_BG,
            &outC->_L2_SM1_ReverseDir_SM3_FirstBalise);
          _230_noname = outC->_L9_SM1_ReverseDir_SM3_FirstBalise;
          outC->SM3_fired_SM1_ReverseDir = SM3_fired_SM1_ReverseDir;
          break;
        
      }
      if (outC->init10) {
        SM3_reset_sel_SM1_ReverseDir = kcg_false;
      }
      else {
        SM3_reset_sel_SM1_ReverseDir = outC->SM3_reset_nxt_SM1_ReverseDir;
      }
      switch (outC->SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir =
            _105_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir =
            _104_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _103_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_102_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_14_out_BG,
            &_101_out_BG);
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _98_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _97_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _96_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_95_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_94_out_BG);
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _91_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _90_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _89_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_88_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_87_out_BG);
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _84_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _83_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _82_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_81_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_80_out_BG);
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _77_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _76_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _75_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_74_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_73_out_BG);
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _70_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _69_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _68_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_67_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_66_out_BG);
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _63_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _62_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _61_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_60_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_59_out_BG);
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = _56_SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = _55_SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _54_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_53_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_52_out_BG);
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_nxt_SM1_ReverseDir = SM3_reset_nxt_SM1_ReverseDir;
          outC->SM3_state_nxt_SM1_ReverseDir = SM3_state_nxt_SM1_ReverseDir;
          _16_Expected_Balise = _50_Expected_Balise;
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_15_current_BG,
            &_49_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&_14_out_BG, &_48_out_BG);
          break;
        
      }
      switch (outC->_15_SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_3_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_4_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_5_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_6_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_7_guard_SM1_ReverseDir_SM3_LastBalise) {
            _129_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _129_SM3_reset_act_SM1_ReverseDir =
              br_8_guard_SM1_ReverseDir_SM3_LastBalise;
          }
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          if (_273_br_1_guard_SM1_ReverseDir_SM3_SecondBalise) {
            _126_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _126_SM3_reset_act_SM1_ReverseDir =
              _274_br_2_guard_SM1_ReverseDir_SM3_SecondBalise;
          }
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_ThirdBalise) {
            _123_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _123_SM3_reset_act_SM1_ReverseDir =
              br_2_guard_SM1_ReverseDir_SM3_ThirdBalise;
          }
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          if (_271_br_1_guard_SM1_ReverseDir_SM3_FourthBalise) {
            _120_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _120_SM3_reset_act_SM1_ReverseDir =
              _272_br_2_guard_SM1_ReverseDir_SM3_FourthBalise;
          }
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_FifthBalise) {
            _117_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _117_SM3_reset_act_SM1_ReverseDir =
              br_2_guard_SM1_ReverseDir_SM3_FifthBalise;
          }
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_Wait) {
            _114_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_2_guard_SM1_ReverseDir_SM3_Wait) {
            _114_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_3_guard_SM1_ReverseDir_SM3_Wait) {
            _114_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_4_guard_SM1_ReverseDir_SM3_Wait) {
            _114_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_5_guard_SM1_ReverseDir_SM3_Wait) {
            _114_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else if (br_6_guard_SM1_ReverseDir_SM3_Wait) {
            _114_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _114_SM3_reset_act_SM1_ReverseDir =
              br_7_guard_SM1_ReverseDir_SM3_Wait;
          }
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          if (_269_br_1_guard_SM1_ReverseDir_SM3_SixthBalise) {
            _111_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _111_SM3_reset_act_SM1_ReverseDir =
              _270_br_2_guard_SM1_ReverseDir_SM3_SixthBalise;
          }
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          if (br_1_guard_SM1_ReverseDir_SM3_SeventhBalise) {
            _108_SM3_reset_act_SM1_ReverseDir = kcg_true;
          }
          else {
            _108_SM3_reset_act_SM1_ReverseDir =
              br_2_guard_SM1_ReverseDir_SM3_SeventhBalise;
          }
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          SM3_reset_act_SM1_ReverseDir = kcg_false;
          break;
        
      }
      if (outC->init10) {
        SM3_reset_prv_SM1_ReverseDir = kcg_false;
      }
      else {
        SM3_reset_prv_SM1_ReverseDir = outC->SM3_reset_act_SM1_ReverseDir;
      }
      switch (outC->_15_SM3_clock_SM1_ReverseDir) {
        case SSM_st_LastBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _129_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_SecondBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _126_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_ThirdBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _123_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_FourthBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _120_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_FifthBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _117_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_Wait_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _114_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_SixthBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _111_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_SeventhBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir =
            _108_SM3_reset_act_SM1_ReverseDir;
          break;
        case SSM_st_FirstBalise_SM1_ReverseDir_SM3 :
          outC->SM3_reset_act_SM1_ReverseDir = SM3_reset_act_SM1_ReverseDir;
          break;
        
      }
      outC->_L13_SM1_ReverseDir = 0;
      if (outC->init10) {
        outC->_L16_SM1_ReverseDir = 1;
      }
      else {
        outC->_L16_SM1_ReverseDir = outC->_L13_SM1_ReverseDir;
      }
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->_L15_SM1_ReverseDir,
        &_15_current_BG);
      outC->_L14_SM1_ReverseDir = last_count_BTM_BGs;
      outC->_L11_SM1_ReverseDir = outC->_L14_SM1_ReverseDir +
        outC->_L16_SM1_ReverseDir;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L12_SM1_ReverseDir,
        &outC->_L17_SM1_ReverseDir);
      if ((0 <= outC->_L11_SM1_ReverseDir) & (outC->_L11_SM1_ReverseDir < 10)) {
        kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
          &outC->_L12_SM1_ReverseDir[outC->_L11_SM1_ReverseDir],
          &outC->_L15_SM1_ReverseDir);
      }
      outC->_L9_SM1_ReverseDir = last_BG;
      if (outC->init10) {
        outC->_L10_SM1_ReverseDir = outC->API_nid_bg;
      }
      else {
        outC->_L10_SM1_ReverseDir = outC->_L9_SM1_ReverseDir;
      }
      BG17 = outC->_L10_SM1_ReverseDir;
      _12_count_BTM_BGs = outC->_L11_SM1_ReverseDir;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &_11_out_Track_BGs,
        &outC->_L12_SM1_ReverseDir);
      outC->SM1_fired = _20_SM1_fired;
      break;
    case SSM_st_No_BG_SM1 :
      BG7 = last_BG;
      _6_Expected_Balise = last_Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &_4_out_BG,
        (ReceivedBG_CheckBGInputChannel_Pkg *)
          &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
      _2_count_BTM_BGs = last_count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &_1_out_Track_BGs,
        &last_out_Track_BGs);
      _10_SM1_fired = outC->SM1_fired_strong;
      _9_SM1_reset_nxt = kcg_false;
      _8_SM1_state_nxt = SSM_st_No_BG_SM1;
      outC->_L3_SM1_No_BG = kcg_false;
      _3_out_BG_complete = outC->_L3_SM1_No_BG;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->_L1_SM1_No_BG,
        (ReceivedBG_CheckBGInputChannel_Pkg *)
          &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &_5_current_BG,
        &outC->_L1_SM1_No_BG);
      outC->SM1_fired = _10_SM1_fired;
      break;
    case SSM_st_InconsistentDir_SM1 :
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &out_BG,
        (ReceivedBG_CheckBGInputChannel_Pkg *)
          &c_emptyReceivedBG_CheckBGInputChannel_Pkg);
      out_BG_complete = kcg_false;
      SM1_fired = outC->SM1_fired_strong;
      SM1_reset_nxt = kcg_false;
      SM1_state_nxt = SSM_st_InconsistentDir_SM1;
      outC->_L11_SM1_InconsistentDir = last_count_BTM_BGs;
      outC->_L8_SM1_InconsistentDir = 0;
      if (outC->init12) {
        outC->_L10_SM1_InconsistentDir = 1;
      }
      else {
        outC->_L10_SM1_InconsistentDir = outC->_L8_SM1_InconsistentDir;
      }
      outC->_L9_SM1_InconsistentDir = outC->_L11_SM1_InconsistentDir +
        outC->_L10_SM1_InconsistentDir;
      count_BTM_BGs = outC->_L9_SM1_InconsistentDir;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L7_SM1_InconsistentDir,
        &last_out_Track_BGs);
      switch (outC->SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L2_SM1_InconsistentDir_SM4_FirstBalise,
            BTM_TrackMsg);
          /* 1 */
          InitInconBG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L2_SM1_InconsistentDir_SM4_FirstBalise,
            &outC->_8_Context_1);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_InconsistentDir_SM4_FirstBalise,
            &outC->_8_Context_1.out_BG);
          kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
            &outC->_L19_SM1_InconsistentDir_SM4_FirstBalise,
            BTM_TrackMsg);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L20_SM1_InconsistentDir_SM4_FirstBalise,
            &last_current_BG);
          outC->_L16_SM1_InconsistentDir_SM4_FirstBalise = last_Expected_Balise;
          /* 9 */
          Consistency_NomCheck_Track_BG_Subfunctions_CheckBGInput_Pkg(
            &outC->_L19_SM1_InconsistentDir_SM4_FirstBalise,
            &outC->_L20_SM1_InconsistentDir_SM4_FirstBalise,
            outC->_L16_SM1_InconsistentDir_SM4_FirstBalise,
            &outC->_9_Context_9);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L17_SM1_InconsistentDir_SM4_FirstBalise,
            &outC->_9_Context_9.out_BG);
          outC->_L18_SM1_InconsistentDir_SM4_FirstBalise =
            outC->_9_Context_9.Warning_unexspected_Balise;
          if (outC->init11) {
            kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
              &outC->_L10_SM1_InconsistentDir_SM4_FirstBalise,
              &outC->_L1_SM1_InconsistentDir_SM4_FirstBalise);
          }
          else {
            kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
              &outC->_L10_SM1_InconsistentDir_SM4_FirstBalise,
              &outC->_L17_SM1_InconsistentDir_SM4_FirstBalise);
          }
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_33_current_BG,
            &outC->_L10_SM1_InconsistentDir_SM4_FirstBalise);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &current_BG,
            &_33_current_BG);
          break;
        case SSM_st_Wait_SM1_InconsistentDir_SM4 :
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &outC->_L1_SM1_InconsistentDir_SM4_Wait,
            &last_current_BG);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &_31_current_BG,
            &outC->_L1_SM1_InconsistentDir_SM4_Wait);
          kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
            &current_BG,
            &_31_current_BG);
          break;
        
      }
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->_L6_SM1_InconsistentDir,
        &current_BG);
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->_L5_SM1_InconsistentDir,
        &outC->_L7_SM1_InconsistentDir);
      if ((0 <= outC->_L9_SM1_InconsistentDir) &
        (outC->_L9_SM1_InconsistentDir < 10)) {
        kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
          &outC->_L5_SM1_InconsistentDir[outC->_L9_SM1_InconsistentDir],
          &outC->_L6_SM1_InconsistentDir);
      }
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &out_Track_BGs,
        &outC->_L5_SM1_InconsistentDir);
      outC->_L3_SM1_InconsistentDir = last_BG;
      if (outC->init12) {
        outC->_L4_SM1_InconsistentDir = outC->API_nid_bg;
      }
      else {
        outC->_L4_SM1_InconsistentDir = outC->_L3_SM1_InconsistentDir;
      }
      BG = outC->_L4_SM1_InconsistentDir;
      switch (outC->_14_SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          if (_268_br_1_guard_SM1_InconsistentDir_SM4_FirstBalise) {
            _40_SM4_fired_strong_SM1_InconsistentDir =
              SSM_TR_FirstBalise_1_SM4_SM1_InconsistentDir;
          }
          else {
            _40_SM4_fired_strong_SM1_InconsistentDir =
              SSM_TR_no_trans_SM4_SM1_InconsistentDir;
          }
          outC->SM4_fired_strong_SM1_InconsistentDir =
            _40_SM4_fired_strong_SM1_InconsistentDir;
          break;
        case SSM_st_Wait_SM1_InconsistentDir_SM4 :
          if (br_1_guard_SM1_InconsistentDir_SM4_Wait) {
            SM4_fired_strong_SM1_InconsistentDir =
              SSM_TR_Wait_1_SM4_SM1_InconsistentDir;
          }
          else {
            SM4_fired_strong_SM1_InconsistentDir =
              SSM_TR_no_trans_SM4_SM1_InconsistentDir;
          }
          outC->SM4_fired_strong_SM1_InconsistentDir =
            SM4_fired_strong_SM1_InconsistentDir;
          break;
        
      }
      switch (outC->SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          _37_SM4_fired_SM1_InconsistentDir =
            outC->SM4_fired_strong_SM1_InconsistentDir;
          _36_SM4_reset_nxt_SM1_InconsistentDir = kcg_false;
          _35_SM4_state_nxt_SM1_InconsistentDir =
            SSM_st_FirstBalise_SM1_InconsistentDir_SM4;
          noname = outC->_L18_SM1_InconsistentDir_SM4_FirstBalise;
          outC->_L8_SM1_InconsistentDir_SM4_FirstBalise = 1;
          outC->_L6_SM1_InconsistentDir_SM4_FirstBalise = outC->API_n_pig;
          outC->_L7_SM1_InconsistentDir_SM4_FirstBalise =
            outC->_L6_SM1_InconsistentDir_SM4_FirstBalise +
            outC->_L8_SM1_InconsistentDir_SM4_FirstBalise;
          _34_Expected_Balise = outC->_L7_SM1_InconsistentDir_SM4_FirstBalise;
          outC->SM4_fired_SM1_InconsistentDir =
            _37_SM4_fired_SM1_InconsistentDir;
          break;
        case SSM_st_Wait_SM1_InconsistentDir_SM4 :
          SM4_fired_SM1_InconsistentDir =
            outC->SM4_fired_strong_SM1_InconsistentDir;
          SM4_reset_nxt_SM1_InconsistentDir = kcg_false;
          SM4_state_nxt_SM1_InconsistentDir =
            SSM_st_Wait_SM1_InconsistentDir_SM4;
          outC->_L2_SM1_InconsistentDir_SM4_Wait = last_Expected_Balise;
          _32_Expected_Balise = outC->_L2_SM1_InconsistentDir_SM4_Wait;
          outC->SM4_fired_SM1_InconsistentDir = SM4_fired_SM1_InconsistentDir;
          break;
        
      }
      if (outC->init12) {
        SM4_reset_sel_SM1_InconsistentDir = kcg_false;
      }
      else {
        SM4_reset_sel_SM1_InconsistentDir =
          outC->SM4_reset_nxt_SM1_InconsistentDir;
      }
      switch (outC->SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          outC->SM4_reset_nxt_SM1_InconsistentDir =
            _36_SM4_reset_nxt_SM1_InconsistentDir;
          outC->SM4_state_nxt_SM1_InconsistentDir =
            _35_SM4_state_nxt_SM1_InconsistentDir;
          Expected_Balise = _34_Expected_Balise;
          break;
        case SSM_st_Wait_SM1_InconsistentDir_SM4 :
          outC->SM4_reset_nxt_SM1_InconsistentDir =
            SM4_reset_nxt_SM1_InconsistentDir;
          outC->SM4_state_nxt_SM1_InconsistentDir =
            SM4_state_nxt_SM1_InconsistentDir;
          Expected_Balise = _32_Expected_Balise;
          break;
        
      }
      outC->SM1_fired = SM1_fired;
      break;
    
  }
  if (outC->init13) {
    SM1_reset_sel = kcg_false;
  }
  else {
    SM1_reset_sel = outC->SM1_reset_nxt;
  }
  switch (outC->SM1_state_act) {
    case SSM_st_NominalDir_SM1 :
      outC->SM1_reset_nxt = _29_SM1_reset_nxt;
      outC->SM1_state_nxt = _28_SM1_state_nxt;
      outC->BG = BG27;
      outC->Expected_Balise = _26_Expected_Balise;
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
        &outC->current_BG,
        &_25_current_BG);
      kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(&outC->out_BG, &_24_out_BG);
      outC->out_BG_complete = _23_out_BG_complete;
      outC->count_BTM_BGs = _22_count_BTM_BGs;
      kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
        &outC->out_Track_BGs,
        &_21_out_Track_BGs);
      outC->init = kcg_false;
      break;
    case SSM_st_ReverseDir_SM1 :
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
      outC->init10 = kcg_false;
      break;
    case SSM_st_No_BG_SM1 :
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
    case SSM_st_InconsistentDir_SM1 :
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
      switch (outC->SM4_clock_SM1_InconsistentDir) {
        case SSM_st_FirstBalise_SM1_InconsistentDir_SM4 :
          outC->init11 = kcg_false;
          break;
        
      }
      outC->init12 = kcg_false;
      break;
    
  }
  outC->init13 = kcg_false;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** Listen_on_BTM_CheckBGInputChannel_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

