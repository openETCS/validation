/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "CheckMandatoryVariablesAndMA.h"

void CheckMandatoryVariablesAndMA_reset(outC_CheckMandatoryVariablesAndMA *outC)
{
  /* 5 */ CheckIfPacket15IsPresent_reset_SubFunctions(&outC->Context_5);
  /* 3 */ CheckIfPacket15IsPresent_reset_SubFunctions(&outC->Context_3);
  /* 1 */ CheckIfPacket15IsPresent_reset_SubFunctions(&outC->Context_1);
}

/* CheckMandatoryVariablesAndMA */
void CheckMandatoryVariablesAndMA(
  /* CheckMandatoryVariablesAndMA::rtmMessage */ReceivedMessage_T_Common_Types_Pkg *rtmMessage,
  outC_CheckMandatoryVariablesAndMA *outC)
{
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid1;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid5;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid4;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid9;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid8;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid13;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid12;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid17;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid16;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid21;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid20;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid18;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid19;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid14;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid15;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid10;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid11;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid6;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid7;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid2;
  /* CheckMandatoryVariablesAndMA::valid */ kcg_bool valid3;
  
  kcg_copy_ReceivedMessage_T_Common_Types_Pkg(&outC->_L1, rtmMessage);
  outC->_L2 = outC->_L1.Radio_Common_Header.nid_message;
  outC->nid_message = outC->_L2;
  outC->IfBlock1_clock = outC->nid_message == 3;
  if (outC->IfBlock1_clock) {
  }
  else {
    outC->_9_else_clock_IfBlock1 = outC->nid_message == 8;
    if (outC->_9_else_clock_IfBlock1) {
    }
    else {
      outC->_8_else_clock_IfBlock1 = outC->nid_message == 9;
      if (outC->_8_else_clock_IfBlock1) {
      }
      else {
        outC->_7_else_clock_IfBlock1 = outC->nid_message == 15;
        if (outC->_7_else_clock_IfBlock1) {
        }
        else {
          outC->_6_else_clock_IfBlock1 = outC->nid_message == 16;
          if (outC->_6_else_clock_IfBlock1) {
          }
          else {
            outC->_5_else_clock_IfBlock1 = outC->nid_message == 18;
            if (outC->_5_else_clock_IfBlock1) {
            }
            else {
              outC->_4_else_clock_IfBlock1 = outC->nid_message == 24;
              if (outC->_4_else_clock_IfBlock1) {
              }
              else {
                outC->_3_else_clock_IfBlock1 = outC->nid_message == 32;
                if (outC->_3_else_clock_IfBlock1) {
                }
                else {
                  outC->_2_else_clock_IfBlock1 = outC->nid_message == 33;
                  if (outC->_2_else_clock_IfBlock1) {
                  }
                  else {
                    outC->_1_else_clock_IfBlock1 = outC->nid_message == 39;
                    if (outC->_1_else_clock_IfBlock1) {
                    }
                    else {
                      outC->else_clock_IfBlock1 = outC->nid_message == 41;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
    &outC->_L3,
    &outC->_L1.radioMetadata);
  kcg_copy_RadioMetadata_T_Common_Types_Pkg(&outC->radioMetadata, &outC->_L3);
  if (outC->IfBlock1_clock) {
    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
      &outC->_L15_IfBlock1,
      &outC->radioMetadata);
    outC->_L6_IfBlock1 = outC->_L15_IfBlock1.m_version;
    outC->_L7_IfBlock1 = outC->_L15_IfBlock1.d_emergencystop;
    outC->_L8_IfBlock1 = outC->_L15_IfBlock1.q_dir;
    outC->_L9_IfBlock1 = outC->_L15_IfBlock1.d_ref;
    outC->_L10_IfBlock1 = outC->_L15_IfBlock1.t_sh_rqst;
    outC->_L11_IfBlock1 = outC->_L15_IfBlock1.d_sr;
    outC->_L12_IfBlock1 = outC->_L15_IfBlock1.q_scale;
    outC->_L13_IfBlock1 = outC->_L15_IfBlock1.nid_em;
    outC->_L14_IfBlock1 = outC->_L15_IfBlock1.t_train_reference;
    outC->_L2_IfBlock1 = outC->_L14_IfBlock1 | outC->_L13_IfBlock1 |
      outC->_L12_IfBlock1 | outC->_L11_IfBlock1 | outC->_L10_IfBlock1 |
      outC->_L9_IfBlock1 | outC->_L8_IfBlock1 | outC->_L7_IfBlock1 |
      outC->_L6_IfBlock1;
    outC->_L4_IfBlock1 = !outC->_L2_IfBlock1;
    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
      &outC->_L16_IfBlock1,
      rtmMessage);
    /* 1 */
    CheckIfPacket15IsPresent_SubFunctions(
      &outC->_L16_IfBlock1,
      &outC->Context_1);
    outC->_L17_IfBlock1 = outC->Context_1.result;
    outC->_L18_IfBlock1 = outC->_L4_IfBlock1 & outC->_L17_IfBlock1;
    valid1 = outC->_L18_IfBlock1;
    outC->valid = valid1;
  }
  else {
    if (outC->_9_else_clock_IfBlock1) {
      kcg_copy_RadioMetadata_T_Common_Types_Pkg(
        &outC->_L1311_IfBlock1,
        &outC->radioMetadata);
      outC->_L1113_IfBlock1 = outC->_L1311_IfBlock1.m_version;
      outC->_L1014_IfBlock1 = outC->_L1311_IfBlock1.d_emergencystop;
      outC->_L915_IfBlock1 = outC->_L1311_IfBlock1.q_dir;
      outC->_L816_IfBlock1 = outC->_L1311_IfBlock1.d_ref;
      outC->_L717_IfBlock1 = outC->_L1311_IfBlock1.t_sh_rqst;
      outC->_L618_IfBlock1 = outC->_L1311_IfBlock1.d_sr;
      outC->_L5_IfBlock1 = outC->_L1311_IfBlock1.q_scale;
      outC->_L419_IfBlock1 = outC->_L1311_IfBlock1.nid_em;
      outC->_L3_IfBlock1 = outC->_L1311_IfBlock1.t_train_reference;
      outC->_L1410_IfBlock1 = !outC->_L3_IfBlock1;
      outC->_L212_IfBlock1 = outC->_L1410_IfBlock1 | outC->_L419_IfBlock1 |
        outC->_L5_IfBlock1 | outC->_L618_IfBlock1 | outC->_L717_IfBlock1 |
        outC->_L816_IfBlock1 | outC->_L915_IfBlock1 | outC->_L1014_IfBlock1 |
        outC->_L1113_IfBlock1;
      outC->_L1220_IfBlock1 = !outC->_L212_IfBlock1;
      valid3 = outC->_L1220_IfBlock1;
      valid = valid3;
    }
    else {
      if (outC->_8_else_clock_IfBlock1) {
        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
          &outC->_L621_IfBlock1,
          &outC->radioMetadata);
        outC->_L1623_IfBlock1 = outC->_L621_IfBlock1.m_version;
        outC->_L1524_IfBlock1 = outC->_L621_IfBlock1.d_emergencystop;
        outC->_L1425_IfBlock1 = outC->_L621_IfBlock1.q_dir;
        outC->_L1326_IfBlock1 = outC->_L621_IfBlock1.d_ref;
        outC->_L1227_IfBlock1 = outC->_L621_IfBlock1.t_sh_rqst;
        outC->_L1128_IfBlock1 = outC->_L621_IfBlock1.d_sr;
        outC->_L1029_IfBlock1 = outC->_L621_IfBlock1.q_scale;
        outC->_L930_IfBlock1 = outC->_L621_IfBlock1.nid_em;
        outC->_L831_IfBlock1 = outC->_L621_IfBlock1.t_train_reference;
        outC->_L20_IfBlock1 = outC->_L831_IfBlock1 | outC->_L930_IfBlock1 |
          outC->_L1029_IfBlock1 | outC->_L1128_IfBlock1 |
          outC->_L1227_IfBlock1 | outC->_L1326_IfBlock1 |
          outC->_L1425_IfBlock1 | outC->_L1524_IfBlock1 | outC->_L1623_IfBlock1;
        outC->_L1833_IfBlock1 = !outC->_L20_IfBlock1;
        kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
          &outC->_L19_IfBlock1,
          rtmMessage);
        /* 3 */
        CheckIfPacket15IsPresent_SubFunctions(
          &outC->_L19_IfBlock1,
          &outC->Context_3);
        outC->_L722_IfBlock1 = outC->Context_3.result;
        outC->_L1732_IfBlock1 = outC->_L1833_IfBlock1 & outC->_L722_IfBlock1;
        valid5 = outC->_L1732_IfBlock1;
        valid2 = valid5;
      }
      else {
        if (outC->_7_else_clock_IfBlock1) {
          kcg_copy_RadioMetadata_T_Common_Types_Pkg(
            &outC->_L1449_IfBlock1,
            &outC->radioMetadata);
          outC->_L1139_IfBlock1 = outC->_L1449_IfBlock1.m_version;
          outC->_L1040_IfBlock1 = outC->_L1449_IfBlock1.d_emergencystop;
          outC->_L941_IfBlock1 = outC->_L1449_IfBlock1.q_dir;
          outC->_L842_IfBlock1 = outC->_L1449_IfBlock1.d_ref;
          outC->_L743_IfBlock1 = outC->_L1449_IfBlock1.t_sh_rqst;
          outC->_L644_IfBlock1 = outC->_L1449_IfBlock1.d_sr;
          outC->_L545_IfBlock1 = outC->_L1449_IfBlock1.q_scale;
          outC->_L446_IfBlock1 = outC->_L1449_IfBlock1.nid_em;
          outC->_L21_IfBlock1 = !outC->_L1040_IfBlock1;
          outC->_L2034_IfBlock1 = !outC->_L941_IfBlock1;
          outC->_L1935_IfBlock1 = !outC->_L842_IfBlock1;
          outC->_L1836_IfBlock1 = !outC->_L545_IfBlock1;
          outC->_L1637_IfBlock1 = !outC->_L446_IfBlock1;
          outC->_L347_IfBlock1 = outC->_L1449_IfBlock1.t_train_reference;
          outC->_L1348_IfBlock1 = outC->_L347_IfBlock1 | outC->_L1637_IfBlock1 |
            outC->_L1836_IfBlock1 | outC->_L644_IfBlock1 |
            outC->_L743_IfBlock1 | outC->_L1935_IfBlock1 |
            outC->_L2034_IfBlock1 | outC->_L21_IfBlock1 | outC->_L1139_IfBlock1;
          outC->_L238_IfBlock1 = !outC->_L1348_IfBlock1;
          valid7 = outC->_L238_IfBlock1;
          valid4 = valid7;
        }
        else {
          if (outC->_6_else_clock_IfBlock1) {
            kcg_copy_RadioMetadata_T_Common_Types_Pkg(
              &outC->_L38_IfBlock1,
              &outC->radioMetadata);
            outC->_L50_IfBlock1 = outC->_L38_IfBlock1.m_version;
            outC->_L49_IfBlock1 = outC->_L38_IfBlock1.d_emergencystop;
            outC->_L48_IfBlock1 = outC->_L38_IfBlock1.q_dir;
            outC->_L47_IfBlock1 = outC->_L38_IfBlock1.d_ref;
            outC->_L46_IfBlock1 = outC->_L38_IfBlock1.t_sh_rqst;
            outC->_L45_IfBlock1 = outC->_L38_IfBlock1.d_sr;
            outC->_L44_IfBlock1 = outC->_L38_IfBlock1.q_scale;
            outC->_L43_IfBlock1 = outC->_L38_IfBlock1.nid_em;
            outC->_L52_IfBlock1 = !outC->_L43_IfBlock1;
            outC->_L42_IfBlock1 = outC->_L38_IfBlock1.t_train_reference;
            outC->_L41_IfBlock1 = outC->_L42_IfBlock1 | outC->_L52_IfBlock1 |
              outC->_L44_IfBlock1 | outC->_L45_IfBlock1 | outC->_L46_IfBlock1 |
              outC->_L47_IfBlock1 | outC->_L48_IfBlock1 | outC->_L49_IfBlock1 |
              outC->_L50_IfBlock1;
            outC->_L39_IfBlock1 = !outC->_L41_IfBlock1;
            valid9 = outC->_L39_IfBlock1;
            valid6 = valid9;
          }
          else {
            if (outC->_5_else_clock_IfBlock1) {
              kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                &outC->_L1462_IfBlock1,
                &outC->radioMetadata);
              outC->_L1252_IfBlock1 = outC->_L1462_IfBlock1.m_version;
              outC->_L1153_IfBlock1 = outC->_L1462_IfBlock1.d_emergencystop;
              outC->_L1054_IfBlock1 = outC->_L1462_IfBlock1.q_dir;
              outC->_L955_IfBlock1 = outC->_L1462_IfBlock1.d_ref;
              outC->_L856_IfBlock1 = outC->_L1462_IfBlock1.t_sh_rqst;
              outC->_L757_IfBlock1 = outC->_L1462_IfBlock1.d_sr;
              outC->_L658_IfBlock1 = outC->_L1462_IfBlock1.q_scale;
              outC->_L559_IfBlock1 = outC->_L1462_IfBlock1.nid_em;
              outC->_L460_IfBlock1 = outC->_L1462_IfBlock1.t_train_reference;
              outC->_L1361_IfBlock1 = !outC->_L559_IfBlock1;
              outC->_L351_IfBlock1 = outC->_L460_IfBlock1 |
                outC->_L1361_IfBlock1 | outC->_L658_IfBlock1 |
                outC->_L757_IfBlock1 | outC->_L856_IfBlock1 |
                outC->_L955_IfBlock1 | outC->_L1054_IfBlock1 |
                outC->_L1153_IfBlock1 | outC->_L1252_IfBlock1;
              outC->_L250_IfBlock1 = !outC->_L351_IfBlock1;
              valid11 = outC->_L250_IfBlock1;
              valid8 = valid11;
            }
            else {
              if (outC->_4_else_clock_IfBlock1) {
                kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                  &outC->_L1163_IfBlock1,
                  &outC->radioMetadata);
                outC->_L2064_IfBlock1 = outC->_L1163_IfBlock1.m_version;
                outC->_L1965_IfBlock1 = outC->_L1163_IfBlock1.d_emergencystop;
                outC->_L1866_IfBlock1 = outC->_L1163_IfBlock1.q_dir;
                outC->_L1767_IfBlock1 = outC->_L1163_IfBlock1.d_ref;
                outC->_L1668_IfBlock1 = outC->_L1163_IfBlock1.t_sh_rqst;
                outC->_L1569_IfBlock1 = outC->_L1163_IfBlock1.d_sr;
                outC->_L1470_IfBlock1 = outC->_L1163_IfBlock1.q_scale;
                outC->_L1371_IfBlock1 = outC->_L1163_IfBlock1.nid_em;
                outC->_L1272_IfBlock1 = outC->_L1163_IfBlock1.t_train_reference;
                outC->_L2173_IfBlock1 = outC->_L1272_IfBlock1 |
                  outC->_L1371_IfBlock1 | outC->_L1470_IfBlock1 |
                  outC->_L1569_IfBlock1 | outC->_L1668_IfBlock1 |
                  outC->_L1767_IfBlock1 | outC->_L1866_IfBlock1 |
                  outC->_L1965_IfBlock1 | outC->_L2064_IfBlock1;
                outC->_L22_IfBlock1 = !outC->_L2173_IfBlock1;
                valid13 = outC->_L22_IfBlock1;
                valid10 = valid13;
              }
              else {
                if (outC->_3_else_clock_IfBlock1) {
                  kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                    &outC->_L1385_IfBlock1,
                    &outC->radioMetadata);
                  outC->_L1276_IfBlock1 = outC->_L1385_IfBlock1.m_version;
                  outC->_L1177_IfBlock1 = outC->_L1385_IfBlock1.d_emergencystop;
                  outC->_L1078_IfBlock1 = outC->_L1385_IfBlock1.q_dir;
                  outC->_L979_IfBlock1 = outC->_L1385_IfBlock1.d_ref;
                  outC->_L880_IfBlock1 = outC->_L1385_IfBlock1.t_sh_rqst;
                  outC->_L781_IfBlock1 = outC->_L1385_IfBlock1.d_sr;
                  outC->_L682_IfBlock1 = outC->_L1385_IfBlock1.q_scale;
                  outC->_L583_IfBlock1 = outC->_L1385_IfBlock1.nid_em;
                  outC->_L1574_IfBlock1 = !outC->_L1276_IfBlock1;
                  outC->_L484_IfBlock1 =
                    outC->_L1385_IfBlock1.t_train_reference;
                  outC->_L1486_IfBlock1 = outC->_L484_IfBlock1 |
                    outC->_L583_IfBlock1 | outC->_L682_IfBlock1 |
                    outC->_L781_IfBlock1 | outC->_L880_IfBlock1 |
                    outC->_L979_IfBlock1 | outC->_L1078_IfBlock1 |
                    outC->_L1177_IfBlock1 | outC->_L1574_IfBlock1;
                  outC->_L275_IfBlock1 = !outC->_L1486_IfBlock1;
                  valid15 = outC->_L275_IfBlock1;
                  valid12 = valid15;
                }
                else {
                  if (outC->_2_else_clock_IfBlock1) {
                    kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                      &outC->_L15102_IfBlock1,
                      &outC->radioMetadata);
                    outC->_L1089_IfBlock1 = outC->_L15102_IfBlock1.m_version;
                    outC->_L990_IfBlock1 =
                      outC->_L15102_IfBlock1.d_emergencystop;
                    outC->_L891_IfBlock1 = outC->_L15102_IfBlock1.q_dir;
                    outC->_L792_IfBlock1 = outC->_L15102_IfBlock1.d_ref;
                    outC->_L693_IfBlock1 = outC->_L15102_IfBlock1.t_sh_rqst;
                    outC->_L594_IfBlock1 = outC->_L15102_IfBlock1.d_sr;
                    outC->_L495_IfBlock1 = outC->_L15102_IfBlock1.q_scale;
                    outC->_L396_IfBlock1 = outC->_L15102_IfBlock1.nid_em;
                    outC->_L2087_IfBlock1 = !outC->_L792_IfBlock1;
                    outC->_L1788_IfBlock1 = !outC->_L495_IfBlock1;
                    outC->_L297_IfBlock1 =
                      outC->_L15102_IfBlock1.t_train_reference;
                    outC->_L16103_IfBlock1 = outC->_L297_IfBlock1 |
                      outC->_L396_IfBlock1 | outC->_L1788_IfBlock1 |
                      outC->_L594_IfBlock1 | outC->_L693_IfBlock1 |
                      outC->_L2087_IfBlock1 | outC->_L891_IfBlock1 |
                      outC->_L990_IfBlock1 | outC->_L1089_IfBlock1;
                    kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
                      &outC->_L14101_IfBlock1,
                      rtmMessage);
                    outC->_L1299_IfBlock1 = !outC->_L16103_IfBlock1;
                    /* 5 */
                    CheckIfPacket15IsPresent_SubFunctions(
                      &outC->_L14101_IfBlock1,
                      &outC->Context_5);
                    outC->_L1198_IfBlock1 = outC->Context_5.result;
                    outC->_L13100_IfBlock1 = outC->_L1299_IfBlock1 &
                      outC->_L1198_IfBlock1;
                    valid17 = outC->_L13100_IfBlock1;
                    valid14 = valid17;
                  }
                  else {
                    if (outC->_1_else_clock_IfBlock1) {
                      kcg_copy_ReceivedMessage_T_Common_Types_Pkg(
                        &outC->_L2107_IfBlock1,
                        rtmMessage);
                      outC->_L3106_IfBlock1 =
                        outC->_L2107_IfBlock1.Radio_Common_Header.m_ack;
                      outC->_L5104_IfBlock1 = M_ACK_No_acknowledgement_required;
                      outC->_L4105_IfBlock1 = outC->_L3106_IfBlock1 ==
                        outC->_L5104_IfBlock1;
                      valid19 = outC->_L4105_IfBlock1;
                      valid16 = valid19;
                    }
                    else {
                      if (outC->else_clock_IfBlock1) {
                        kcg_copy_RadioMetadata_T_Common_Types_Pkg(
                          &outC->_L18119_IfBlock1,
                          &outC->radioMetadata);
                        outC->_L17110_IfBlock1 =
                          outC->_L18119_IfBlock1.m_version;
                        outC->_L16111_IfBlock1 =
                          outC->_L18119_IfBlock1.d_emergencystop;
                        outC->_L15112_IfBlock1 = outC->_L18119_IfBlock1.q_dir;
                        outC->_L14113_IfBlock1 = outC->_L18119_IfBlock1.d_ref;
                        outC->_L13114_IfBlock1 =
                          outC->_L18119_IfBlock1.t_sh_rqst;
                        outC->_L12115_IfBlock1 = outC->_L18119_IfBlock1.d_sr;
                        outC->_L11116_IfBlock1 = outC->_L18119_IfBlock1.q_scale;
                        outC->_L10117_IfBlock1 = outC->_L18119_IfBlock1.nid_em;
                        outC->_L9118_IfBlock1 =
                          outC->_L18119_IfBlock1.t_train_reference;
                        outC->_L7108_IfBlock1 = outC->_L9118_IfBlock1 |
                          outC->_L10117_IfBlock1 | outC->_L11116_IfBlock1 |
                          outC->_L12115_IfBlock1 | outC->_L13114_IfBlock1 |
                          outC->_L14113_IfBlock1 | outC->_L15112_IfBlock1 |
                          outC->_L16111_IfBlock1 | outC->_L17110_IfBlock1;
                        outC->_L8109_IfBlock1 = !outC->_L7108_IfBlock1;
                        valid21 = outC->_L8109_IfBlock1;
                        valid18 = valid21;
                      }
                      else {
                        outC->_L1_IfBlock1 = kcg_false;
                        valid20 = outC->_L1_IfBlock1;
                        valid18 = valid20;
                      }
                      valid16 = valid18;
                    }
                    valid14 = valid16;
                  }
                  valid12 = valid14;
                }
                valid10 = valid12;
              }
              valid8 = valid10;
            }
            valid6 = valid8;
          }
          valid4 = valid6;
        }
        valid2 = valid4;
      }
      valid = valid2;
    }
    outC->valid = valid;
  }
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** CheckMandatoryVariablesAndMA.c
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

