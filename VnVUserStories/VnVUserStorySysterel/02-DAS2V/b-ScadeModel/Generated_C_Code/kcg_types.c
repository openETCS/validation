/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

#include "kcg_types.h"

kcg_bool kcg_comp_struct__1254(struct__1254 *kcg_c1, struct__1254 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_DISTANCE_ANTENNA_MIN_SAFE_FRONT ==
      kcg_c2->D_DISTANCE_ANTENNA_MIN_SAFE_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->D_DISTANCE_ANTENNA_MAX_SAFE_FRONT ==
      kcg_c2->D_DISTANCE_ANTENNA_MAX_SAFE_FRONT);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1259(struct__1259 *kcg_c1, struct__1259 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_POSOFF_MIN_SAFE_FRONT ==
      kcg_c2->D_POSOFF_MIN_SAFE_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->D_POSOFF_MAX_SAFE_FRONT ==
      kcg_c2->D_POSOFF_MAX_SAFE_FRONT);
  kcg_equ = kcg_equ & (kcg_c1->M_POSITION == kcg_c2->M_POSITION);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1265(struct__1265 *kcg_c1, struct__1265 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->V_TRAIN_SPEED == kcg_c2->V_TRAIN_SPEED);
  kcg_equ = kcg_equ & kcg_comp_struct__1259(
      &kcg_c1->M_TRAIN_POSITIONS,
      &kcg_c2->M_TRAIN_POSITIONS);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1270(struct__1270 *kcg_c1, struct__1270 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->M_POSITION == kcg_c2->M_POSITION);
  kcg_equ = kcg_equ & (kcg_c1->D_POSOFF == kcg_c2->D_POSOFF);
  kcg_equ = kcg_equ & (kcg_c1->NID_BG == kcg_c2->NID_BG);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1276(struct__1276 *kcg_c1, struct__1276 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_SERVICE_BRAKE_COMMAND ==
      kcg_c2->Q_SERVICE_BRAKE_COMMAND);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1280(struct__1280 *kcg_c1, struct__1280 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_ACK_REQUEST == kcg_c2->Q_ACK_REQUEST);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1284(struct__1284 *kcg_c1, struct__1284 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->Q_DRIVER_ACK_OS_MODE ==
      kcg_c2->Q_DRIVER_ACK_OS_MODE);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1288(struct__1288 *kcg_c1, struct__1288 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_ACK_OS_AREA == kcg_c2->L_ACK_OS_AREA);
  kcg_equ = kcg_equ & (kcg_c1->L_OS_AREA == kcg_c2->L_OS_AREA);
  kcg_equ = kcg_equ & (kcg_c1->V_OS_AREA == kcg_c2->V_OS_AREA);
  kcg_equ = kcg_equ & (kcg_c1->M_MAMODE == kcg_c2->M_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->D_START_OS_AREA == kcg_c2->D_START_OS_AREA);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1296(struct__1296 *kcg_c1, struct__1296 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->L_ACKMAMODE == kcg_c2->L_ACKMAMODE);
  kcg_equ = kcg_equ & (kcg_c1->L_MAMODE == kcg_c2->L_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->V_MAMODE == kcg_c2->V_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->M_MAMODE == kcg_c2->M_MAMODE);
  kcg_equ = kcg_equ & (kcg_c1->D_MAMODE == kcg_c2->D_MAMODE);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1304(struct__1304 *kcg_c1, struct__1304 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & kcg_comp_struct__1296(
      &kcg_c1->M_PACKET_MODE_PROFILE,
      &kcg_c2->M_PACKET_MODE_PROFILE);
  kcg_equ = kcg_equ & kcg_comp_struct__1270(
      &kcg_c1->M_PACKET_GEO_POS_INFO,
      &kcg_c2->M_PACKET_GEO_POS_INFO);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1309(struct__1309 *kcg_c1, struct__1309 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->NID_LRBG_BTM == kcg_c2->NID_LRBG_BTM);
  kcg_equ = kcg_equ & kcg_comp_struct__1296(
      &kcg_c1->M_PACKET_MODE_PROFILE,
      &kcg_c2->M_PACKET_MODE_PROFILE);
  kcg_equ = kcg_equ & kcg_comp_struct__1270(
      &kcg_c1->M_PACKET_GEO_POS_INFO,
      &kcg_c2->M_PACKET_GEO_POS_INFO);
  return kcg_equ;
}

kcg_bool kcg_comp_struct__1315(struct__1315 *kcg_c1, struct__1315 *kcg_c2)
{
  kcg_bool kcg_equ;
  
  kcg_equ = kcg_true;
  kcg_equ = kcg_equ & (kcg_c1->D_DISTANCE_ODO == kcg_c2->D_DISTANCE_ODO);
  return kcg_equ;
}

/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.c
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

