/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "EVC.h"

void EVC_reset(outC_EVC *outC)
{
  outC->init = kcg_true;
  /* 1 */ M04_A00_DETERMINE_MODE_AND_LEVEL_reset(&outC->Context_1);
  /* 1 */ M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION_reset(&outC->_1_Context_1);
}

/* EVC */
void EVC(inC_EVC *inC, outC_EVC *outC)
{
  enum_level_etcs tmp;
  /* EVC::D_DISTANCE_ODO_LOC */ kcg_int D_DISTANCE_ODO_LOC;
  /* EVC::M_OS_AREA_LOC */ s_os_area M_OS_AREA_LOC;
  /* EVC::_L10 */ s_os_area _L10;
  /* EVC::_L11 */ s_os_area _L11;
  /* EVC::_L14 */ kcg_int _L14;
  /* EVC::_L18 */ kcg_bool _L18;
  /* EVC::_L19 */ kcg_bool _L19;
  /* EVC::_L22 */ s_geo_pos_info _L22;
  /* EVC::_L23 */ s_geo_pos_info _L23;
  /* EVC::_L24 */ s_geo_pos_info _L24;
  
  /* 1 */
  M01_A00_EXTRACT_DATAS_IN(
    &inC->M_DATAS_IN_ODO,
    &inC->M_DATAS_IN_RADIO,
    &inC->M_DATAS_IN_BTM,
    &inC->M_DATAS_IN_DMI,
    &D_DISTANCE_ODO_LOC,
    &_L18,
    &_L14,
    &_L11,
    &_L23,
    &_L10,
    &_L22);
  if (outC->init) {
    outC->init = kcg_false;
    tmp = LEVEL_0;
  }
  else {
    tmp = outC->M_LEVEL_ETCS_LOC;
  }
  /* 1 */
  M02_A00_DATA_CONSISTENCY(
    &_L11,
    &_L23,
    &_L10,
    &_L22,
    tmp,
    &M_OS_AREA_LOC,
    &_L24);
  /* 1 */
  M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION(
    &_L24,
    D_DISTANCE_ODO_LOC,
    &inC->M_PARAMETERS,
    &outC->_1_Context_1);
  /* 1 */
  M04_A00_DETERMINE_MODE_AND_LEVEL(
    &outC->_1_Context_1.M_TRAIN_INFO,
    _L18,
    &M_OS_AREA_LOC,
    &outC->Context_1);
  outC->M_LEVEL_ETCS_LOC = outC->Context_1.M_LEVEL_ETCS;
  _L18 = outC->Context_1.Q_ACK_REQUEST_OS_MODE;
  _L19 = outC->Context_1.Q_SERVICE_BRAKE_COMMAND;
  /* 1 */
  M05_A00_BUILD_DATAS_OUT(
    _L18,
    _L19,
    &outC->M_DATAS_OUT_DMI,
    &outC->M_DATAS_OUT_BIU);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** EVC.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

