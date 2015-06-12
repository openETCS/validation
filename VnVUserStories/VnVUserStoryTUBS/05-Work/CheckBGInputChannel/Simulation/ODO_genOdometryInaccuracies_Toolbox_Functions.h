/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config C:/Welte-Dokumente/GitHub/jW/validation/VnVUserStories/VnVUserStoryTUBS/05-Work/CheckBGInputChannel/Simulation\kcg_s2c_config.txt
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */
#ifndef _ODO_genOdometryInaccuracies_Toolbox_Functions_H_
#define _ODO_genOdometryInaccuracies_Toolbox_Functions_H_

#include "kcg_types.h"

/* =====================  no input structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryLocations */ odometryLocations;
  /* -----------------------  no local probes  ----------------------- */
  /* -----------------  no initialization variables  ----------------- */
  /* -----------------------  no local memory  ----------------------- */
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
  /* -------------------- (-debug) no assertions  -------------------- */
  /* ------------------- (-debug) local variables -------------------- */
  L_internal_Type_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L1 */ _L1;
  OdometryLocations_T_Obu_BasicTypes_Pkg /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L8 */ _L8;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L16 */ _L16;
  kcg_int /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L17 */ _L17;
  kcg_int /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L18 */ _L18;
  kcg_int /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L19 */ _L19;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L20 */ _L20;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L21 */ _L21;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L22 */ _L22;
  odometryFactors_T_Toolbox /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L33 */ _L33;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L36 */ _L36;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L35 */ _L35;
  kcg_real /* Toolbox::Functions::ODO_genOdometryInaccuracies::_L34 */ _L34;
} outC_ODO_genOdometryInaccuracies_Toolbox_Functions;

/* ===========  node initialization and cycle functions  =========== */
/* Toolbox::Functions::ODO_genOdometryInaccuracies */
extern void ODO_genOdometryInaccuracies_Toolbox_Functions(
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::trueLocation */L_internal_Type_Obu_BasicTypes_Pkg trueLocation,
  /* Toolbox::Functions::ODO_genOdometryInaccuracies::odometryProperties */odometryFactors_T_Toolbox *odometryProperties,
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);

extern void ODO_genOdometryInaccuracies_reset_Toolbox_Functions(
  outC_ODO_genOdometryInaccuracies_Toolbox_Functions *outC);

#endif /* _ODO_genOdometryInaccuracies_Toolbox_Functions_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** ODO_genOdometryInaccuracies_Toolbox_Functions.h
** Generation date: 2015-06-12T21:21:30
*************************************************************$ */

