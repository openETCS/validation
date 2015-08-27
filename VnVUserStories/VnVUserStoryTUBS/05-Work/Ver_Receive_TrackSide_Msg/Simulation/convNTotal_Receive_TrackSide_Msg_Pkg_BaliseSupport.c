/* $**************** KCG Version 6.4 (build i21) ****************
** Command: kcg64.exe -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/Ver_Receive_TrackSide_Msg/Simulation/config.txt
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.h"

#ifndef KCG_USER_DEFINED_INIT
void convNTotal_init_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  outC->_L17_IfBlock1 = 0;
  outC->_L19_IfBlock1 = 0;
  outC->_L111_IfBlock1 = 0;
  outC->_L113_IfBlock1 = 0;
  outC->_L2_IfBlock1 = 0;
  outC->else_clock_IfBlock1 = kcg_true;
  outC->_L112_IfBlock1 = 0;
  outC->_L110_IfBlock1 = 0;
  outC->_L18_IfBlock1 = 0;
  outC->_L1_IfBlock1 = 0;
  outC->IfBlock1_clock = kcg_true;
  outC->_5_else_clock_IfBlock1 = kcg_true;
  outC->_3_else_clock_IfBlock1 = kcg_true;
  outC->_1_else_clock_IfBlock1 = kcg_true;
  outC->_2_else_clock_IfBlock1 = kcg_true;
  outC->_4_else_clock_IfBlock1 = kcg_true;
  outC->_6_else_clock_IfBlock1 = kcg_true;
  outC->outTotal = 0;
}
#endif /* KCG_USER_DEFINED_INIT */


#ifndef KCG_NO_EXTERN_CALL_TO_RESET
void convNTotal_reset_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
}
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

/* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal */
void convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport(
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::inNTotal */ N_TOTAL inNTotal,
  outC_convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport *outC)
{
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _1_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _5_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _4_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _9_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _8_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _13_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _12_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _14_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _15_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _10_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _11_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _6_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _7_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _2_outTotal;
  /* Receive_TrackSide_Msg_Pkg::BaliseSupport::convNTotal::outTotal */ kcg_int _3_outTotal;
  
  outC->IfBlock1_clock = inNTotal == N_TOTAL_1_balise_in_the_group;
  /* ck_IfBlock1 */ if (outC->IfBlock1_clock) {
    outC->_L1_IfBlock1 = 1;
    _1_outTotal = outC->_L1_IfBlock1;
    outC->outTotal = _1_outTotal;
  }
  else {
    outC->_6_else_clock_IfBlock1 = inNTotal == N_TOTAL_2_balises_in_the_group;
    /* ck_anon_activ */ if (outC->_6_else_clock_IfBlock1) {
      outC->_L17_IfBlock1 = 2;
      _3_outTotal = outC->_L17_IfBlock1;
      outTotal = _3_outTotal;
    }
    else {
      outC->_5_else_clock_IfBlock1 = inNTotal == N_TOTAL_3_balises_in_the_group;
      /* ck_anon_activ */ if (outC->_5_else_clock_IfBlock1) {
        outC->_L18_IfBlock1 = 3;
        _5_outTotal = outC->_L18_IfBlock1;
        _2_outTotal = _5_outTotal;
      }
      else {
        outC->_4_else_clock_IfBlock1 = inNTotal ==
          N_TOTAL_4_balises_in_the_group;
        /* ck_anon_activ */ if (outC->_4_else_clock_IfBlock1) {
          outC->_L19_IfBlock1 = 4;
          _7_outTotal = outC->_L19_IfBlock1;
          _4_outTotal = _7_outTotal;
        }
        else {
          outC->_3_else_clock_IfBlock1 = inNTotal ==
            N_TOTAL_5_balises_in_the_group;
          /* ck_anon_activ */ if (outC->_3_else_clock_IfBlock1) {
            outC->_L110_IfBlock1 = 5;
            _9_outTotal = outC->_L110_IfBlock1;
            _6_outTotal = _9_outTotal;
          }
          else {
            outC->_2_else_clock_IfBlock1 = inNTotal ==
              N_TOTAL_6_balises_in_the_group;
            /* ck_anon_activ */ if (outC->_2_else_clock_IfBlock1) {
              outC->_L111_IfBlock1 = 6;
              _11_outTotal = outC->_L111_IfBlock1;
              _8_outTotal = _11_outTotal;
            }
            else {
              outC->_1_else_clock_IfBlock1 = inNTotal ==
                N_TOTAL_7_balises_in_the_group;
              /* ck_anon_activ */ if (outC->_1_else_clock_IfBlock1) {
                outC->_L112_IfBlock1 = 7;
                _13_outTotal = outC->_L112_IfBlock1;
                _10_outTotal = _13_outTotal;
              }
              else {
                outC->else_clock_IfBlock1 = inNTotal ==
                  N_TOTAL_8_balises_in_the_group;
                /* ck_anon_activ */ if (outC->else_clock_IfBlock1) {
                  outC->_L113_IfBlock1 = 8;
                  _15_outTotal = outC->_L113_IfBlock1;
                  _12_outTotal = _15_outTotal;
                }
                else {
                  outC->_L2_IfBlock1 = 0;
                  _14_outTotal = outC->_L2_IfBlock1;
                  _12_outTotal = _14_outTotal;
                }
                _10_outTotal = _12_outTotal;
              }
              _8_outTotal = _10_outTotal;
            }
            _6_outTotal = _8_outTotal;
          }
          _4_outTotal = _6_outTotal;
        }
        _2_outTotal = _4_outTotal;
      }
      outTotal = _2_outTotal;
    }
    outC->outTotal = outTotal;
  }
}

/* $**************** KCG Version 6.4 (build i21) ****************
** convNTotal_Receive_TrackSide_Msg_Pkg_BaliseSupport.c
** Generation date: 2015-09-16T19:37:12
*************************************************************$ */

