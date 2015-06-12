/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/modeling/model/Scade/System/OBU_PreIntegrations/TestBenchExample/MultiplexerCheck/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CAST_N_TOTAL_to_int_TM_conversions.h"

void CAST_N_TOTAL_to_int_reset_TM_conversions(
  outC_CAST_N_TOTAL_to_int_TM_conversions *outC)
{
}

/* TM_conversions::CAST_N_TOTAL_to_int */
void CAST_N_TOTAL_to_int_TM_conversions(
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total */N_TOTAL n_total,
  outC_CAST_N_TOTAL_to_int_TM_conversions *outC)
{
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _2_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error1;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error10;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _9_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error8;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _7_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error18;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _17_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error16;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _15_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error26;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _25_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error24;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _23_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _27_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error28;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _29_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error30;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _19_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error20;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _21_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error22;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _11_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error12;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _13_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error14;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _3_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error4;
  /* TM_conversions::CAST_N_TOTAL_to_int::n_total_int */ kcg_int _5_n_total_int;
  /* TM_conversions::CAST_N_TOTAL_to_int::error */ kcg_bool error6;
  kcg_bool noname;
  
  outC->_L3 = n_total;
  outC->n_total_in = outC->_L3;
  outC->IfBlock1_clock = outC->n_total_in == ENUM_N_TOTAL_1_TM_conversions;
  if (outC->IfBlock1_clock) {
    outC->_L3_IfBlock1 = kcg_false;
    error1 = outC->_L3_IfBlock1;
    outC->error = error1;
  }
  else {
    outC->_6_else_clock_IfBlock1 = outC->n_total_in ==
      ENUM_N_TOTAL_2_TM_conversions;
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L37_IfBlock1 = kcg_false;
      error6 = outC->_L37_IfBlock1;
      error = error6;
    }
    else {
      outC->_5_else_clock_IfBlock1 = outC->n_total_in ==
        ENUM_N_TOTAL_3_TM_conversions;
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L38_IfBlock1 = kcg_false;
        error10 = outC->_L38_IfBlock1;
        error4 = error10;
      }
      else {
        outC->_4_else_clock_IfBlock1 = outC->n_total_in ==
          ENUM_N_TOTAL_4_TM_conversions;
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L310_IfBlock1 = kcg_false;
          error14 = outC->_L310_IfBlock1;
          error8 = error14;
        }
        else {
          outC->_3_else_clock_IfBlock1 = outC->n_total_in ==
            ENUM_N_TOTAL_5_TM_conversions;
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L312_IfBlock1 = kcg_false;
            error18 = outC->_L312_IfBlock1;
            error12 = error18;
          }
          else {
            outC->_2_else_clock_IfBlock1 = outC->n_total_in ==
              ENUM_N_TOTAL_6_TM_conversions;
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L5_IfBlock1 = kcg_false;
              error22 = outC->_L5_IfBlock1;
              error16 = error22;
            }
            else {
              outC->_1_else_clock_IfBlock1 = outC->n_total_in ==
                ENUM_N_TOTAL_7_TM_conversions;
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L315_IfBlock1 = kcg_false;
                error26 = outC->_L315_IfBlock1;
                error20 = error26;
              }
              else {
                outC->else_clock_IfBlock1 = outC->n_total_in ==
                  ENUM_N_TOTAL_8_TM_conversions;
                if (outC->else_clock_IfBlock1) {
                  outC->_L317_IfBlock1 = kcg_false;
                  error30 = outC->_L317_IfBlock1;
                  error24 = error30;
                }
                else {
                  outC->_L4_IfBlock1 = kcg_true;
                  error28 = outC->_L4_IfBlock1;
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
    outC->_L2_IfBlock1 = INT_N_TOTAL_1_TM_conversions;
    _2_n_total_int = outC->_L2_IfBlock1;
    outC->n_total_int = _2_n_total_int;
  }
  else {
    if (outC->_6_else_clock_IfBlock1) {
      outC->_L1_IfBlock1 = INT_N_TOTAL_2_TM_conversions;
      _5_n_total_int = outC->_L1_IfBlock1;
      n_total_int = _5_n_total_int;
    }
    else {
      if (outC->_5_else_clock_IfBlock1) {
        outC->_L19_IfBlock1 = INT_N_TOTAL_3_TM_conversions;
        _9_n_total_int = outC->_L19_IfBlock1;
        _3_n_total_int = _9_n_total_int;
      }
      else {
        if (outC->_4_else_clock_IfBlock1) {
          outC->_L111_IfBlock1 = INT_N_TOTAL_4_TM_conversions;
          _13_n_total_int = outC->_L111_IfBlock1;
          _7_n_total_int = _13_n_total_int;
        }
        else {
          if (outC->_3_else_clock_IfBlock1) {
            outC->_L113_IfBlock1 = INT_N_TOTAL_5_TM_conversions;
            _17_n_total_int = outC->_L113_IfBlock1;
            _11_n_total_int = _17_n_total_int;
          }
          else {
            if (outC->_2_else_clock_IfBlock1) {
              outC->_L214_IfBlock1 = INT_N_TOTAL_6_TM_conversions;
              _21_n_total_int = outC->_L214_IfBlock1;
              _15_n_total_int = _21_n_total_int;
            }
            else {
              if (outC->_1_else_clock_IfBlock1) {
                outC->_L116_IfBlock1 = INT_N_TOTAL_7_TM_conversions;
                _25_n_total_int = outC->_L116_IfBlock1;
                _19_n_total_int = _25_n_total_int;
              }
              else {
                if (outC->else_clock_IfBlock1) {
                  outC->_L118_IfBlock1 = INT_N_TOTAL_8_TM_conversions;
                  _29_n_total_int = outC->_L118_IfBlock1;
                  _23_n_total_int = _29_n_total_int;
                }
                else {
                  outC->_L119_IfBlock1 = INT_N_TOTAL_8_TM_conversions;
                  _27_n_total_int = outC->_L119_IfBlock1;
                  _23_n_total_int = _27_n_total_int;
                }
                _19_n_total_int = _23_n_total_int;
              }
              _15_n_total_int = _19_n_total_int;
            }
            _11_n_total_int = _15_n_total_int;
          }
          _7_n_total_int = _11_n_total_int;
        }
        _3_n_total_int = _7_n_total_int;
      }
      n_total_int = _3_n_total_int;
    }
    outC->n_total_int = n_total_int;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CAST_N_TOTAL_to_int_TM_conversions.c
** Generation date: 2015-06-12T13:56:05
*************************************************************$ */

