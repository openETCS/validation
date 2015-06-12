/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _TRAIN_systemTimeGenerator_Toolbox_Functions_H_
#define _TRAIN_systemTimeGenerator_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::timestamp */ timestamp;
  /* -----------------------  no local probes  ----------------------- */
  /* -------------------- initialization variables  ------------------ */
  kcg_bool init;
  /* ----------------------- local memories  ------------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::_L2 */ _L2;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::_L4 */ _L4;
  kcg_int /* Toolbox::Functions::TRAIN_systemTimeGenerator::_L3 */ _L3;
} outC_TRAIN_systemTimeGenerator_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::TRAIN_systemTimeGenerator */
extern void TRAIN_systemTimeGenerator_Toolbox_Functions(
  /* Toolbox::Functions::TRAIN_systemTimeGenerator::deltaTime */kcg_int deltaTime,
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);

extern void TRAIN_systemTimeGenerator_reset_Toolbox_Functions(
  outC_TRAIN_systemTimeGenerator_Toolbox_Functions *outC);

#endif /* _TRAIN_systemTimeGenerator_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** TRAIN_systemTimeGenerator_Toolbox_Functions.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

