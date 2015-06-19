/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _ODO_genSpeedInaccuracies_Toolbox_Functions_H_
#define _ODO_genSpeedInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometrySpeeds */ odometrySpeeds;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L12 */ _L12;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L11 */ _L11;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L8 */ _L8;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L7 */ _L7;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L6 */ _L6;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L2 */ _L2;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L1 */ _L1;
  OdometrySpeeds_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L13 */ _L13;
  odometryFactors_T_Toolbox /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L14 */ _L14;
  Speed_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L15 */ _L15;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L16 */ _L16;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L17 */ _L17;
  kcg_int /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L18 */ _L18;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L21 */ _L21;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L20 */ _L20;
  kcg_real /* Toolbox::Functions::ODO_genSpeedInaccuracies::_L19 */ _L19;
} outC_ODO_genSpeedInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genSpeedInaccuracies */
extern void ODO_genSpeedInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::trueVelocity */Speed_T_Obu_BasicTypes_Pkg trueVelocity,
  /* Toolbox::Functions::ODO_genSpeedInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);

extern void ODO_genSpeedInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genSpeedInaccuracies_Toolbox_Functions *outC);

#endif /* _ODO_genSpeedInaccuracies_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genSpeedInaccuracies_Toolbox_Functions.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

