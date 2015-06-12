/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_PIG_to_int_TM_conversions.h"

void CAST_N_PIG_to_int_reset_TM_conversions(
  outC_CAST_N_PIG_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_N_PIG_to_int */
void CAST_N_PIG_to_int_TM_conversions(
  /* TM_conversions::CAST_N_PIG_to_int::n_pig */N_PIG n_pig,
  outC_CAST_N_PIG_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _2_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error10;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _9_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error8;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _7_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error18;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _17_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error16;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _15_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error26;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _25_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error24;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _23_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _27_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error28;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _29_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error30;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _19_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error20;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _21_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error22;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _11_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error12;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _13_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error14;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _3_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_N_PIG_to_int::n_pig_int */ kcg_int _5_n_pig_int;
  /* TM_conversions::CAST_N_PIG_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L2 = n_pig;
  outC->n_pig_in = outC->_L2;
  outC->IfBlock1_clock = outC->n_pig_in == ENUM_N_PIG_1st_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_6_else_clock_IfBlock1 = outC->n_pig_in ==
      ENUM_N_PIG_2nd_TM_conversions;
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L37_IfBlock1 = kcg_false;
      error6 = outC->_L37_IfBlock1;
      error = error6;
    }
    else {
      outC->_5_else_clock_IfBlock1 = outC->n_pig_in ==
        ENUM_N_PIG_3rd_TM_conversions;
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L4_IfBlock1 = kcg_false;
        error10 = outC->_L4_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_4_else_clock_IfBlock1 = outC->n_pig_in ==
          ENUM_N_PIG_4th_TM_conversions;
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L39_IfBlock1 = kcg_false;
          error14 = outC->_L39_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_3_else_clock_IfBlock1 = outC->n_pig_in ==
            ENUM_N_PIG_5th_TM_conversions;
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L311_IfBlock1 = kcg_false;
            error18 = outC->_L311_IfBlock1;
            error12 = error18;
          }
          else {
            outC->_2_else_clock_IfBlock1 = outC->n_pig_in ==
              ENUM_N_PIG_6th_TM_conversions;
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L413_IfBlock1 = kcg_false;
              error22 = outC->_L413_IfBlock1;
              error16 = error22;
            }
            else {
              outC->_1_else_clock_IfBlock1 = outC->n_pig_in ==
                ENUM_N_PIG_7th_TM_conversions;
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L315_IfBlock1 = kcg_false;
                error26 = outC->_L315_IfBlock1;
                error20 = error26;
              }
              else {
                outC->else_clock_IfBlock1 = outC->n_pig_in ==
                  ENUM_N_PIG_8th_TM_conversions;
                if (outC->else_clock_IfBlock1) {
                  outC->_L417_IfBlock1 = kcg_false;
                  error30 = outC->_L417_IfBlock1;
                  error24 = error30;
                }
                else {
                  outC->_L319_IfBlock1 = kcg_true;
                  error28 = outC->_L319_IfBlock1;
                  error24 = error28;
                }
                error20 = error24;
              }
              error16 = error20;
            }
            error12 = error16;
          }
          error8 = error12;
        }
        error4 = error8;
      }
      error = error4;
    }
    outC->error = error;
  }
  outC->_L4 = outC->error;
  noname = outC->_L4;
  if (outC->IfBlock1_clock) {
    outC->_L2_IfBlock1 = INT_N_PIG_1st_TM_conversions;
    _2_n_pig_int = outC->_L2_IfBlock1;
    outC->n_pig_int = _2_n_pig_int;
  }
  else {
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = INT_N_PIG_2nd_TM_conversions;
      _5_n_pig_int = outC->_L1_IfBlock1;
      n_pig_int = _5_n_pig_int;
    }
    else {
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L18_IfBlock1 = INT_N_PIG_3rd_TM_conversions;
        _9_n_pig_int = outC->_L18_IfBlock1;
        _3_n_pig_int = _9_n_pig_int;
      }
      else {
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L110_IfBlock1 = INT_N_PIG_4th_TM_conversions;
          _13_n_pig_int = outC->_L110_IfBlock1;
          _7_n_pig_int = _13_n_pig_int;
        }
        else {
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L112_IfBlock1 = INT_N_PIG_5th_TM_conversions;
            _17_n_pig_int = outC->_L112_IfBlock1;
            _11_n_pig_int = _17_n_pig_int;
          }
          else {
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L214_IfBlock1 = INT_N_PIG_6th_TM_conversions;
              _21_n_pig_int = outC->_L214_IfBlock1;
              _15_n_pig_int = _21_n_pig_int;
            }
            else {
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L116_IfBlock1 = INT_N_PIG_7th_TM_conversions;
                _25_n_pig_int = outC->_L116_IfBlock1;
                _19_n_pig_int = _25_n_pig_int;
              }
              else {
                if (outC->else_clock_IfBlock1) {
                  outC->_L118_IfBlock1 = INT_N_PIG_8th_TM_conversions;
                  _29_n_pig_int = outC->_L118_IfBlock1;
                  _23_n_pig_int = _29_n_pig_int;
                }
                else {
                  outC->_L220_IfBlock1 = INT_N_PIG_8th_TM_conversions;
                  _27_n_pig_int = outC->_L220_IfBlock1;
                  _23_n_pig_int = _27_n_pig_int;
                }
                _19_n_pig_int = _23_n_pig_int;
              }
              _15_n_pig_int = _19_n_pig_int;
            }
            _11_n_pig_int = _15_n_pig_int;
          }
          _7_n_pig_int = _11_n_pig_int;
        }
        _3_n_pig_int = _7_n_pig_int;
      }
      n_pig_int = _3_n_pig_int;
    }
    outC->n_pig_int = n_pig_int;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_N_PIG_to_int_TM_conversions.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

