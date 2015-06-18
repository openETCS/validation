/* $*************** KCG Version 6.1.3 (build i6) ****************
** Command: s2c613 -config D:/User/bw1stws0/text/z_OpenETCS/muell/muell_09/b-ScadeModel/SCADE_Procedure_OS_Systerel/KCG\kcg_s2c_config.txt
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */
#ifndef _KCG_TYPES_H_
#define _KCG_TYPES_H_

#define KCG_MAPW_CPY

#include "./user_macros.h"

#ifndef kcg_int
#define kcg_int kcg_int
typedef int kcg_int;
#endif /* kcg_int */

#ifndef kcg_bool
#define kcg_bool kcg_bool
typedef unsigned char kcg_bool;
#endif /* kcg_bool */

#ifndef kcg_real
#define kcg_real kcg_real
typedef double kcg_real;
#endif /* kcg_real */

#ifndef kcg_char
#define kcg_char kcg_char
typedef unsigned char kcg_char;
#endif /* kcg_char */

#ifndef kcg_false
#define kcg_false ((kcg_bool) 0)
#endif /* kcg_false */

#ifndef kcg_true
#define kcg_true ((kcg_bool) 1)
#endif /* kcg_true */

#ifndef kcg_assign
#include "kcg_assign.h"
#endif /* kcg_assign */

#ifndef kcg_assign_struct
#define kcg_assign_struct kcg_assign
#endif /* kcg_assign_struct */

#ifndef kcg_assign_array
#define kcg_assign_array kcg_assign
#endif /* kcg_assign_array */

/* enum_evc_mode */
typedef enum {
  NP,
  SB,
  PS,
  SH,
  FS,
  LS,
  SR,
  OS,
  SL,
  NL,
  UN,
  TR,
  PT,
  SF,
  IS,
  SN,
  RV
} enum_evc_mode;
/* enum_mamode */
typedef enum { PROFILE_OS, PROFILE_SH, PROFILE_LS, NO_PROFILE } enum_mamode;
/* enum_level_etcs */
typedef enum { LEVEL_0, LEVEL_NTC, LEVEL_1, LEVEL_2, LEVEL_3 } enum_level_etcs;
typedef struct {
  kcg_int D_DISTANCE_ANTENNA_MAX_SAFE_FRONT;
  kcg_int D_DISTANCE_ANTENNA_MIN_SAFE_FRONT;
} struct__1254;

/* s_parameters */
typedef struct__1254 s_parameters;

typedef struct {
  kcg_int M_POSITION;
  kcg_int D_POSOFF_MAX_SAFE_FRONT;
  kcg_int D_POSOFF_MIN_SAFE_FRONT;
} struct__1259;

/* s_train_positions */
typedef struct__1259 s_train_positions;

typedef struct {
  s_train_positions M_TRAIN_POSITIONS;
  kcg_int V_TRAIN_SPEED;
} struct__1265;

/* s_train_information */
typedef struct__1265 s_train_information;

typedef struct {
  kcg_int NID_BG;
  kcg_int D_POSOFF;
  kcg_int M_POSITION;
} struct__1270;

/* s_packet_geographical_position_information */
typedef struct__1270 s_packet_geographical_position_information;

/* s_geo_pos_info */
typedef struct__1270 s_geo_pos_info;

typedef struct { kcg_bool Q_SERVICE_BRAKE_COMMAND; } struct__1276;

/* s_datas_out_biu */
typedef struct__1276 s_datas_out_biu;

typedef struct { kcg_bool Q_ACK_REQUEST; } struct__1280;

/* s_datas_out_dmi */
typedef struct__1280 s_datas_out_dmi;

typedef struct { kcg_bool Q_DRIVER_ACK_OS_MODE; } struct__1284;

/* s_datas_in_dmi */
typedef struct__1284 s_datas_in_dmi;

typedef struct {
  kcg_int D_START_OS_AREA;
  enum_mamode M_MAMODE;
  kcg_int V_OS_AREA;
  kcg_int L_OS_AREA;
  kcg_int L_ACK_OS_AREA;
} struct__1288;

