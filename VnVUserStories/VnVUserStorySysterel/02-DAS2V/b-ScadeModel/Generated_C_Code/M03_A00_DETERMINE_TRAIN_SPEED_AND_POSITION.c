/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_consts.h"
#include "kcg_sensors.h"
#include "M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION.h"

void M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION_reset(
  outC_M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION *outC)
{
  outC->init = kcg_true;
}

/** "Graphical_3" {Text = "****** Determine Data Out ******************************************************************************************************************************************"} */
/* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION */
void M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION(
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::M_GEO_POS_INFO */s_geo_pos_info *M_GEO_POS_INFO,
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::D_DISTANCE_ODO */kcg_int D_DISTANCE_ODO,
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::M_PARAMETERS */s_parameters *M_PARAMETERS,
  outC_M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION *outC)
{
  kcg_int tmp1;
  kcg_int tmp;
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::_L11 */ kcg_bool _L11;
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::_L17 */ s_train_positions _L17;
  
  outC->M_TRAIN_INFO.V_TRAIN_SPEED = D_DISTANCE_ODO * K_S_TO_MS /
    K_PERIOD_APPLI;
  if (outC->init) {
    outC->init = kcg_false;
    kcg_copy_s_train_positions(
      &_L17,
      (s_train_positions *) &K_TRAIN_POSITIONS_DEF);
  }
  else {
    kcg_copy_s_train_positions(&_L17, &outC->M_TRAIN_POSITIONS_LOC);
  }
  _L11 = (*M_GEO_POS_INFO).M_POSITION != _L17.M_POSITION;
  if (_L11) {
    outC->M_TRAIN_POSITIONS_LOC.M_POSITION = (*M_GEO_POS_INFO).M_POSITION;
    tmp1 = (*M_PARAMETERS).D_DISTANCE_ANTENNA_MAX_SAFE_FRONT;
    tmp = (*M_PARAMETERS).D_DISTANCE_ANTENNA_MIN_SAFE_FRONT;
  }
  else {
    outC->M_TRAIN_POSITIONS_LOC.M_POSITION = _L17.M_POSITION;
    tmp1 = _L17.D_POSOFF_MAX_SAFE_FRONT + D_DISTANCE_ODO;
    tmp = _L17.D_POSOFF_MIN_SAFE_FRONT + D_DISTANCE_ODO;
  }
  outC->M_TRAIN_POSITIONS_LOC.D_POSOFF_MAX_SAFE_FRONT = tmp1;
  outC->M_TRAIN_POSITIONS_LOC.D_POSOFF_MIN_SAFE_FRONT = tmp;
  kcg_copy_s_train_positions(
    &outC->M_TRAIN_INFO.M_TRAIN_POSITIONS,
    &outC->M_TRAIN_POSITIONS_LOC);
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

