/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckBGInCh_Int_CheckBGInputChannel_Pkg.h"

void CheckBGInCh_Int_reset_CheckBGInputChannel_Pkg(
  outC_CheckBGInCh_Int_CheckBGInputChannel_Pkg *outC)
{
  /* 1 */ SM_Check_BG_reset_CheckBGInputChannel_Pkg(&outC->_4_Context_1);
  /* 1 */ Listen_on_BTM_reset_CheckBGInputChannel_Pkg(&outC->_3_Context_1);
  /* 1 */ Listen_on_OBU_reset_CheckBGInputChannel_Pkg(&outC->Context_1);
  /* 2 */
  Manage_TrackSideInformati_reset_Manage_TrackSideInformation_Integration_Pkg(
    &outC->_2_Context_2);
  /* 2 */ BTM_reset_Toolbox_TrainModules(&outC->_1_Context_2);
  /* 2 */ Story00A_reset_FirstTest(&outC->Context_2);
  /* 3 */ MovementSimulation_reset_Toolbox_BuildingBlocks(&outC->Context_3);
}

/* CheckBGInputChannel_Pkg::CheckBGInCh_Int */
void CheckBGInCh_Int_CheckBGInputChannel_Pkg(
  inC_CheckBGInCh_Int_CheckBGInputChannel_Pkg *inC,
  outC_CheckBGInCh_Int_CheckBGInputChannel_Pkg *outC)
{
  MSG_Errors_T_Common_Types_Pkg noname;
  kcg_bool _1_noname;
  radioManagementMessage_T_Common_Types_Pkg _2_noname;
  kcg_bool _3_noname;
  PositionReportParameter_T_Common_Types_Pkg _4_noname;
  kcg_bool _5_noname;
  
  outC->_L130 = cTNVContact_TestExample;
  outC->_L129 = cQNVLocAcc_TestExample;
  kcg_copy_T_Mode_Level_Level_And_Mode_Types_Pkg(
    &outC->_L128,
    (T_Mode_Level_Level_And_Mode_Types_Pkg *) &cModeAndLevelStatus_TestExample);
  kcg_copy_trainPosition_T_TrainPosition_Types_Pck(
    &outC->_L126,
    (trainPosition_T_TrainPosition_Types_Pck *)
      &cTrainPosition_0_CalculateTrainPosition_Pkg);
  outC->_L125 = kcg_false;
  outC->_L124 = inC->acceleration;
  outC->_L123 = inC->initialPosition;
  outC->_L122 = cDeltaSimulationTime_Toolbox;
  outC->_L121 = 0.0;
  outC->_L120 = kcg_false;
  /* 3 */
  MovementSimulation_Toolbox_BuildingBlocks(
    outC->_L125,
    outC->_L124,
    outC->_L125,
    outC->_L125,
    outC->_L123,
    outC->_L121,
    outC->_L125,
    outC->_L122,
    outC->_L120,
    outC->_L120,
    &outC->Context_3);
  outC->_L115 = outC->Context_3.position;
  outC->_L116 = outC->Context_3.velocity;
  outC->_L117 = outC->Context_3.timestamp;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(
    &outC->_L118,
    &outC->Context_3.odometry);
  outC->_L119 = outC->Context_3.resetOut;
  _5_noname = outC->_L119;
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->currentOdometry, &outC->_L118);
  outC->dbgVelocity = outC->_L116;
  kcg_copy_positionedBGs_T_TrainPosition_Types_Pck(
    &outC->_L98,
    (positionedBGs_T_TrainPosition_Types_Pck *)
      &cNoPositionedBGs_CalculateTrainPosition_Pkg);
  outC->_L60 = kcg_true;
  /* 2 */ Story00A_FirstTest(outC->_L115, &outC->Context_2);
  kcg_copy_CompressedPackets_T_Common_Types_Pkg(
    &outC->_L80,
    &outC->Context_2.Packets_Out);
  kcg_copy_TelegramHeader_T_BG_Types_Pkg(
    &outC->_L81,
    &outC->Context_2.TelegramHeader);
  /* 2 */
  BTM_Toolbox_TrainModules(
    outC->_L117,
    &outC->_L118,
    &outC->_L80,
    &outC->_L81,
    &outC->_1_Context_2);
  kcg_copy_API_TrackSideInput_T_API_Msg_Pkg(
    &outC->_L65,
    &outC->_1_Context_2.TrackMessage);
  kcg_copy_odometry_T_Obu_BasicTypes_Pkg(&outC->_L50, &outC->currentOdometry);
  outC->_L67 = kcg_false;
  outC->_L62 = 1;
  outC->_L64 = morc_st_inactive_Radio_Types_Pkg;
  outC->_L66 = 0;
  outC->_L57 = kcg_false;
  outC->_L87 = 0;
  outC->_L75 = 0;
  /* 2 */
  Manage_TrackSideInformati_Manage_TrackSideInformation_Integration_Pkg(
    outC->_L60,
    &outC->_L65,
    &outC->_L50,
    outC->_L67,
    &outC->_L126,
    &outC->_L128,
    outC->_L130,
    outC->_L62,
    outC->_L64,
    outC->_L66,
    &outC->_L98,
    outC->_L129,
    outC->_L57,
    outC->_L57,
    outC->_L57,
    outC->_L57,
    outC->_L87,
    outC->_L57,
    outC->_L75,
    outC->_L57,
    &outC->_2_Context_2);
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
    &outC->_L51,
    &outC->_2_Context_2.outputMessage);
  outC->_L52 = outC->_2_Context_2.ApplyServiceBrake;
  outC->_L53 = outC->_2_Context_2.BadBaliseMessageToDMI;
  kcg_copy_PositionReportParameter_T_Common_Types_Pkg(
    &outC->_L54,
    &outC->_2_Context_2.outPositionParams);
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(
    &outC->_L55,
    &outC->_2_Context_2.outRadioManagement);
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(
    &outC->_L56,
    &outC->_2_Context_2.outCheckErrors);
  /* 1 */
  Listen_on_OBU_CheckBGInputChannel_Pkg(
    &outC->_L51,
    outC->_L117,
    &outC->Context_1);
  kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
    &outC->_L92,
    &outC->Context_1.out_OBU_BGs);
  outC->_L93 = outC->Context_1.out_new_OBU_BG;
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
    &outC->_L94,
    &outC->Context_1.out_OBU_BG);
  outC->_L97 = outC->Context_1.count_OBU_BGs;
  /* 1 */
  Listen_on_BTM_CheckBGInputChannel_Pkg(&outC->_L65, &outC->_3_Context_1);
  kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(
    &outC->_L88,
    &outC->_3_Context_1.out_Track_BGs);
  outC->_L89 = outC->_3_Context_1.count_BTM_BGs;
  outC->_L90 = outC->_3_Context_1.out_BG_complete;
  kcg_copy_ReceivedBG_CheckBGInputChannel_Pkg(
    &outC->_L91,
    &outC->_3_Context_1.out_BG);
  /* 1 */
  SM_Check_BG_CheckBGInputChannel_Pkg(
    &outC->_L94,
    &outC->_L91,
    outC->_L93,
    outC->_L90,
    &outC->_4_Context_1);
  kcg_copy_outBGchecks_CheckBGInputChannel_Pkg(
    &outC->_L95,
    &outC->_4_Context_1.comp_BGs);
  outC->_L96 = outC->_4_Context_1.count_BGs;
  outC->count_BGs = outC->_L96;
  kcg_copy_outBGchecks_CheckBGInputChannel_Pkg(&outC->checked_BGs, &outC->_L95);
  outC->count_BTM_BGs = outC->_L89;
  outC->count_OBU_BGs = outC->_L97;
  kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(&outC->BTM_BGs, &outC->_L88);
  kcg_copy_ReceivedBGs_CheckBGInputChannel_Pkg(&outC->OBU_BGs, &outC->_L92);
  kcg_copy_PositionReportParameter_T_Common_Types_Pkg(&_4_noname, &outC->_L54);
  _3_noname = outC->_L52;
  kcg_copy_radioManagementMessage_T_Common_Types_Pkg(&_2_noname, &outC->_L55);
  _1_noname = outC->_L53;
  kcg_copy_MSG_Errors_T_Common_Types_Pkg(&noname, &outC->_L56);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckBGInCh_Int_CheckBGInputChannel_Pkg.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