/* s_os_area */
typedef struct__1288 s_os_area;

typedef struct {
  kcg_int D_MAMODE;
  enum_mamode M_MAMODE;
  kcg_int V_MAMODE;
  kcg_int L_MAMODE;
  kcg_int L_ACKMAMODE;
} struct__1296;

/* s_packet_mode_profile */
typedef struct__1296 s_packet_mode_profile;

typedef struct {
  s_packet_geographical_position_information M_PACKET_GEO_POS_INFO;
  s_packet_mode_profile M_PACKET_MODE_PROFILE;
} struct__1304;

/* s_datas_in_radio */
typedef struct__1304 s_datas_in_radio;

typedef struct {
  s_packet_geographical_position_information M_PACKET_GEO_POS_INFO;
  s_packet_mode_profile M_PACKET_MODE_PROFILE;
  kcg_int NID_LRBG_BTM;
} struct__1309;

/* s_datas_in_btm */
typedef struct__1309 s_datas_in_btm;

typedef struct { kcg_int D_DISTANCE_ODO; } struct__1315;

/* s_datas_in_odo */
typedef struct__1315 s_datas_in_odo;

#ifndef kcg_copy_struct__1254
#define kcg_copy_struct__1254(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1254)))
#endif /* kcg_copy_struct__1254 */

#ifndef kcg_copy_struct__1259
#define kcg_copy_struct__1259(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1259)))
#endif /* kcg_copy_struct__1259 */

#ifndef kcg_copy_struct__1265
#define kcg_copy_struct__1265(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1265)))
#endif /* kcg_copy_struct__1265 */

#ifndef kcg_copy_struct__1270
#define kcg_copy_struct__1270(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1270)))
#endif /* kcg_copy_struct__1270 */

#ifndef kcg_copy_struct__1276
#define kcg_copy_struct__1276(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1276)))
#endif /* kcg_copy_struct__1276 */

#ifndef kcg_copy_struct__1280
#define kcg_copy_struct__1280(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1280)))
#endif /* kcg_copy_struct__1280 */

#ifndef kcg_copy_struct__1284
#define kcg_copy_struct__1284(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1284)))
#endif /* kcg_copy_struct__1284 */

#ifndef kcg_copy_struct__1288
#define kcg_copy_struct__1288(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1288)))
#endif /* kcg_copy_struct__1288 */

#ifndef kcg_copy_struct__1296
#define kcg_copy_struct__1296(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1296)))
#endif /* kcg_copy_struct__1296 */

#ifndef kcg_copy_struct__1304
#define kcg_copy_struct__1304(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1304)))
#endif /* kcg_copy_struct__1304 */

#ifndef kcg_copy_struct__1309
#define kcg_copy_struct__1309(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1309)))
#endif /* kcg_copy_struct__1309 */

#ifndef kcg_copy_struct__1315
#define kcg_copy_struct__1315(kcg_C1, kcg_C2) (kcg_assign_struct((kcg_C1), (kcg_C2), sizeof (struct__1315)))
#endif /* kcg_copy_struct__1315 */

#ifndef kcg_comp_struct__1254
extern kcg_bool kcg_comp_struct__1254(
  struct__1254 *kcg_c1,
  struct__1254 *kcg_c2);
#endif /* kcg_comp_struct__1254 */

#ifndef kcg_comp_struct__1259
extern kcg_bool kcg_comp_struct__1259(
  struct__1259 *kcg_c1,
  struct__1259 *kcg_c2);
#endif /* kcg_comp_struct__1259 */

#ifndef kcg_comp_struct__1265
extern kcg_bool kcg_comp_struct__1265(
  struct__1265 *kcg_c1,
  struct__1265 *kcg_c2);
#endif /* kcg_comp_struct__1265 */

#ifndef kcg_comp_struct__1270
extern kcg_bool kcg_comp_struct__1270(
  struct__1270 *kcg_c1,
  struct__1270 *kcg_c2);
#endif /* kcg_comp_struct__1270 */

