/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION_H_
#define _M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  s_train_information /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::M_TRAIN_INFO */ M_TRAIN_INFO;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  s_train_positions /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::M_TRAIN_POSITIONS_LOC */ M_TRAIN_POSITIONS_LOC;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION;

/* ===========  node initialization and cycle functions  =========== */
/** "Graphical_3" {Text = "****** Determine Data Out ******************************************************************************************************************************************"} */
/* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION */
extern void M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION(
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::M_GEO_POS_INFO */s_geo_pos_info *M_GEO_POS_INFO,
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::D_DISTANCE_ODO */kcg_int D_DISTANCE_ODO,
  /* M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION::M_PARAMETERS */s_parameters *M_PARAMETERS,
  outC_M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION *outC);

extern void M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION_reset(
  outC_M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION *outC);

#endif /* _M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** M03_A00_DETERMINE_TRAIN_SPEED_AND_POSITION.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

