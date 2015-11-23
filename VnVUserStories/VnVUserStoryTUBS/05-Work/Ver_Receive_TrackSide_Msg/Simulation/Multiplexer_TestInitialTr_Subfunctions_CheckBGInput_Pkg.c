/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg.h"

#ifndef KCG_USER_DEFINED_INIT
void Multiplexer_TestInitialTr_init_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg *outC)
{
  outC->_L29 = 0.0;
  outC->_L30 = 0.0;
  outC->_L31 = 0;
  outC->_L28.BeginOfTrack = 0.0;
  outC->_L28.EndOfTrack = 0.0;
  outC->_L28.NumberOfBGs = 0;
  outC->Track_Parameter.BeginOfTrack = 0.0;
  outC->Track_Parameter.EndOfTrack = 0.0;
  outC->Track_Parameter.NumberOfBGs = 0;
  outC->_L7_IfBlock1.BeginOfTrack = 0.0;
  outC->_L7_IfBlock1.EndOfTrack = 0.0;
  outC->_L7_IfBlock1.NumberOfBGs = 0;
  outC->_L9_IfBlock1.BeginOfTrack = 0.0;
  outC->_L9_IfBlock1.EndOfTrack = 0.0;
  outC->_L9_IfBlock1.NumberOfBGs = 0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L8_IfBlock1.BeginOfTrack = 0.0;
  outC->_L8_IfBlock1.EndOfTrack = 0.0;
  outC->_L8_IfBlock1.NumberOfBGs = 0;
  outC->_L4_IfBlock1.BeginOfTrack = 0.0;
  outC->_L4_IfBlock1.EndOfTrack = 0.0;
  outC->_L4_IfBlock1.NumberOfBGs = 0;
  outC->_L11_IfBlock1.BeginOfTrack = 0.0;
  outC->_L11_IfBlock1.EndOfTrack = 0.0;
  outC->_L11_IfBlock1.NumberOfBGs = 0;
  outC->_L15_IfBlock1.BeginOfTrack = 0.0;
  outC->_L15_IfBlock1.EndOfTrack = 0.0;
  outC->_L15_IfBlock1.NumberOfBGs = 0;
  outC->IfBlock1_clock = kcg_true;
  outC->_2_else_clock_IfBlock1 = kcg_true;
  outC->_1_else_clock_IfBlock1 = kcg_true;
  outC->_3_else_clock_IfBlock1 = kcg_true;
  outC->out_TotalNrofBGs = 0;
  outC->out_EndofTrack = 0.0;
  outC->out_initialPosition = 0.0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void Multiplexer_TestInitialTr_reset_Subfunctions_CheckBGInput_Pkg(
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData */
void Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg(
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::in_TestStory */ kcg_int in_TestStory,
  outC_Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg *outC)
{
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _1_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _5_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _4_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _9_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _8_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _6_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _7_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _2_Track_Parameter;
  /* Subfunctions_CheckBGInput_Pkg::Multiplexer_TestInitialTrackData::Track_Parameter */ parameter_StoryTest_T_UNISIG_Validation_Scenarios _3_Track_Parameter;
  
  outC->IfBlock1_clock = in_TestStory == 1;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
      &outC->_L15_IfBlock1,
      (parameter_StoryTest_T_UNISIG_Validation_Scenarios *)
        &Para_Story_TEST_VAL_SUB026_3000_UNISIG_Validation_Scenarios);
    kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
      &_1_Track_Parameter,
      &outC->_L15_IfBlock1);
    kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
      &outC->Track_Parameter,
      &_1_Track_Parameter);
  }
  else {
    outC->_3_else_clock_IfBlock1 = in_TestStory == 2;
    /* ck_anon_activ */ if (outC->_3_else_clock_IfBlock1) {
      kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
        &outC->_L7_IfBlock1,
        (parameter_StoryTest_T_UNISIG_Validation_Scenarios *)
          &Para_Story_TEST_VAL_SUB026_3B01_UNISIG_Validation_Scenarios);
      kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
        &_3_Track_Parameter,
        &outC->_L7_IfBlock1);
      kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
        &Track_Parameter,
        &_3_Track_Parameter);
    }
    else {
      outC->_2_else_clock_IfBlock1 = in_TestStory == 3;
      /* ck_anon_activ */ if (outC->_2_else_clock_IfBlock1) {
        kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
          &outC->_L11_IfBlock1,
          (parameter_StoryTest_T_UNISIG_Validation_Scenarios *)
            &DEFAULT_Story_TEST_VAL_SUB026_3001_UNISIG_Validation_Scenarios);
        kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
          &_5_Track_Parameter,
          &outC->_L11_IfBlock1);
        kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
          &_2_Track_Parameter,
          &_5_Track_Parameter);
      }
      else {
        outC->_1_else_clock_IfBlock1 = in_TestStory == 4;
        /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
          kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
            &outC->_L9_IfBlock1,
            (parameter_StoryTest_T_UNISIG_Validation_Scenarios *)
              &DEFAULT_Story_TEST_VAL_SUB026_3001_UNISIG_Validation_Scenarios);
          kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
            &_7_Track_Parameter,
            &outC->_L9_IfBlock1);
          kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
            &_4_Track_Parameter,
            &_7_Track_Parameter);
        }
        else {
          outC->else_clock_IfBlock1 = in_TestStory == 5;
          /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
            kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
              &outC->_L4_IfBlock1,
              (parameter_StoryTest_T_UNISIG_Validation_Scenarios *)
                &DEFAULT_Story_TEST_VAL_SUB026_3001_UNISIG_Validation_Scenarios);
            kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
              &_9_Track_Parameter,
              &outC->_L4_IfBlock1);
            kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
              &_6_Track_Parameter,
              &_9_Track_Parameter);
          }
          else {
            kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
              &outC->_L8_IfBlock1,
              (parameter_StoryTest_T_UNISIG_Validation_Scenarios *)
                &DEFAULT_Story_TEST_VAL_SUB026_3001_UNISIG_Validation_Scenarios);
            kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
              &_8_Track_Parameter,
              &outC->_L8_IfBlock1);
            kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
              &_6_Track_Parameter,
              &_8_Track_Parameter);
          }
          kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
            &_4_Track_Parameter,
            &_6_Track_Parameter);
        }
        kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
          &_2_Track_Parameter,
          &_4_Track_Parameter);
      }
      kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
        &Track_Parameter,
        &_2_Track_Parameter);
    }
    kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
      &outC->Track_Parameter,
      &Track_Parameter);
  }
  kcg_copy_parameter_StoryTest_T_UNISIG_Validation_Scenarios(
    &outC->_L28,
    &outC->Track_Parameter);
  outC->_L31 = outC->_L28.NumberOfBGs;
  outC->out_TotalNrofBGs = outC->_L31;
  outC->_L29 = outC->_L28.BeginOfTrack;
  outC->out_initialPosition = outC->_L29;
  outC->_L30 = outC->_L28.EndOfTrack;
  outC->out_EndofTrack = outC->_L30;
}

/* $**************** KCG Version 6.4 (build i21) ****************
** Multiplexer_TestInitialTr_Subfunctions_CheckBGInput_Pkg.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