#ifndef kcg_comp_struct__1276
extern kcg_bool kcg_comp_struct__1276(
  struct__1276 *kcg_c1,
  struct__1276 *kcg_c2);
#endif /* kcg_comp_struct__1276 */

#ifndef kcg_comp_struct__1280
extern kcg_bool kcg_comp_struct__1280(
  struct__1280 *kcg_c1,
  struct__1280 *kcg_c2);
#endif /* kcg_comp_struct__1280 */

#ifndef kcg_comp_struct__1284
extern kcg_bool kcg_comp_struct__1284(
  struct__1284 *kcg_c1,
  struct__1284 *kcg_c2);
#endif /* kcg_comp_struct__1284 */

#ifndef kcg_comp_struct__1288
extern kcg_bool kcg_comp_struct__1288(
  struct__1288 *kcg_c1,
  struct__1288 *kcg_c2);
#endif /* kcg_comp_struct__1288 */

#ifndef kcg_comp_struct__1296
extern kcg_bool kcg_comp_struct__1296(
  struct__1296 *kcg_c1,
  struct__1296 *kcg_c2);
#endif /* kcg_comp_struct__1296 */

#ifndef kcg_comp_struct__1304
extern kcg_bool kcg_comp_struct__1304(
  struct__1304 *kcg_c1,
  struct__1304 *kcg_c2);
#endif /* kcg_comp_struct__1304 */

#ifndef kcg_comp_struct__1309
extern kcg_bool kcg_comp_struct__1309(
  struct__1309 *kcg_c1,
  struct__1309 *kcg_c2);
#endif /* kcg_comp_struct__1309 */

#ifndef kcg_comp_struct__1315
extern kcg_bool kcg_comp_struct__1315(
  struct__1315 *kcg_c1,
  struct__1315 *kcg_c2);
#endif /* kcg_comp_struct__1315 */

#define kcg_comp_s_datas_in_odo kcg_comp_struct__1315

#define kcg_copy_s_datas_in_odo kcg_copy_struct__1315

#define kcg_comp_s_parameters kcg_comp_struct__1254

#define kcg_copy_s_parameters kcg_copy_struct__1254

#define kcg_comp_s_train_information kcg_comp_struct__1265

#define kcg_copy_s_train_information kcg_copy_struct__1265

#define kcg_comp_s_geo_pos_info kcg_comp_struct__1270

#define kcg_copy_s_geo_pos_info kcg_copy_struct__1270

#define kcg_comp_s_packet_mode_profile kcg_comp_struct__1296

#define kcg_copy_s_packet_mode_profile kcg_copy_struct__1296

#define kcg_comp_s_packet_geographical_position_information kcg_comp_struct__1270

#define kcg_copy_s_packet_geographical_position_information kcg_copy_struct__1270

#define kcg_comp_s_datas_out_biu kcg_comp_struct__1276

#define kcg_copy_s_datas_out_biu kcg_copy_struct__1276

#define kcg_comp_s_datas_out_dmi kcg_comp_struct__1280

#define kcg_copy_s_datas_out_dmi kcg_copy_struct__1280

#define kcg_comp_s_datas_in_dmi kcg_comp_struct__1284

#define kcg_copy_s_datas_in_dmi kcg_copy_struct__1284

#define kcg_comp_s_os_area kcg_comp_struct__1288

#define kcg_copy_s_os_area kcg_copy_struct__1288

#define kcg_comp_s_train_positions kcg_comp_struct__1259

#define kcg_copy_s_train_positions kcg_copy_struct__1259

#define kcg_comp_s_datas_in_radio kcg_comp_struct__1304

#define kcg_copy_s_datas_in_radio kcg_copy_struct__1304

#define kcg_comp_s_datas_in_btm kcg_comp_struct__1309

#define kcg_copy_s_datas_in_btm kcg_copy_struct__1309

#endif /* _KCG_TYPES_H_ */
/* $*************** KCG Version 6.1.3 (build i6) ****************
** kcg_types.h
** Generation date: 2013-10-16T13:43:10
*************************************************************$ */

