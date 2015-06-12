/* CheckBGInputChannel_newmapping.c */

#include <stddef.h>

#include "NewSmuTypes.h"
#include "NewSmuMapping.h"
#include "CheckBGInputChannel_newtype.h"
#include "CheckBGInputChannel_newmapping.h"

/* iterators */
static const MappingIterator iter_array_10;
static const MappingIterator iter_array_30;
static const MappingIterator iter_array_500;
static const MappingIterator iter_array_10 = { "array", 10, 10, NULL};
static const MappingIterator iter_array_30 = { "array", 30, 30, NULL};
static const MappingIterator iter_array_500 = { "array", 500, 500, NULL};

/* clock active helper functions */
static int isActive_kcg_bool_kcg_true (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_true); }
static int isActive_kcg_bool_kcg_false (void* pHandle) { return (*(kcg_bool*)pHandle == kcg_false); }
static int isActive_SSM_TR_SM1_SSM_TR_No_BG_2_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_No_BG_2_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_No_BG_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_No_BG_1_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_NominalDir_1_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_NominalDir_1_SM1); }
static int isActive_SSM_TR_SM1_SSM_TR_NominalDir_2_SM1 (void* pHandle) { return (*(SSM_TR_SM1*)pHandle == SSM_TR_NominalDir_2_SM1); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_LastBaliseinBG_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SevensBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SevensBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SevensBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SevensBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_SevensBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SixthBalise_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SixthBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SixthBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_SixthBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FifthBalise_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FifthBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FifthBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_FifthBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FourthBalise_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FourthBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FourthBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_FourthBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_ThirdBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_8_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_8_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_7_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_7_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_6_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_6_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_5_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_5_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_4_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_4_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_Wait_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_Wait_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_Wait_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SecondBalise_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SecondBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_SecondBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_SecondBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_4_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FirstBalise_4_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_3_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FirstBalise_3_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_2_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FirstBalise_2_SM2_SM1_NominalDir); }
static int isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_1_SM2_SM1_NominalDir (void* pHandle) { return (*(SSM_TR_SM2_SM1_NominalDir*)pHandle == SSM_TR_FirstBalise_1_SM2_SM1_NominalDir); }
static int isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FirstBalise_SM1_NominalDir_SM2 (void* pHandle) { return (*(SSM_ST_SM2_SM1_NominalDir*)pHandle == SSM_st_FirstBalise_SM1_NominalDir_SM2); }
static int isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_NominalDir_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_ReverseDir_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_ReverseDir_SM1); }
static int isActive_SSM_ST_SM1_SSM_st_No_BG_SM1 (void* pHandle) { return (*(SSM_ST_SM1*)pHandle == SSM_st_No_BG_SM1); }

/* forward declarations */
#define MAP_DECL(ident, nb) static const MappingEntry ident##_entries[nb]; static const MappingScope ident
MAP_DECL(scope_136, 1);
MAP_DECL(scope_135, 5);
MAP_DECL(scope_134, 6);
MAP_DECL(scope_133, 15);
MAP_DECL(scope_132, 6);
MAP_DECL(scope_131, 5);
MAP_DECL(scope_130, 10);
MAP_DECL(scope_129, 2);
MAP_DECL(scope_128, 7);
MAP_DECL(scope_127, 4);
MAP_DECL(scope_126, 3);
MAP_DECL(scope_125, 4);
MAP_DECL(scope_124, 3);
MAP_DECL(scope_123, 9);
MAP_DECL(scope_122, 2);
MAP_DECL(scope_121, 1);
MAP_DECL(scope_120, 5);
MAP_DECL(scope_119, 1);
MAP_DECL(scope_118, 15);
MAP_DECL(scope_113, 2);
MAP_DECL(scope_112, 2);
MAP_DECL(scope_111, 2);
MAP_DECL(scope_110, 2);
MAP_DECL(scope_109, 2);
MAP_DECL(scope_108, 2);
MAP_DECL(scope_107, 2);
MAP_DECL(scope_106, 2);
MAP_DECL(scope_105, 2);
MAP_DECL(scope_104, 3);
MAP_DECL(scope_103, 3);
MAP_DECL(scope_102, 3);
MAP_DECL(scope_101, 3);
MAP_DECL(scope_100, 3);
MAP_DECL(scope_99, 3);
MAP_DECL(scope_98, 3);
MAP_DECL(scope_97, 3);
MAP_DECL(scope_96, 6);
MAP_DECL(scope_95, 64);
MAP_DECL(scope_94, 35);
MAP_DECL(scope_93, 129);
MAP_DECL(scope_92, 42);
MAP_DECL(scope_91, 64);
MAP_DECL(scope_90, 2);
MAP_DECL(scope_89, 2);
MAP_DECL(scope_88, 2);
MAP_DECL(scope_87, 2);
MAP_DECL(scope_86, 2);
MAP_DECL(scope_85, 2);
MAP_DECL(scope_84, 2);
MAP_DECL(scope_83, 2);
MAP_DECL(scope_82, 2);
MAP_DECL(scope_81, 3);
MAP_DECL(scope_80, 3);
MAP_DECL(scope_79, 3);
MAP_DECL(scope_78, 3);
MAP_DECL(scope_77, 3);
MAP_DECL(scope_76, 3);
MAP_DECL(scope_75, 3);
MAP_DECL(scope_74, 3);
MAP_DECL(scope_73, 6);
MAP_DECL(scope_72, 2);
MAP_DECL(scope_71, 2);
MAP_DECL(scope_70, 2);
MAP_DECL(scope_69, 2);
MAP_DECL(scope_68, 2);
MAP_DECL(scope_67, 2);
MAP_DECL(scope_66, 2);
MAP_DECL(scope_65, 2);
MAP_DECL(scope_64, 2);
MAP_DECL(scope_63, 3);
MAP_DECL(scope_62, 3);
MAP_DECL(scope_61, 3);
MAP_DECL(scope_60, 3);
MAP_DECL(scope_59, 3);
MAP_DECL(scope_58, 3);
MAP_DECL(scope_57, 3);
MAP_DECL(scope_56, 3);
MAP_DECL(scope_55, 6);
MAP_DECL(scope_54, 6);
MAP_DECL(scope_53, 1);
MAP_DECL(scope_52, 1);
MAP_DECL(scope_51, 2);
MAP_DECL(scope_49, 1);
MAP_DECL(scope_48, 1);
MAP_DECL(scope_47, 1);
MAP_DECL(scope_46, 9);
MAP_DECL(scope_45, 1);
MAP_DECL(scope_44, 1);
MAP_DECL(scope_43, 9);
MAP_DECL(scope_42, 1);
MAP_DECL(scope_41, 1);
MAP_DECL(scope_40, 1);
MAP_DECL(scope_39, 10);
MAP_DECL(scope_38, 1);
MAP_DECL(scope_37, 1);
MAP_DECL(scope_36, 1);
MAP_DECL(scope_35, 10);
MAP_DECL(scope_34, 1);
MAP_DECL(scope_33, 1);
MAP_DECL(scope_32, 1);
MAP_DECL(scope_31, 10);
MAP_DECL(scope_30, 1);
MAP_DECL(scope_29, 1);
MAP_DECL(scope_28, 1);
MAP_DECL(scope_27, 10);
MAP_DECL(scope_26, 1);
MAP_DECL(scope_25, 1);
MAP_DECL(scope_24, 1);
MAP_DECL(scope_23, 1);
MAP_DECL(scope_22, 1);
MAP_DECL(scope_21, 1);
MAP_DECL(scope_20, 1);
MAP_DECL(scope_19, 1);
MAP_DECL(scope_18, 10);
MAP_DECL(scope_17, 1);
MAP_DECL(scope_16, 1);
MAP_DECL(scope_15, 1);
MAP_DECL(scope_14, 10);
MAP_DECL(scope_13, 1);
MAP_DECL(scope_12, 1);
MAP_DECL(scope_11, 1);
MAP_DECL(scope_10, 1);
MAP_DECL(scope_9, 8);
MAP_DECL(scope_6, 18);
MAP_DECL(scope_5, 13);
MAP_DECL(scope_2, 10);
MAP_DECL(scope_1, 53);
MAP_DECL(scope_0, 1);

/* array__2758 */
static const MappingEntry scope_136_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_10, sizeof(struct__2750), 0, &_Type_struct__2750_Utils, NULL, NULL, &scope_135, 1, 0}
};
static const MappingScope scope_136 = {
  "array__2758",
  scope_136_entries, 1,
};

/* struct__2750 */
static const MappingEntry scope_135_entries[5] = {
  /* 0 */ { MAP_FIELD, ".BG", NULL, sizeof(struct__2741), offsetof(struct__2750, BG), &_Type_struct__2741_Utils, NULL, NULL, &scope_134, 1, 1},
  /* 1 */ { MAP_FIELD, ".TimeStamp", NULL, sizeof(kcg_int), offsetof(struct__2750, TimeStamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 2 */ { MAP_FIELD, ".complete", NULL, sizeof(kcg_bool), offsetof(struct__2750, complete), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 3 */ { MAP_FIELD, ".consistent", NULL, sizeof(kcg_bool), offsetof(struct__2750, consistent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2750, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_135 = {
  "struct__2750",
  scope_135_entries, 5,
};

/* struct__2741 */
static const MappingEntry scope_134_entries[6] = {
  /* 0 */ { MAP_FIELD, ".BG_Common_Header", NULL, sizeof(struct__2723), offsetof(struct__2741, BG_Common_Header), &_Type_struct__2723_Utils, NULL, NULL, &scope_133, 1, 3},
  /* 1 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(struct__2603), offsetof(struct__2741, Radio_Common_Header), &_Type_struct__2603_Utils, NULL, NULL, &scope_118, 1, 4},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__2635), offsetof(struct__2741, packets), &_Type_struct__2635_Utils, NULL, NULL, &scope_122, 1, 5},
  /* 3 */ { MAP_FIELD, ".radioMetadata", NULL, sizeof(struct__2640), offsetof(struct__2741, radioMetadata), &_Type_struct__2640_Utils, NULL, NULL, &scope_123, 1, 2},
  /* 4 */ { MAP_FIELD, ".source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(struct__2741, source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2741, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_134 = {
  "struct__2741",
  scope_134_entries, 6,
};

/* struct__2723 */
static const MappingEntry scope_133_entries[15] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(struct__2652), offsetof(struct__2723, BG_centerDetectionInaccuraccuracies), &_Type_struct__2652_Utils, NULL, NULL, &scope_124, 1, 10},
  /* 1 */ { MAP_FIELD, ".bgPosition", NULL, sizeof(struct__2678), offsetof(struct__2723, bgPosition), &_Type_struct__2678_Utils, NULL, NULL, &scope_128, 1, 9},
  /* 2 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__2723, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__2723, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__2723, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__2723, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__2723, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 7 */ { MAP_FIELD, ".noCoordinateSystemHasBeenAssigned", NULL, sizeof(kcg_bool), offsetof(struct__2723, noCoordinateSystemHasBeenAssigned), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 8 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__2723, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 8},
  /* 9 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__2723, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 3},
  /* 10 */ { MAP_FIELD, ".q_nvlocacc", NULL, sizeof(kcg_int), offsetof(struct__2723, q_nvlocacc), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 11 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__2723, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".trainOrientationToBG", NULL, sizeof(Q_DIRLRBG), offsetof(struct__2723, trainOrientationToBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 13},
  /* 13 */ { MAP_FIELD, ".trainRunningDirectionToBG", NULL, sizeof(Q_DIRTRAIN), offsetof(struct__2723, trainRunningDirectionToBG), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 14},
  /* 14 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2723, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_133 = {
  "struct__2723",
  scope_133_entries, 15,
};

/* struct__2714 */
static const MappingEntry scope_132_entries[6] = {
  /* 0 */ { MAP_FIELD, ".btm_msg", NULL, sizeof(struct__2706), offsetof(struct__2714, btm_msg), &_Type_struct__2706_Utils, NULL, NULL, &scope_131, 1, 3},
  /* 1 */ { MAP_FIELD, ".msg_type", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(struct__2714, msg_type), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 2 */ { MAP_FIELD, ".packets", NULL, sizeof(struct__2635), offsetof(struct__2714, packets), &_Type_struct__2635_Utils, NULL, NULL, &scope_122, 1, 5},
  /* 3 */ { MAP_FIELD, ".rtm_msg", NULL, sizeof(struct__2671), offsetof(struct__2714, rtm_msg), &_Type_struct__2671_Utils, NULL, NULL, &scope_127, 1, 4},
  /* 4 */ { MAP_FIELD, ".systemTimeMsgReceived", NULL, sizeof(kcg_int), offsetof(struct__2714, systemTimeMsgReceived), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2714, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_132 = {
  "struct__2714",
  scope_132_entries, 6,
};

/* struct__2706 */
static const MappingEntry scope_131_entries[5] = {
  /* 0 */ { MAP_FIELD, ".api_bad_balise_received", NULL, sizeof(kcg_bool), offsetof(struct__2706, api_bad_balise_received), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".api_header", NULL, sizeof(struct__2693), offsetof(struct__2706, api_header), &_Type_struct__2693_Utils, NULL, NULL, &scope_130, 1, 3},
  /* 2 */ { MAP_FIELD, ".centerOfBalisePosition", NULL, sizeof(struct__2688), offsetof(struct__2706, centerOfBalisePosition), &_Type_struct__2688_Utils, NULL, NULL, &scope_129, 1, 4},
  /* 3 */ { MAP_FIELD, ".checkResult", NULL, sizeof(kcg_bool), offsetof(struct__2706, checkResult), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 4 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__2706, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_131 = {
  "struct__2706",
  scope_131_entries, 5,
};

/* struct__2693 */
static const MappingEntry scope_130_entries[10] = {
  /* 0 */ { MAP_FIELD, ".m_dup", NULL, sizeof(M_DUP), offsetof(struct__2693, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 5},
  /* 1 */ { MAP_FIELD, ".m_mcount", NULL, sizeof(kcg_int), offsetof(struct__2693, m_mcount), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__2693, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".n_pig", NULL, sizeof(N_PIG), offsetof(struct__2693, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".n_total", NULL, sizeof(N_TOTAL), offsetof(struct__2693, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 4},
  /* 5 */ { MAP_FIELD, ".nid_bg", NULL, sizeof(kcg_int), offsetof(struct__2693, nid_bg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 8},
  /* 6 */ { MAP_FIELD, ".nid_c", NULL, sizeof(kcg_int), offsetof(struct__2693, nid_c), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 7 */ { MAP_FIELD, ".q_link", NULL, sizeof(Q_LINK), offsetof(struct__2693, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 9},
  /* 8 */ { MAP_FIELD, ".q_media", NULL, sizeof(Q_MEDIA), offsetof(struct__2693, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 2},
  /* 9 */ { MAP_FIELD, ".q_updown", NULL, sizeof(Q_UPDOWN), offsetof(struct__2693, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_130 = {
  "struct__2693",
  scope_130_entries, 10,
};

/* struct__2688 */
static const MappingEntry scope_129_entries[2] = {
  /* 0 */ { MAP_FIELD, ".BG_centerDetectionInaccuraccuracies", NULL, sizeof(struct__2652), offsetof(struct__2688, BG_centerDetectionInaccuraccuracies), &_Type_struct__2652_Utils, NULL, NULL, &scope_124, 1, 1},
  /* 1 */ { MAP_FIELD, ".odometerOfBaliseDetection", NULL, sizeof(struct__2678), offsetof(struct__2688, odometerOfBaliseDetection), &_Type_struct__2678_Utils, NULL, NULL, &scope_128, 1, 0}
};
static const MappingScope scope_129 = {
  "struct__2688",
  scope_129_entries, 2,
};

/* struct__2678 */
static const MappingEntry scope_128_entries[7] = {
  /* 0 */ { MAP_FIELD, ".acceleration", NULL, sizeof(kcg_int), offsetof(struct__2678, acceleration), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".motionDirection", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(struct__2678, motionDirection), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 2 */ { MAP_FIELD, ".motionState", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(struct__2678, motionState), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 5},
  /* 3 */ { MAP_FIELD, ".odo", NULL, sizeof(struct__2665), offsetof(struct__2678, odo), &_Type_struct__2665_Utils, NULL, NULL, &scope_126, 1, 2},
  /* 4 */ { MAP_FIELD, ".speed", NULL, sizeof(struct__2658), offsetof(struct__2678, speed), &_Type_struct__2658_Utils, NULL, NULL, &scope_125, 1, 3},
  /* 5 */ { MAP_FIELD, ".timestamp", NULL, sizeof(kcg_int), offsetof(struct__2678, timestamp), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 6 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2678, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_128 = {
  "struct__2678",
  scope_128_entries, 7,
};

/* struct__2671 */
static const MappingEntry scope_127_entries[4] = {
  /* 0 */ { MAP_FIELD, ".Radio_Common_Header", NULL, sizeof(struct__2603), offsetof(struct__2671, Radio_Common_Header), &_Type_struct__2603_Utils, NULL, NULL, &scope_118, 1, 2},
  /* 1 */ { MAP_FIELD, ".Radio_MetaData", NULL, sizeof(struct__2640), offsetof(struct__2671, Radio_MetaData), &_Type_struct__2640_Utils, NULL, NULL, &scope_123, 1, 3},
  /* 2 */ { MAP_FIELD, ".apiConsistencyError", NULL, sizeof(kcg_bool), offsetof(struct__2671, apiConsistencyError), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".present", NULL, sizeof(kcg_bool), offsetof(struct__2671, present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_127 = {
  "struct__2671",
  scope_127_entries, 4,
};

/* struct__2665 */
static const MappingEntry scope_126_entries[3] = {
  /* 0 */ { MAP_FIELD, ".o_max", NULL, sizeof(kcg_int), offsetof(struct__2665, o_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".o_min", NULL, sizeof(kcg_int), offsetof(struct__2665, o_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".o_nominal", NULL, sizeof(kcg_int), offsetof(struct__2665, o_nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_126 = {
  "struct__2665",
  scope_126_entries, 3,
};

/* struct__2658 */
static const MappingEntry scope_125_entries[4] = {
  /* 0 */ { MAP_FIELD, ".v_lower", NULL, sizeof(kcg_int), offsetof(struct__2658, v_lower), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".v_rawNominal", NULL, sizeof(kcg_int), offsetof(struct__2658, v_rawNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".v_safeNominal", NULL, sizeof(kcg_int), offsetof(struct__2658, v_safeNominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 3 */ { MAP_FIELD, ".v_upper", NULL, sizeof(kcg_int), offsetof(struct__2658, v_upper), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3}
};
static const MappingScope scope_125 = {
  "struct__2658",
  scope_125_entries, 4,
};

/* struct__2652 */
static const MappingEntry scope_124_entries[3] = {
  /* 0 */ { MAP_FIELD, ".d_max", NULL, sizeof(kcg_int), offsetof(struct__2652, d_max), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 1 */ { MAP_FIELD, ".d_min", NULL, sizeof(kcg_int), offsetof(struct__2652, d_min), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 2 */ { MAP_FIELD, ".nominal", NULL, sizeof(kcg_int), offsetof(struct__2652, nominal), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_124 = {
  "struct__2652",
  scope_124_entries, 3,
};

/* struct__2640 */
static const MappingEntry scope_123_entries[9] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_bool), offsetof(struct__2640, d_emergencystop), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_bool), offsetof(struct__2640, d_ref), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_bool), offsetof(struct__2640, d_sr), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 3 */ { MAP_FIELD, ".m_version", NULL, sizeof(kcg_bool), offsetof(struct__2640, m_version), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 4 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_bool), offsetof(struct__2640, nid_em), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_FIELD, ".q_dir", NULL, sizeof(kcg_bool), offsetof(struct__2640, q_dir), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 6},
  /* 6 */ { MAP_FIELD, ".q_scale", NULL, sizeof(kcg_bool), offsetof(struct__2640, q_scale), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 7 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_bool), offsetof(struct__2640, t_sh_rqst), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 8 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_bool), offsetof(struct__2640, t_train_reference), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_123 = {
  "struct__2640",
  scope_123_entries, 9,
};

/* struct__2635 */
static const MappingEntry scope_122_entries[2] = {
  /* 0 */ { MAP_FIELD, ".PacketData", NULL, sizeof(array_int_500), offsetof(struct__2635, PacketData), &_Type_array_int_500_Utils, NULL, NULL, &scope_119, 1, 1},
  /* 1 */ { MAP_FIELD, ".PacketHeaders", NULL, sizeof(array__2632), offsetof(struct__2635, PacketHeaders), &_Type_array__2632_Utils, NULL, NULL, &scope_121, 1, 0}
};
static const MappingScope scope_122 = {
  "struct__2635",
  scope_122_entries, 2,
};

/* array__2632 */
static const MappingEntry scope_121_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_30, sizeof(struct__2624), 0, &_Type_struct__2624_Utils, NULL, NULL, &scope_120, 1, 0}
};
static const MappingScope scope_121 = {
  "array__2632",
  scope_121_entries, 1,
};

/* struct__2624 */
static const MappingEntry scope_120_entries[5] = {
  /* 0 */ { MAP_FIELD, ".endAddress", NULL, sizeof(kcg_int), offsetof(struct__2624, endAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 1 */ { MAP_FIELD, ".nid_packet", NULL, sizeof(kcg_int), offsetof(struct__2624, nid_packet), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 2 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2624, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 1},
  /* 3 */ { MAP_FIELD, ".startAddress", NULL, sizeof(kcg_int), offsetof(struct__2624, startAddress), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 4 */ { MAP_FIELD, ".valid", NULL, sizeof(kcg_bool), offsetof(struct__2624, valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2}
};
static const MappingScope scope_120 = {
  "struct__2624",
  scope_120_entries, 5,
};

/* array_int_500 */
static const MappingEntry scope_119_entries[1] = {
  /* 0 */ { MAP_ARRAY, "", &iter_array_500, sizeof(kcg_int), 0, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0}
};
static const MappingScope scope_119 = {
  "array_int_500",
  scope_119_entries, 1,
};

/* struct__2603 */
static const MappingEntry scope_118_entries[15] = {
  /* 0 */ { MAP_FIELD, ".d_emergencystop", NULL, sizeof(kcg_int), offsetof(struct__2603, d_emergencystop), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 1 */ { MAP_FIELD, ".d_ref", NULL, sizeof(kcg_int), offsetof(struct__2603, d_ref), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 2 */ { MAP_FIELD, ".d_sr", NULL, sizeof(kcg_int), offsetof(struct__2603, d_sr), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 9},
  /* 3 */ { MAP_FIELD, ".m_ack", NULL, sizeof(M_ACK), offsetof(struct__2603, m_ack), &_Type_M_ACK_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_FIELD, ".m_version", NULL, sizeof(M_VERSION), offsetof(struct__2603, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_FIELD, ".nid_em", NULL, sizeof(kcg_int), offsetof(struct__2603, nid_em), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 7},
  /* 6 */ { MAP_FIELD, ".nid_lrbg", NULL, sizeof(kcg_int), offsetof(struct__2603, nid_lrbg), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5},
  /* 7 */ { MAP_FIELD, ".nid_message", NULL, sizeof(kcg_int), offsetof(struct__2603, nid_message), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 2},
  /* 8 */ { MAP_FIELD, ".q_dir", NULL, sizeof(Q_DIR), offsetof(struct__2603, q_dir), &_Type_Q_DIR_Utils, NULL, NULL, NULL, 1, 12},
  /* 9 */ { MAP_FIELD, ".q_scale", NULL, sizeof(Q_SCALE), offsetof(struct__2603, q_scale), &_Type_Q_SCALE_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_FIELD, ".radioDevice", NULL, sizeof(kcg_int), offsetof(struct__2603, radioDevice), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 0},
  /* 11 */ { MAP_FIELD, ".receivedSystemTime", NULL, sizeof(kcg_int), offsetof(struct__2603, receivedSystemTime), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1},
  /* 12 */ { MAP_FIELD, ".t_sh_rqst", NULL, sizeof(kcg_real), offsetof(struct__2603, t_sh_rqst), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 10},
  /* 13 */ { MAP_FIELD, ".t_train", NULL, sizeof(kcg_real), offsetof(struct__2603, t_train), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_FIELD, ".t_train_reference", NULL, sizeof(kcg_real), offsetof(struct__2603, t_train_reference), &_Type_kcg_real_Utils, NULL, NULL, NULL, 1, 6}
};
static const MappingScope scope_118 = {
  "struct__2603",
  scope_118_entries, 15,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_113_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2_IfBlock1), &_Type_N_PIG_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_97_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_113 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:then:",
  scope_113_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_112_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L1_IfBlock1), &_Type_N_PIG_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_98_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_112 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:then:",
  scope_112_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_111_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L18_IfBlock1), &_Type_N_PIG_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_99_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_111 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:then:",
  scope_111_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_110_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L110_IfBlock1), &_Type_N_PIG_Utils, &scope_100_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L39_IfBlock1), &_Type_kcg_bool_Utils, &scope_100_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_110 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:then:",
  scope_110_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_109_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L112_IfBlock1), &_Type_N_PIG_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L311_IfBlock1), &_Type_kcg_bool_Utils, &scope_101_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_109 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_109_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_108_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L214_IfBlock1), &_Type_N_PIG_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L413_IfBlock1), &_Type_kcg_bool_Utils, &scope_102_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_108 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_108_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_107_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L116_IfBlock1), &_Type_N_PIG_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_103_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_107 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_107_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_106_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L118_IfBlock1), &_Type_N_PIG_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L417_IfBlock1), &_Type_kcg_bool_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_106 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_106_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_105_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L220_IfBlock1), &_Type_N_PIG_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L319_IfBlock1), &_Type_kcg_bool_Utils, &scope_104_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_105 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_105_entries, 2,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_104_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_false, &scope_105, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_104_entries[0], isActive_kcg_bool_kcg_true, &scope_106, 1, 2}
};
static const MappingScope scope_104 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_104_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_103_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_false, &scope_104, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_103_entries[0], isActive_kcg_bool_kcg_true, &scope_107, 1, 2}
};
static const MappingScope scope_103 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_103_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_102_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_false, &scope_103, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_102_entries[0], isActive_kcg_bool_kcg_true, &scope_108, 1, 2}
};
static const MappingScope scope_102 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_102_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_101_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_false, &scope_102, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_101_entries[0], isActive_kcg_bool_kcg_true, &scope_109, 1, 2}
};
static const MappingScope scope_101 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:else:",
  scope_101_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_100_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_false, &scope_101, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_100_entries[0], isActive_kcg_bool_kcg_true, &scope_110, 1, 2}
};
static const MappingScope scope_100 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:else:",
  scope_100_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_99_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_false, &scope_100, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_99_entries[0], isActive_kcg_bool_kcg_true, &scope_111, 1, 2}
};
static const MappingScope scope_99 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:else:",
  scope_99_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_98_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_false, &scope_99, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_98_entries[0], isActive_kcg_bool_kcg_true, &scope_112, 1, 2}
};
static const MappingScope scope_98 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:else:",
  scope_98_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1: */
static const MappingEntry scope_97_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_false, &scope_98, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_97_entries[0], isActive_kcg_bool_kcg_true, &scope_113, 1, 2}
};
static const MappingScope scope_97 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversionsIfBlock1:",
  scope_97_entries, 3,
};

/* TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions */
static const MappingEntry scope_96_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_97, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L2), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_PIG), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "n_pig_in", NULL, sizeof(kcg_int), offsetof(outC_CAST_Int_to_N_PIG_TM_conversions, n_pig_in), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 1}
};
static const MappingScope scope_96 = {
  "TM_conversions::CAST_Int_to_N_PIG/ CAST_Int_to_N_PIG_TM_conversions",
  scope_96_entries, 6,
};

/* Subfunctions::Decop_Received_BG/ Decop_Received_BG_Subfunctions */
static const MappingEntry scope_95_entries[64] = {
  /* 0 */ { MAP_OUTPUT, "BG_present", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, BG_present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 54},
  /* 1 */ { MAP_OUTPUT, "Completenes", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, Completenes), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 2 */ { MAP_OUTPUT, "CompressedPackets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, CompressedPackets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 38},
  /* 3 */ { MAP_OUTPUT, "Consistency", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, Consistency), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 4 */ { MAP_OUTPUT, "Message_valid", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, Message_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 5 */ { MAP_OUTPUT, "Msg_Source", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, Msg_Source), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 41},
  /* 6 */ { MAP_OUTPUT, "Output_valid", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, Output_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 7 */ { MAP_OUTPUT, "RadioHeader", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, RadioHeader), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 39},
  /* 8 */ { MAP_OUTPUT, "RadioMetadata", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, RadioMetadata), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 40},
  /* 9 */ { MAP_OUTPUT, "TimeStamp", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, TimeStamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 37},
  /* 10 */ { MAP_LOCAL, "_L109", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, _L109), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 25},
  /* 11 */ { MAP_LOCAL, "_L110", NULL, sizeof(Q_UPDOWN), offsetof(outC_Decop_Received_BG_Subfunctions, _L110), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 24},
  /* 12 */ { MAP_LOCAL, "_L111", NULL, sizeof(M_VERSION), offsetof(outC_Decop_Received_BG_Subfunctions, _L111), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 23},
  /* 13 */ { MAP_LOCAL, "_L112", NULL, sizeof(Q_MEDIA), offsetof(outC_Decop_Received_BG_Subfunctions, _L112), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 22},
  /* 14 */ { MAP_LOCAL, "_L113", NULL, sizeof(N_TOTAL), offsetof(outC_Decop_Received_BG_Subfunctions, _L113), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 21},
  /* 15 */ { MAP_LOCAL, "_L114", NULL, sizeof(M_MCOUNT), offsetof(outC_Decop_Received_BG_Subfunctions, _L114), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 20},
  /* 16 */ { MAP_LOCAL, "_L115", NULL, sizeof(NID_C), offsetof(outC_Decop_Received_BG_Subfunctions, _L115), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 19},
  /* 17 */ { MAP_LOCAL, "_L116", NULL, sizeof(NID_BG), offsetof(outC_Decop_Received_BG_Subfunctions, _L116), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L117", NULL, sizeof(Q_LINK), offsetof(outC_Decop_Received_BG_Subfunctions, _L117), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L118", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L118), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_128, 1, 16},
  /* 20 */ { MAP_LOCAL, "_L119", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L119), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 15},
  /* 21 */ { MAP_LOCAL, "_L120", NULL, sizeof(Q_NVLOCACC), offsetof(outC_Decop_Received_BG_Subfunctions, _L120), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 14},
  /* 22 */ { MAP_LOCAL, "_L121", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, _L121), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 23 */ { MAP_LOCAL, "_L122", NULL, sizeof(Q_DIRLRBG), offsetof(outC_Decop_Received_BG_Subfunctions, _L122), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 12},
  /* 24 */ { MAP_LOCAL, "_L123", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_Decop_Received_BG_Subfunctions, _L123), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 11},
  /* 25 */ { MAP_LOCAL, "_L144", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, _L144), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 32},
  /* 26 */ { MAP_LOCAL, "_L145", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L145), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 31},
  /* 27 */ { MAP_LOCAL, "_L146", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L146), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 30},
  /* 28 */ { MAP_LOCAL, "_L147", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L147), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L148", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L148), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 28},
  /* 30 */ { MAP_LOCAL, "_L149", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L149), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 27},
  /* 31 */ { MAP_LOCAL, "_L150", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L150), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 26},
  /* 32 */ { MAP_LOCAL, "_L151", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L151), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L49", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, _L49), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 34 */ { MAP_LOCAL, "_L50", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L50), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_134, 1, 3},
  /* 35 */ { MAP_LOCAL, "_L51", NULL, sizeof(Completeness_CheckBGInputChannel_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L51), &_Type_Completeness_CheckBGInputChannel_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 36 */ { MAP_LOCAL, "_L52", NULL, sizeof(Consistency_CheckBGInputChannel_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L52), &_Type_Consistency_CheckBGInputChannel_Pkg_Utils, NULL, NULL, NULL, 1, 1},
  /* 37 */ { MAP_LOCAL, "_L53", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L53), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 0},
  /* 38 */ { MAP_LOCAL, "_L68", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, _L68), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 39 */ { MAP_LOCAL, "_L69", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L69), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 9},
  /* 40 */ { MAP_LOCAL, "_L70", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L70), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 8},
  /* 41 */ { MAP_LOCAL, "_L71", NULL, sizeof(BG_Header_T_BG_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L71), &_Type_BG_Header_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_133, 1, 7},
  /* 42 */ { MAP_LOCAL, "_L72", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L72), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 6},
  /* 43 */ { MAP_LOCAL, "_L73", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, _L73), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 5},
  /* 44 */ { MAP_OUTPUT, "assignedCoordinates", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, assignedCoordinates), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55},
  /* 45 */ { MAP_OUTPUT, "locwithinacc", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, locwithinacc), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 45},
  /* 46 */ { MAP_OUTPUT, "m_mcount", NULL, sizeof(M_MCOUNT), offsetof(outC_Decop_Received_BG_Subfunctions, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 49},
  /* 47 */ { MAP_OUTPUT, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_Decop_Received_BG_Subfunctions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 52},
  /* 48 */ { MAP_OUTPUT, "n_total", NULL, sizeof(N_TOTAL), offsetof(outC_Decop_Received_BG_Subfunctions, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 50},
  /* 49 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_Decop_Received_BG_Subfunctions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 47},
  /* 50 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_Decop_Received_BG_Subfunctions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 48},
  /* 51 */ { MAP_OUTPUT, "odo_acc", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, odo_acc), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 61},
  /* 52 */ { MAP_OUTPUT, "odo_dir", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, odo_dir), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 63},
  /* 53 */ { MAP_OUTPUT, "odo_loc", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, odo_loc), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 59},
  /* 54 */ { MAP_OUTPUT, "odo_motion", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, odo_motion), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 62},
  /* 55 */ { MAP_OUTPUT, "odo_speed", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, odo_speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 60},
  /* 56 */ { MAP_OUTPUT, "odo_time", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Received_BG_Subfunctions, odo_time), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 58},
  /* 57 */ { MAP_OUTPUT, "odo_valid", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Received_BG_Subfunctions, odo_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 57},
  /* 58 */ { MAP_OUTPUT, "q_dirLRBG", NULL, sizeof(Q_DIRLRBG), offsetof(outC_Decop_Received_BG_Subfunctions, q_dirLRBG), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 44},
  /* 59 */ { MAP_OUTPUT, "q_dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_Decop_Received_BG_Subfunctions, q_dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 43},
  /* 60 */ { MAP_OUTPUT, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_Decop_Received_BG_Subfunctions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 46},
  /* 61 */ { MAP_OUTPUT, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_Decop_Received_BG_Subfunctions, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 51},
  /* 62 */ { MAP_OUTPUT, "q_nvlocacc", NULL, sizeof(Q_NVLOCACC), offsetof(outC_Decop_Received_BG_Subfunctions, q_nvlocacc), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 56},
  /* 63 */ { MAP_OUTPUT, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_Decop_Received_BG_Subfunctions, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 53}
};
static const MappingScope scope_95 = {
  "Subfunctions::Decop_Received_BG/ Decop_Received_BG_Subfunctions",
  scope_95_entries, 64,
};

/* Subfunctions::Pack_Received_BG/ Pack_Received_BG_Subfunctions */
static const MappingEntry scope_94_entries[35] = {
  /* 0 */ { MAP_OUTPUT, "Received_BG", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, Received_BG), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 34},
  /* 1 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 2 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L10), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 3 */ { MAP_LOCAL, "_L11", NULL, sizeof(Q_UPDOWN), offsetof(outC_Pack_Received_BG_Subfunctions, _L11), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 12},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(M_VERSION), offsetof(outC_Pack_Received_BG_Subfunctions, _L12), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 11},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(Q_MEDIA), offsetof(outC_Pack_Received_BG_Subfunctions, _L13), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 10},
  /* 6 */ { MAP_LOCAL, "_L14", NULL, sizeof(N_TOTAL), offsetof(outC_Pack_Received_BG_Subfunctions, _L14), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 9},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(M_MCOUNT), offsetof(outC_Pack_Received_BG_Subfunctions, _L15), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 8},
  /* 8 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_C), offsetof(outC_Pack_Received_BG_Subfunctions, _L16), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 7},
  /* 9 */ { MAP_LOCAL, "_L17", NULL, sizeof(NID_BG), offsetof(outC_Pack_Received_BG_Subfunctions, _L17), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L18", NULL, sizeof(Q_LINK), offsetof(outC_Pack_Received_BG_Subfunctions, _L18), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 11 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 12 */ { MAP_LOCAL, "_L20", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L20), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 4},
  /* 13 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_NVLOCACC), offsetof(outC_Pack_Received_BG_Subfunctions, _L21), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 3},
  /* 14 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L22), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 15 */ { MAP_LOCAL, "_L23", NULL, sizeof(Q_DIRLRBG), offsetof(outC_Pack_Received_BG_Subfunctions, _L23), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 1},
  /* 16 */ { MAP_LOCAL, "_L24", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_Pack_Received_BG_Subfunctions, _L24), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 0},
  /* 17 */ { MAP_LOCAL, "_L25", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L25), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 23},
  /* 18 */ { MAP_LOCAL, "_L26", NULL, sizeof(ReceivedMessage_T_Common_Types_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L26), &_Type_ReceivedMessage_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_134, 1, 24},
  /* 19 */ { MAP_LOCAL, "_L27", NULL, sizeof(BG_Header_T_BG_Types_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L27), &_Type_BG_Header_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_133, 1, 25},
  /* 20 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 20},
  /* 21 */ { MAP_LOCAL, "_L35", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L35), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_128, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L36), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 27},
  /* 23 */ { MAP_LOCAL, "_L37", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L37), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 28},
  /* 24 */ { MAP_LOCAL, "_L38", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L38), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 29},
  /* 25 */ { MAP_LOCAL, "_L39", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L39), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 30},
  /* 26 */ { MAP_LOCAL, "_L4", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L4), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 19},
  /* 27 */ { MAP_LOCAL, "_L40", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L40), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 31},
  /* 28 */ { MAP_LOCAL, "_L41", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L41), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 32},
  /* 29 */ { MAP_LOCAL, "_L42", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L42), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 33},
  /* 30 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_Pack_Received_BG_Subfunctions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 18},
  /* 31 */ { MAP_LOCAL, "_L6", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L6), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 17},
  /* 32 */ { MAP_LOCAL, "_L7", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L7), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 16},
  /* 33 */ { MAP_LOCAL, "_L8", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L8), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 15},
  /* 34 */ { MAP_LOCAL, "_L9", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Pack_Received_BG_Subfunctions, _L9), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 14}
};
static const MappingScope scope_94 = {
  "Subfunctions::Pack_Received_BG/ Pack_Received_BG_Subfunctions",
  scope_94_entries, 35,
};

/* Subfunctions::Consistency_Check_Track_BG/ Consistency_Check_Track_BG_Subfunctions */
static const MappingEntry scope_93_entries[129] = {
  /* 0 */ { MAP_LOCAL, "BG_present", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, BG_present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 1 */ { MAP_LOCAL, "CompressedPackets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, CompressedPackets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 9},
  /* 2 */ { MAP_LOCAL, "MsgSource", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, MsgSource), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 6},
  /* 3 */ { MAP_LOCAL, "Msg_valid", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, Msg_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 5},
  /* 4 */ { MAP_LOCAL, "RadioHeader", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, RadioHeader), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 8},
  /* 5 */ { MAP_LOCAL, "RadioMeta", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, RadioMeta), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 7},
  /* 6 */ { MAP_INSTANCE, "Subfunctions::Decop_Received_BG 1", NULL, sizeof(outC_Decop_Received_BG_Subfunctions), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _2_Context_1), NULL, NULL, NULL, &scope_95, 1, 2},
  /* 7 */ { MAP_INSTANCE, "Subfunctions::Decop_Track_Msg 1", NULL, sizeof(outC_Decop_Track_Msg_Subfunctions), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _1_Context_1), NULL, NULL, NULL, &scope_91, 1, 0},
  /* 8 */ { MAP_INSTANCE, "Subfunctions::Pack_Received_BG 1", NULL, sizeof(outC_Pack_Received_BG_Subfunctions), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _3_Context_1), NULL, NULL, NULL, &scope_94, 1, 1},
  /* 9 */ { MAP_INSTANCE, "TM_conversions::CAST_Int_to_N_PIG 1", NULL, sizeof(outC_CAST_Int_to_N_PIG_TM_conversions), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, Context_1), NULL, NULL, NULL, &scope_96, 1, 3},
  /* 10 */ { MAP_LOCAL, "TimeStamp", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, TimeStamp), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 4},
  /* 11 */ { MAP_OUTPUT, "Warning_unexspected_Balise", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, Warning_unexspected_Balise), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 128},
  /* 12 */ { MAP_LOCAL, "_L116", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L116), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_132, 1, 56},
  /* 13 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L163), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 24},
  /* 14 */ { MAP_LOCAL, "_L184", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L184), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 33},
  /* 15 */ { MAP_LOCAL, "_L185", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L185), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 32},
  /* 16 */ { MAP_LOCAL, "_L186", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L186), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 31},
  /* 17 */ { MAP_LOCAL, "_L187", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L187), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 18 */ { MAP_LOCAL, "_L188", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L188), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 29},
  /* 19 */ { MAP_LOCAL, "_L189", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L189), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 28},
  /* 20 */ { MAP_LOCAL, "_L190", NULL, sizeof(Q_UPDOWN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L190), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 27},
  /* 21 */ { MAP_LOCAL, "_L191", NULL, sizeof(M_DUP), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L191), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 26},
  /* 22 */ { MAP_LOCAL, "_L192", NULL, sizeof(Q_LINK), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L192), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 25},
  /* 23 */ { MAP_LOCAL, "_L200", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L200), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 34},
  /* 24 */ { MAP_LOCAL, "_L201", NULL, sizeof(M_VERSION), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L201), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 35},
  /* 25 */ { MAP_LOCAL, "_L202", NULL, sizeof(Q_MEDIA), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L202), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 36},
  /* 26 */ { MAP_LOCAL, "_L203", NULL, sizeof(N_PIG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L203), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 37},
  /* 27 */ { MAP_LOCAL, "_L204", NULL, sizeof(N_TOTAL), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L204), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 38},
  /* 28 */ { MAP_LOCAL, "_L205", NULL, sizeof(M_MCOUNT), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L205), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 39},
  /* 29 */ { MAP_LOCAL, "_L206", NULL, sizeof(NID_C), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L206), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 40},
  /* 30 */ { MAP_LOCAL, "_L207", NULL, sizeof(NID_BG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L207), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 41},
  /* 31 */ { MAP_LOCAL, "_L208", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L208), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 32 */ { MAP_LOCAL, "_L209", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L209), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 43},
  /* 33 */ { MAP_LOCAL, "_L210", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L210), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 44},
  /* 34 */ { MAP_LOCAL, "_L211", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L211), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 45},
  /* 35 */ { MAP_LOCAL, "_L212", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L212), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 46},
  /* 36 */ { MAP_LOCAL, "_L213", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L213), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 47},
  /* 37 */ { MAP_LOCAL, "_L214", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L214), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 48},
  /* 38 */ { MAP_LOCAL, "_L215", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L215), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 49},
  /* 39 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L216), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50},
  /* 40 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 51},
  /* 41 */ { MAP_LOCAL, "_L218", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L218), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 52},
  /* 42 */ { MAP_LOCAL, "_L219", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L219), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 53},
  /* 43 */ { MAP_LOCAL, "_L220", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L220), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 54},
  /* 44 */ { MAP_LOCAL, "_L222", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L222), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 55},
  /* 45 */ { MAP_LOCAL, "_L228", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L228), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 86},
  /* 46 */ { MAP_LOCAL, "_L229", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L229), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 85},
  /* 47 */ { MAP_LOCAL, "_L230", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L230), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 84},
  /* 48 */ { MAP_LOCAL, "_L231", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L231), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 83},
  /* 49 */ { MAP_LOCAL, "_L232", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L232), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 82},
  /* 50 */ { MAP_LOCAL, "_L233", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L233), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 81},
  /* 51 */ { MAP_LOCAL, "_L234", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L234), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 80},
  /* 52 */ { MAP_LOCAL, "_L235", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L235), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 79},
  /* 53 */ { MAP_LOCAL, "_L236", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L236), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 78},
  /* 54 */ { MAP_LOCAL, "_L237", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L237), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 77},
  /* 55 */ { MAP_LOCAL, "_L238", NULL, sizeof(Q_DIRLRBG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L238), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 76},
  /* 56 */ { MAP_LOCAL, "_L239", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L239), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 75},
  /* 57 */ { MAP_LOCAL, "_L240", NULL, sizeof(Q_LINK), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L240), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 74},
  /* 58 */ { MAP_LOCAL, "_L241", NULL, sizeof(NID_BG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L241), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 73},
  /* 59 */ { MAP_LOCAL, "_L242", NULL, sizeof(NID_C), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L242), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 72},
  /* 60 */ { MAP_LOCAL, "_L243", NULL, sizeof(M_MCOUNT), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L243), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 71},
  /* 61 */ { MAP_LOCAL, "_L244", NULL, sizeof(N_TOTAL), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L244), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 70},
  /* 62 */ { MAP_LOCAL, "_L245", NULL, sizeof(Q_MEDIA), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L245), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 69},
  /* 63 */ { MAP_LOCAL, "_L246", NULL, sizeof(M_VERSION), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L246), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 68},
  /* 64 */ { MAP_LOCAL, "_L247", NULL, sizeof(Q_UPDOWN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L247), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 67},
  /* 65 */ { MAP_LOCAL, "_L248", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L248), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 66},
  /* 66 */ { MAP_LOCAL, "_L249", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L249), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 65},
  /* 67 */ { MAP_LOCAL, "_L250", NULL, sizeof(Q_NVLOCACC), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L250), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 64},
  /* 68 */ { MAP_LOCAL, "_L251", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L251), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 63},
  /* 69 */ { MAP_LOCAL, "_L252", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L252), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 62},
  /* 70 */ { MAP_LOCAL, "_L253", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L253), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 61},
  /* 71 */ { MAP_LOCAL, "_L254", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L254), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 60},
  /* 72 */ { MAP_LOCAL, "_L255", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L255), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 59},
  /* 73 */ { MAP_LOCAL, "_L256", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L256), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 58},
  /* 74 */ { MAP_LOCAL, "_L257", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L257), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 57},
  /* 75 */ { MAP_LOCAL, "_L261", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L261), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 87},
  /* 76 */ { MAP_LOCAL, "_L262", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L262), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 88},
  /* 77 */ { MAP_LOCAL, "_L263", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L263), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 89},
  /* 78 */ { MAP_LOCAL, "_L264", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L264), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 90},
  /* 79 */ { MAP_LOCAL, "_L265", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L265), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 91},
  /* 80 */ { MAP_LOCAL, "_L273", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L273), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 92},
  /* 81 */ { MAP_LOCAL, "_L276", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L276), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 97},
  /* 82 */ { MAP_LOCAL, "_L277", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L277), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 96},
  /* 83 */ { MAP_LOCAL, "_L278", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L278), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 95},
  /* 84 */ { MAP_LOCAL, "_L279", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L279), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 94},
  /* 85 */ { MAP_LOCAL, "_L280", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L280), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 93},
  /* 86 */ { MAP_LOCAL, "_L281", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L281), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 98},
  /* 87 */ { MAP_LOCAL, "_L282", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L282), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 99},
  /* 88 */ { MAP_LOCAL, "_L283", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L283), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 100},
  /* 89 */ { MAP_LOCAL, "_L284", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L284), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 101},
  /* 90 */ { MAP_LOCAL, "_L285", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L285), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 102},
  /* 91 */ { MAP_LOCAL, "_L286", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L286), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 103},
  /* 92 */ { MAP_LOCAL, "_L288", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L288), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 104},
  /* 93 */ { MAP_LOCAL, "_L290", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L290), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 105},
  /* 94 */ { MAP_LOCAL, "_L291", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L291), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 106},
  /* 95 */ { MAP_LOCAL, "_L292", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L292), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 107},
  /* 96 */ { MAP_LOCAL, "_L293", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L293), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 108},
  /* 97 */ { MAP_LOCAL, "_L294", NULL, sizeof(Q_UPDOWN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L294), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 109},
  /* 98 */ { MAP_LOCAL, "_L295", NULL, sizeof(M_VERSION), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L295), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 110},
  /* 99 */ { MAP_LOCAL, "_L296", NULL, sizeof(Q_MEDIA), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L296), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 111},
  /* 100 */ { MAP_LOCAL, "_L297", NULL, sizeof(Q_LINK), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L297), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 112},
  /* 101 */ { MAP_LOCAL, "_L298", NULL, sizeof(NID_BG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L298), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 113},
  /* 102 */ { MAP_LOCAL, "_L299", NULL, sizeof(NID_C), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L299), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 114},
  /* 103 */ { MAP_LOCAL, "_L300", NULL, sizeof(M_MCOUNT), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L300), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 115},
  /* 104 */ { MAP_LOCAL, "_L301", NULL, sizeof(N_TOTAL), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L301), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 116},
  /* 105 */ { MAP_LOCAL, "_L314", NULL, sizeof(Q_DIRLRBG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L314), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 117},
  /* 106 */ { MAP_LOCAL, "_L315", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L315), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 118},
  /* 107 */ { MAP_LOCAL, "_L316", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L316), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 119},
  /* 108 */ { MAP_LOCAL, "_L317", NULL, sizeof(Q_NVLOCACC), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L317), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 120},
  /* 109 */ { MAP_LOCAL, "_L326", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L326), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 121},
  /* 110 */ { MAP_LOCAL, "_L328", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L328), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 122},
  /* 111 */ { MAP_LOCAL, "_L329", NULL, sizeof(kcg_int), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L329), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 123},
  /* 112 */ { MAP_LOCAL, "_L330", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L330), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 124},
  /* 113 */ { MAP_LOCAL, "_L331", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L331), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 125},
  /* 114 */ { MAP_LOCAL, "_L332", NULL, sizeof(N_PIG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, _L332), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 126},
  /* 115 */ { MAP_LOCAL, "assignedcoordination", NULL, sizeof(kcg_bool), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, assignedcoordination), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 116 */ { MAP_LOCAL, "locinacc", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, locinacc), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 23},
  /* 117 */ { MAP_LOCAL, "m_mcount", NULL, sizeof(M_MCOUNT), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 15},
  /* 118 */ { MAP_LOCAL, "m_version", NULL, sizeof(M_VERSION), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, m_version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 12},
  /* 119 */ { MAP_LOCAL, "n_total", NULL, sizeof(N_TOTAL), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 14},
  /* 120 */ { MAP_LOCAL, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 17},
  /* 121 */ { MAP_LOCAL, "nid_c", NULL, sizeof(NID_C), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 16},
  /* 122 */ { MAP_OUTPUT, "out_BG", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, out_BG), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 127},
  /* 123 */ { MAP_LOCAL, "q_dirlrbg", NULL, sizeof(Q_DIRLRBG), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, q_dirlrbg), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 19},
  /* 124 */ { MAP_LOCAL, "q_dirtrain", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, q_dirtrain), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 20},
  /* 125 */ { MAP_LOCAL, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 18},
  /* 126 */ { MAP_LOCAL, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 13},
  /* 127 */ { MAP_LOCAL, "q_nvlocacc", NULL, sizeof(Q_NVLOCACC), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, q_nvlocacc), &_Type_Q_NVLOCACC_Utils, NULL, NULL, NULL, 1, 22},
  /* 128 */ { MAP_LOCAL, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_Consistency_Check_Track_BG_Subfunctions, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 11}
};
static const MappingScope scope_93 = {
  "Subfunctions::Consistency_Check_Track_BG/ Consistency_Check_Track_BG_Subfunctions",
  scope_93_entries, 129,
};

/* Subfunctions::InitBG/ InitBG_Subfunctions */
static const MappingEntry scope_92_entries[42] = {
  /* 0 */ { MAP_INSTANCE, "Subfunctions::Decop_Track_Msg 1", NULL, sizeof(outC_Decop_Track_Msg_Subfunctions), offsetof(outC_InitBG_Subfunctions, Context_1), NULL, NULL, NULL, &scope_91, 1, 0},
  /* 1 */ { MAP_INSTANCE, "Subfunctions::Pack_Received_BG 1", NULL, sizeof(outC_Pack_Received_BG_Subfunctions), offsetof(outC_InitBG_Subfunctions, _1_Context_1), NULL, NULL, NULL, &scope_94, 1, 1},
  /* 2 */ { MAP_LOCAL, "_L116", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_InitBG_Subfunctions, _L116), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_132, 1, 40},
  /* 3 */ { MAP_LOCAL, "_L163", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L163), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 4 */ { MAP_LOCAL, "_L184", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L184), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 5 */ { MAP_LOCAL, "_L185", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L185), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 12},
  /* 6 */ { MAP_LOCAL, "_L186", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_InitBG_Subfunctions, _L186), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 11},
  /* 7 */ { MAP_LOCAL, "_L187", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L187), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 10},
  /* 8 */ { MAP_LOCAL, "_L188", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L188), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 9},
  /* 9 */ { MAP_LOCAL, "_L189", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L189), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 10 */ { MAP_LOCAL, "_L190", NULL, sizeof(Q_UPDOWN), offsetof(outC_InitBG_Subfunctions, _L190), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L191", NULL, sizeof(M_DUP), offsetof(outC_InitBG_Subfunctions, _L191), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 6},
  /* 12 */ { MAP_LOCAL, "_L192", NULL, sizeof(Q_LINK), offsetof(outC_InitBG_Subfunctions, _L192), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 5},
  /* 13 */ { MAP_LOCAL, "_L200", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_InitBG_Subfunctions, _L200), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 14},
  /* 14 */ { MAP_LOCAL, "_L201", NULL, sizeof(M_VERSION), offsetof(outC_InitBG_Subfunctions, _L201), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 15},
  /* 15 */ { MAP_LOCAL, "_L202", NULL, sizeof(Q_MEDIA), offsetof(outC_InitBG_Subfunctions, _L202), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 16},
  /* 16 */ { MAP_LOCAL, "_L203", NULL, sizeof(N_PIG), offsetof(outC_InitBG_Subfunctions, _L203), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 17},
  /* 17 */ { MAP_LOCAL, "_L204", NULL, sizeof(N_TOTAL), offsetof(outC_InitBG_Subfunctions, _L204), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 18},
  /* 18 */ { MAP_LOCAL, "_L205", NULL, sizeof(M_MCOUNT), offsetof(outC_InitBG_Subfunctions, _L205), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 19},
  /* 19 */ { MAP_LOCAL, "_L206", NULL, sizeof(NID_C), offsetof(outC_InitBG_Subfunctions, _L206), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 20},
  /* 20 */ { MAP_LOCAL, "_L207", NULL, sizeof(NID_BG), offsetof(outC_InitBG_Subfunctions, _L207), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 21},
  /* 21 */ { MAP_LOCAL, "_L208", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L208), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 22 */ { MAP_LOCAL, "_L209", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L209), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 23},
  /* 23 */ { MAP_LOCAL, "_L210", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L210), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 24},
  /* 24 */ { MAP_LOCAL, "_L211", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L211), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 25},
  /* 25 */ { MAP_LOCAL, "_L212", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L212), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 26},
  /* 26 */ { MAP_LOCAL, "_L213", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L213), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 27},
  /* 27 */ { MAP_LOCAL, "_L214", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L214), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L215", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_InitBG_Subfunctions, _L215), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 29},
  /* 29 */ { MAP_LOCAL, "_L216", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L216), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 30 */ { MAP_LOCAL, "_L217", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L217), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 31},
  /* 31 */ { MAP_LOCAL, "_L218", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_InitBG_Subfunctions, _L218), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 32},
  /* 32 */ { MAP_LOCAL, "_L219", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_InitBG_Subfunctions, _L219), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L220", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_InitBG_Subfunctions, _L220), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 34},
  /* 34 */ { MAP_LOCAL, "_L222", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L222), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 35 */ { MAP_LOCAL, "_L223", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L223), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 36},
  /* 36 */ { MAP_LOCAL, "_L224", NULL, sizeof(kcg_int), offsetof(outC_InitBG_Subfunctions, _L224), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 37},
  /* 37 */ { MAP_LOCAL, "_L225", NULL, sizeof(Q_DIRLRBG), offsetof(outC_InitBG_Subfunctions, _L225), &_Type_Q_DIRLRBG_Utils, NULL, NULL, NULL, 1, 38},
  /* 38 */ { MAP_LOCAL, "_L226", NULL, sizeof(Q_DIRTRAIN), offsetof(outC_InitBG_Subfunctions, _L226), &_Type_Q_DIRTRAIN_Utils, NULL, NULL, NULL, 1, 39},
  /* 39 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L3), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 40 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_InitBG_Subfunctions, _L5), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 3},
  /* 41 */ { MAP_OUTPUT, "out_BG", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), offsetof(outC_InitBG_Subfunctions, out_BG), &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 41}
};
static const MappingScope scope_92 = {
  "Subfunctions::InitBG/ InitBG_Subfunctions",
  scope_92_entries, 42,
};

/* Subfunctions::Decop_Track_Msg/ Decop_Track_Msg_Subfunctions */
static const MappingEntry scope_91_entries[64] = {
  /* 0 */ { MAP_OUTPUT, "BTM_Msg_valid", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, BTM_Msg_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 35},
  /* 1 */ { MAP_OUTPUT, "CheckResult", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, CheckResult), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 39},
  /* 2 */ { MAP_OUTPUT, "Compressed_Packets", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, Compressed_Packets), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 44},
  /* 3 */ { MAP_OUTPUT, "MsgReceivedTime", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, MsgReceivedTime), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 36},
  /* 4 */ { MAP_OUTPUT, "MsgSource", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, MsgSource), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 37},
  /* 5 */ { MAP_OUTPUT, "RadioHeader", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, RadioHeader), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 62},
  /* 6 */ { MAP_OUTPUT, "RadioMetadata", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, RadioMetadata), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 63},
  /* 7 */ { MAP_OUTPUT, "TelegramPresent", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, TelegramPresent), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 38},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L1), &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_132, 1, 0},
  /* 9 */ { MAP_LOCAL, "_L10", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L10), &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 9},
  /* 10 */ { MAP_LOCAL, "_L11", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L11), &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 10},
  /* 11 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L12), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 11},
  /* 12 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L13), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 13 */ { MAP_LOCAL, "_L14", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L14), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 13},
  /* 14 */ { MAP_LOCAL, "_L15", NULL, sizeof(TelegramHeader_T_BG_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L15), &_Type_TelegramHeader_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_130, 1, 14},
  /* 15 */ { MAP_LOCAL, "_L16", NULL, sizeof(centerOfBalisePosition_T_BG_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L16), &_Type_centerOfBalisePosition_T_BG_Types_Pkg_Utils, NULL, NULL, &scope_129, 1, 15},
  /* 16 */ { MAP_LOCAL, "_L19", NULL, sizeof(Q_UPDOWN), offsetof(outC_Decop_Track_Msg_Subfunctions, _L19), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 16},
  /* 17 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L2), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 18 */ { MAP_LOCAL, "_L20", NULL, sizeof(M_VERSION), offsetof(outC_Decop_Track_Msg_Subfunctions, _L20), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 17},
  /* 19 */ { MAP_LOCAL, "_L21", NULL, sizeof(Q_MEDIA), offsetof(outC_Decop_Track_Msg_Subfunctions, _L21), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 18},
  /* 20 */ { MAP_LOCAL, "_L22", NULL, sizeof(N_PIG), offsetof(outC_Decop_Track_Msg_Subfunctions, _L22), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 19},
  /* 21 */ { MAP_LOCAL, "_L23", NULL, sizeof(N_TOTAL), offsetof(outC_Decop_Track_Msg_Subfunctions, _L23), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 20},
  /* 22 */ { MAP_LOCAL, "_L24", NULL, sizeof(M_DUP), offsetof(outC_Decop_Track_Msg_Subfunctions, _L24), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 21},
  /* 23 */ { MAP_LOCAL, "_L25", NULL, sizeof(M_MCOUNT), offsetof(outC_Decop_Track_Msg_Subfunctions, _L25), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 22},
  /* 24 */ { MAP_LOCAL, "_L26", NULL, sizeof(NID_C), offsetof(outC_Decop_Track_Msg_Subfunctions, _L26), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 23},
  /* 25 */ { MAP_LOCAL, "_L27", NULL, sizeof(NID_BG), offsetof(outC_Decop_Track_Msg_Subfunctions, _L27), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 24},
  /* 26 */ { MAP_LOCAL, "_L28", NULL, sizeof(Q_LINK), offsetof(outC_Decop_Track_Msg_Subfunctions, _L28), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 25},
  /* 27 */ { MAP_LOCAL, "_L29", NULL, sizeof(odometry_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L29), &_Type_odometry_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_128, 1, 26},
  /* 28 */ { MAP_LOCAL, "_L3", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L3), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 2},
  /* 29 */ { MAP_LOCAL, "_L30", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L30), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 27},
  /* 30 */ { MAP_LOCAL, "_L4", NULL, sizeof(MsgSource_T_Common_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L4), &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 3},
  /* 31 */ { MAP_LOCAL, "_L45", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L45), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 34},
  /* 32 */ { MAP_LOCAL, "_L46", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L46), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 33},
  /* 33 */ { MAP_LOCAL, "_L47", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L47), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 32},
  /* 34 */ { MAP_LOCAL, "_L48", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L48), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 31},
  /* 35 */ { MAP_LOCAL, "_L49", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L49), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 30},
  /* 36 */ { MAP_LOCAL, "_L5", NULL, sizeof(API_TelegramHeader_T_API_Msg_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L5), &_Type_API_TelegramHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_131, 1, 4},
  /* 37 */ { MAP_LOCAL, "_L50", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L50), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 29},
  /* 38 */ { MAP_LOCAL, "_L51", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L51), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 28},
  /* 39 */ { MAP_LOCAL, "_L6", NULL, sizeof(API_RadioMsgHeader_T_API_Msg_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L6), &_Type_API_RadioMsgHeader_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_127, 1, 5},
  /* 40 */ { MAP_LOCAL, "_L7", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, _L7), &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 6},
  /* 41 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 7},
  /* 42 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 8},
  /* 43 */ { MAP_OUTPUT, "badbalise", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, badbalise), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 40},
  /* 44 */ { MAP_OUTPUT, "m_Version", NULL, sizeof(M_VERSION), offsetof(outC_Decop_Track_Msg_Subfunctions, m_Version), &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 45},
  /* 45 */ { MAP_OUTPUT, "m_dup", NULL, sizeof(M_DUP), offsetof(outC_Decop_Track_Msg_Subfunctions, m_dup), &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 42},
  /* 46 */ { MAP_OUTPUT, "m_mcount", NULL, sizeof(M_MCOUNT), offsetof(outC_Decop_Track_Msg_Subfunctions, m_mcount), &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 49},
  /* 47 */ { MAP_OUTPUT, "n_pig", NULL, sizeof(N_PIG), offsetof(outC_Decop_Track_Msg_Subfunctions, n_pig), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 47},
  /* 48 */ { MAP_OUTPUT, "n_total", NULL, sizeof(N_TOTAL), offsetof(outC_Decop_Track_Msg_Subfunctions, n_total), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 48},
  /* 49 */ { MAP_OUTPUT, "nid_bg", NULL, sizeof(NID_BG), offsetof(outC_Decop_Track_Msg_Subfunctions, nid_bg), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 51},
  /* 50 */ { MAP_OUTPUT, "nid_c", NULL, sizeof(NID_C), offsetof(outC_Decop_Track_Msg_Subfunctions, nid_c), &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 50},
  /* 51 */ { MAP_OUTPUT, "odo_acc", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_acc), &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 56},
  /* 52 */ { MAP_OUTPUT, "odo_dir", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_dir), &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 58},
  /* 53 */ { MAP_OUTPUT, "odo_loc", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_loc), &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 54},
  /* 54 */ { MAP_OUTPUT, "odo_locinacc", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_locinacc), &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 59},
  /* 55 */ { MAP_OUTPUT, "odo_motion", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_motion), &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 57},
  /* 56 */ { MAP_OUTPUT, "odo_speed", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_speed), &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 55},
  /* 57 */ { MAP_OUTPUT, "odo_time", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_time), &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 53},
  /* 58 */ { MAP_OUTPUT, "odo_valid", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, odo_valid), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 52},
  /* 59 */ { MAP_OUTPUT, "q_link", NULL, sizeof(Q_LINK), offsetof(outC_Decop_Track_Msg_Subfunctions, q_link), &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 43},
  /* 60 */ { MAP_OUTPUT, "q_media", NULL, sizeof(Q_MEDIA), offsetof(outC_Decop_Track_Msg_Subfunctions, q_media), &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 46},
  /* 61 */ { MAP_OUTPUT, "q_updown", NULL, sizeof(Q_UPDOWN), offsetof(outC_Decop_Track_Msg_Subfunctions, q_updown), &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 41},
  /* 62 */ { MAP_OUTPUT, "radio_consistency", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, radio_consistency), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 61},
  /* 63 */ { MAP_OUTPUT, "radio_present", NULL, sizeof(kcg_bool), offsetof(outC_Decop_Track_Msg_Subfunctions, radio_present), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 60}
};
static const MappingScope scope_91 = {
  "Subfunctions::Decop_Track_Msg/ Decop_Track_Msg_Subfunctions",
  scope_91_entries, 64,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_90_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_74_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_90 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:then:",
  scope_90_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_89_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_75_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_89 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:then:",
  scope_89_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_88_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L18_IfBlock1), &_Type_kcg_int_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_76_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_88 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_88_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_87_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L110_IfBlock1), &_Type_kcg_int_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L39_IfBlock1), &_Type_kcg_bool_Utils, &scope_77_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_87 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:then:",
  scope_87_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_86_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L112_IfBlock1), &_Type_kcg_int_Utils, &scope_78_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L311_IfBlock1), &_Type_kcg_bool_Utils, &scope_78_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_86 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_86_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_85_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L214_IfBlock1), &_Type_kcg_int_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L413_IfBlock1), &_Type_kcg_bool_Utils, &scope_79_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_85 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_85_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_84_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L116_IfBlock1), &_Type_kcg_int_Utils, &scope_80_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_80_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_84 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_84_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_83_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L118_IfBlock1), &_Type_kcg_int_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L417_IfBlock1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_83 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_83_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_82_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L220_IfBlock1), &_Type_kcg_int_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L319_IfBlock1), &_Type_kcg_bool_Utils, &scope_81_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_82 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_82_entries, 2,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_81_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_false, &scope_82, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_81_entries[0], isActive_kcg_bool_kcg_true, &scope_83, 1, 2}
};
static const MappingScope scope_81 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_81_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_80_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_80_entries[0], isActive_kcg_bool_kcg_false, &scope_81, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_80_entries[0], isActive_kcg_bool_kcg_true, &scope_84, 1, 2}
};
static const MappingScope scope_80 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_80_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_79_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_false, &scope_80, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_79_entries[0], isActive_kcg_bool_kcg_true, &scope_85, 1, 2}
};
static const MappingScope scope_79 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_79_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_78_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_78_entries[0], isActive_kcg_bool_kcg_false, &scope_79, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_78_entries[0], isActive_kcg_bool_kcg_true, &scope_86, 1, 2}
};
static const MappingScope scope_78 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:else:",
  scope_78_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_77_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_false, &scope_78, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_77_entries[0], isActive_kcg_bool_kcg_true, &scope_87, 1, 2}
};
static const MappingScope scope_77 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_77_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_76_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_false, &scope_77, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_76_entries[0], isActive_kcg_bool_kcg_true, &scope_88, 1, 2}
};
static const MappingScope scope_76 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:else:",
  scope_76_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_75_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_false, &scope_76, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_75_entries[0], isActive_kcg_bool_kcg_true, &scope_89, 1, 2}
};
static const MappingScope scope_75 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:else:",
  scope_75_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_74_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_false, &scope_75, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_74_entries[0], isActive_kcg_bool_kcg_true, &scope_90, 1, 2}
};
static const MappingScope scope_74 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversionsIfBlock1:",
  scope_74_entries, 3,
};

/* TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversions */
static const MappingEntry scope_73_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_74, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L2", NULL, sizeof(N_PIG), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L2), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "n_pig_in", NULL, sizeof(N_PIG), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, n_pig_in), &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "n_pig_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_PIG_to_int_TM_conversions, n_pig_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_73 = {
  "TM_conversions::CAST_N_PIG_to_int/ CAST_N_PIG_to_int_TM_conversions",
  scope_73_entries, 6,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:then: */
static const MappingEntry scope_72_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L2_IfBlock1), &_Type_kcg_int_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L3_IfBlock1), &_Type_kcg_bool_Utils, &scope_56_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_72 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:then:",
  scope_72_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:then: */
static const MappingEntry scope_71_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L1_IfBlock1), &_Type_kcg_int_Utils, &scope_57_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L37_IfBlock1), &_Type_kcg_bool_Utils, &scope_57_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_71 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:then:",
  scope_71_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:then: */
static const MappingEntry scope_70_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L19_IfBlock1), &_Type_kcg_int_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L38_IfBlock1), &_Type_kcg_bool_Utils, &scope_58_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_70 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:then:",
  scope_70_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:then: */
static const MappingEntry scope_69_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L111_IfBlock1), &_Type_kcg_int_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L310_IfBlock1), &_Type_kcg_bool_Utils, &scope_59_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_69 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:then:",
  scope_69_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:then: */
static const MappingEntry scope_68_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L113_IfBlock1), &_Type_kcg_int_Utils, &scope_60_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L312_IfBlock1), &_Type_kcg_bool_Utils, &scope_60_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_68 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:then:",
  scope_68_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:then: */
static const MappingEntry scope_67_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L214_IfBlock1), &_Type_kcg_int_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L5_IfBlock1), &_Type_kcg_bool_Utils, &scope_61_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_67 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:then:",
  scope_67_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:then: */
static const MappingEntry scope_66_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L116_IfBlock1), &_Type_kcg_int_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L315_IfBlock1), &_Type_kcg_bool_Utils, &scope_62_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_66 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:then:",
  scope_66_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then: */
static const MappingEntry scope_65_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L118_IfBlock1), &_Type_kcg_int_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L317_IfBlock1), &_Type_kcg_bool_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_true, NULL, 1, 1}
};
static const MappingScope scope_65 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:then:",
  scope_65_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else: */
static const MappingEntry scope_64_entries[2] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L119_IfBlock1), &_Type_kcg_int_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L4_IfBlock1), &_Type_kcg_bool_Utils, &scope_63_entries[0], isActive_kcg_bool_kcg_false, NULL, 1, 1}
};
static const MappingScope scope_64 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:else:",
  scope_64_entries, 2,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else: */
static const MappingEntry scope_63_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_ACTION, "else:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_false, &scope_64, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_63_entries[0], isActive_kcg_bool_kcg_true, &scope_65, 1, 2}
};
static const MappingScope scope_63 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:else:",
  scope_63_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else: */
static const MappingEntry scope_62_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _1_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_false, &scope_63, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_62_entries[0], isActive_kcg_bool_kcg_true, &scope_66, 1, 2}
};
static const MappingScope scope_62 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:else:",
  scope_62_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else: */
static const MappingEntry scope_61_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _2_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_false, &scope_62, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_61_entries[0], isActive_kcg_bool_kcg_true, &scope_67, 1, 2}
};
static const MappingScope scope_61 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:else:",
  scope_61_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else: */
static const MappingEntry scope_60_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _3_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_kcg_bool_kcg_false, &scope_61, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_60_entries[0], isActive_kcg_bool_kcg_true, &scope_68, 1, 2}
};
static const MappingScope scope_60 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:else:",
  scope_60_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else: */
static const MappingEntry scope_59_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _4_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive_kcg_bool_kcg_false, &scope_60, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_59_entries[0], isActive_kcg_bool_kcg_true, &scope_69, 1, 2}
};
static const MappingScope scope_59 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:else:",
  scope_59_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else: */
static const MappingEntry scope_58_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _5_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_false, &scope_59, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_58_entries[0], isActive_kcg_bool_kcg_true, &scope_70, 1, 2}
};
static const MappingScope scope_58 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:else:",
  scope_58_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else: */
static const MappingEntry scope_57_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _6_else_clock_IfBlock1), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_false, &scope_58, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_57_entries[0], isActive_kcg_bool_kcg_true, &scope_71, 1, 2}
};
static const MappingScope scope_57 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:else:",
  scope_57_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1: */
static const MappingEntry scope_56_entries[3] = {
  /* 0 */ { MAP_LOCAL, "@condition", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, IfBlock1_clock), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_IF, "else:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive_kcg_bool_kcg_false, &scope_57, 1, 1},
  /* 2 */ { MAP_ACTION, "then:", NULL, 0, 0, NULL, &scope_56_entries[0], isActive_kcg_bool_kcg_true, &scope_72, 1, 2}
};
static const MappingScope scope_56 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversionsIfBlock1:",
  scope_56_entries, 3,
};

/* TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversions */
static const MappingEntry scope_55_entries[6] = {
  /* 0 */ { MAP_IF, "IfBlock1:", NULL, 0, 0, NULL, NULL, NULL, &scope_56, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L3", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L3), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, _L4), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "error", NULL, sizeof(kcg_bool), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, error), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "n_total_in", NULL, sizeof(N_TOTAL), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, n_total_in), &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "n_total_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_N_TOTAL_to_int_TM_conversions, n_total_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_55 = {
  "TM_conversions::CAST_N_TOTAL_to_int/ CAST_N_TOTAL_to_int_TM_conversions",
  scope_55_entries, 6,
};

/* TM_conversions::CAST_NID_BG_to_int/ CAST_NID_BG_to_int_TM_conversions */
static const MappingEntry scope_54_entries[6] = {
  /* 0 */ { MAP_LOCAL, "_L1", NULL, sizeof(NID_BG), offsetof(outC_CAST_NID_BG_to_int_TM_conversions, _L1), &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 0},
  /* 1 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_BG_to_int_TM_conversions, _L10), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 3},
  /* 2 */ { MAP_LOCAL, "_L11", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_BG_to_int_TM_conversions, _L11), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 4},
  /* 3 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_BG_to_int_TM_conversions, _L8), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 2},
  /* 4 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), offsetof(outC_CAST_NID_BG_to_int_TM_conversions, _L9), &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 1},
  /* 5 */ { MAP_OUTPUT, "nid_bg_int", NULL, sizeof(kcg_int), offsetof(outC_CAST_NID_BG_to_int_TM_conversions, nid_bg_int), &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 5}
};
static const MappingScope scope_54 = {
  "TM_conversions::CAST_NID_BG_to_int/ CAST_NID_BG_to_int_TM_conversions",
  scope_54_entries, 6,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:No_BG:<2 */
static const MappingEntry scope_53_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_No_BG_2_SM1, NULL, 1, 0}
};
static const MappingScope scope_53 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:No_BG:<2",
  scope_53_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:No_BG:<1 */
static const MappingEntry scope_52_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_No_BG_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_52 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:No_BG:<1",
  scope_52_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:No_BG: */
static const MappingEntry scope_51_entries[2] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_No_BG_1_SM1, &scope_52, 1, 0},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_No_BG_2_SM1, &scope_53, 1, 1}
};
static const MappingScope scope_51 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:No_BG:",
  scope_51_entries, 2,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:<1 */
static const MappingEntry scope_49_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_NominalDir_1_SM1, NULL, 1, 0}
};
static const MappingScope scope_49 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:<1",
  scope_49_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:<2 */
static const MappingEntry scope_48_entries[1] = {
  /* 0 */ { MAP_WEAK_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_2_entries[2], isActive_SSM_TR_SM1_SSM_TR_NominalDir_2_SM1, NULL, 1, 0}
};
static const MappingScope scope_48 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:<2",
  scope_48_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:LastBaliseinBG:<1 */
static const MappingEntry scope_47_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_47 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:LastBaliseinBG:<1",
  scope_47_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:LastBaliseinBG: */
static const MappingEntry scope_46_entries[9] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_LastBaliseinBG_1_SM2_SM1_NominalDir, &scope_47, 1, 8},
  /* 1 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 16", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx.Context_16, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 2 */ { MAP_LOCAL, "_L2", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L2_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, &scope_135, 1, 1},
  /* 3 */ { MAP_LOCAL, "_L3", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L3_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, &scope_135, 1, 7},
  /* 4 */ { MAP_LOCAL, "_L5", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L5_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, &scope_132, 1, 2},
  /* 5 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, NULL, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L7_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, NULL, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L8", NULL, sizeof(Completeness_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L8_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_Completeness_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L9", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L9_SM1_NominalDir_SM2_LastBaliseinBG, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, &scope_135, 1, 5}
};
static const MappingScope scope_46 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:LastBaliseinBG:",
  scope_46_entries, 9,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SevensBalise:<2 */
static const MappingEntry scope_45_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SevensBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_45 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SevensBalise:<2",
  scope_45_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SevensBalise:<1 */
static const MappingEntry scope_44_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SevensBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_44 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SevensBalise:<1",
  scope_44_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SevensBalise: */
static const MappingEntry scope_43_entries[9] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SevensBalise_1_SM2_SM1_NominalDir, &scope_44, 1, 7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SevensBalise_2_SM2_SM1_NominalDir, &scope_45, 1, 8},
  /* 2 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 9", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx.Context_9, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 3 */ { MAP_LOCAL, "_L10", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L10_SM1_NominalDir_SM2_SevensBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, &scope_135, 1, 6},
  /* 4 */ { MAP_LOCAL, "_L11", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L11_SM1_NominalDir_SM2_SevensBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, &scope_132, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L12_SM1_NominalDir_SM2_SevensBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, &scope_135, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L13_SM1_NominalDir_SM2_SevensBalise, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, NULL, 1, 5},
  /* 7 */ { MAP_LOCAL, "_L15", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L15_SM1_NominalDir_SM2_SevensBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L6_SM1_NominalDir_SM2_SevensBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, NULL, 1, 1}
};
static const MappingScope scope_43 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SevensBalise:",
  scope_43_entries, 9,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:<3 */
static const MappingEntry scope_42_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_42 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:<3",
  scope_42_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:<2 */
static const MappingEntry scope_41_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_41 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:<2",
  scope_41_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:<1 */
static const MappingEntry scope_40_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_40 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:<1",
  scope_40_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise: */
static const MappingEntry scope_39_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_1_SM2_SM1_NominalDir, &scope_40, 1, 7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_2_SM2_SM1_NominalDir, &scope_41, 1, 8},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SixthBalise_3_SM2_SM1_NominalDir, &scope_42, 1, 9},
  /* 3 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 10", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx.Context_10, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L12_SM1_NominalDir_SM2_SixthBalise, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L13", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L13_SM1_NominalDir_SM2_SixthBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L2", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L2_SM1_NominalDir_SM2_SixthBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, NULL, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L3", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L3_SM1_NominalDir_SM2_SixthBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, &scope_132, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L4", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L4_SM1_NominalDir_SM2_SixthBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, &scope_135, 1, 6},
  /* 9 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L5_SM1_NominalDir_SM2_SixthBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, &scope_135, 1, 2}
};
static const MappingScope scope_39 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SixthBalise:",
  scope_39_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:<3 */
static const MappingEntry scope_38_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_38 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:<3",
  scope_38_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:<2 */
static const MappingEntry scope_37_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_37 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:<2",
  scope_37_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:<1 */
static const MappingEntry scope_36_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_36 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:<1",
  scope_36_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise: */
static const MappingEntry scope_35_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_1_SM2_SM1_NominalDir, &scope_36, 1, 7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_2_SM2_SM1_NominalDir, &scope_37, 1, 8},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FifthBalise_3_SM2_SM1_NominalDir, &scope_38, 1, 9},
  /* 3 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 14", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx.Context_14, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L10_SM1_NominalDir_SM2_FifthBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, NULL, 1, 4},
  /* 5 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L5_SM1_NominalDir_SM2_FifthBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, &scope_135, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L6", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L6_SM1_NominalDir_SM2_FifthBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, &scope_135, 1, 6},
  /* 7 */ { MAP_LOCAL, "_L7", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L7_SM1_NominalDir_SM2_FifthBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, &scope_132, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L8_SM1_NominalDir_SM2_FifthBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, NULL, 1, 3},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L9_SM1_NominalDir_SM2_FifthBalise, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, NULL, 1, 5}
};
static const MappingScope scope_35 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FifthBalise:",
  scope_35_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:<3 */
static const MappingEntry scope_34_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_34 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:<3",
  scope_34_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:<2 */
static const MappingEntry scope_33_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_33 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:<2",
  scope_33_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:<1 */
static const MappingEntry scope_32_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_32 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:<1",
  scope_32_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise: */
static const MappingEntry scope_31_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_1_SM2_SM1_NominalDir, &scope_32, 1, 7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_2_SM2_SM1_NominalDir, &scope_33, 1, 8},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FourthBalise_3_SM2_SM1_NominalDir, &scope_34, 1, 9},
  /* 3 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 15", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx.Context_15, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L2", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L2_SM1_NominalDir_SM2_FourthBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, &scope_132, 1, 3},
  /* 5 */ { MAP_LOCAL, "_L3", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L3_SM1_NominalDir_SM2_FourthBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, &scope_135, 1, 6},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L4_SM1_NominalDir_SM2_FourthBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, NULL, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L5_SM1_NominalDir_SM2_FourthBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, &scope_135, 1, 1},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_SM1_NominalDir_SM2_FourthBalise, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L7_SM1_NominalDir_SM2_FourthBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, NULL, 1, 4}
};
static const MappingScope scope_31 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FourthBalise:",
  scope_31_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:<3 */
static const MappingEntry scope_30_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_30 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:<3",
  scope_30_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:<2 */
static const MappingEntry scope_29_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_29 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:<2",
  scope_29_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:<1 */
static const MappingEntry scope_28_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_28 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:<1",
  scope_28_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise: */
static const MappingEntry scope_27_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_1_SM2_SM1_NominalDir, &scope_28, 1, 7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_2_SM2_SM1_NominalDir, &scope_29, 1, 8},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_ThirdBalise_3_SM2_SM1_NominalDir, &scope_30, 1, 9},
  /* 3 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 5", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx.Context_5, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L10", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L10_SM1_NominalDir_SM2_ThirdBalise, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, NULL, 1, 5},
  /* 5 */ { MAP_LOCAL, "_L12", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L12_SM1_NominalDir_SM2_ThirdBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, NULL, 1, 4},
  /* 6 */ { MAP_LOCAL, "_L5", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L5_SM1_NominalDir_SM2_ThirdBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, &scope_132, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L6", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L6_SM1_NominalDir_SM2_ThirdBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, &scope_135, 1, 6},
  /* 8 */ { MAP_LOCAL, "_L8", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L8_SM1_NominalDir_SM2_ThirdBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, &scope_135, 1, 2},
  /* 9 */ { MAP_LOCAL, "_L9", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L9_SM1_NominalDir_SM2_ThirdBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, NULL, 1, 3}
};
static const MappingScope scope_27 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:ThirdBalise:",
  scope_27_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<8 */
static const MappingEntry scope_26_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_8_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_26 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<8",
  scope_26_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<7 */
static const MappingEntry scope_25_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_7_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_25 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<7",
  scope_25_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<6 */
static const MappingEntry scope_24_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_6_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_24 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<6",
  scope_24_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<5 */
static const MappingEntry scope_23_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_5_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_23 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<5",
  scope_23_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<4 */
static const MappingEntry scope_22_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_4_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_22 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<4",
  scope_22_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<3 */
static const MappingEntry scope_21_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_21 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<3",
  scope_21_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<2 */
static const MappingEntry scope_20_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_20 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<2",
  scope_20_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<1 */
static const MappingEntry scope_19_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_19 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:<1",
  scope_19_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait: */
static const MappingEntry scope_18_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_1_SM2_SM1_NominalDir, &scope_19, 1, 2},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_2_SM2_SM1_NominalDir, &scope_20, 1, 3},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_3_SM2_SM1_NominalDir, &scope_21, 1, 4},
  /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_4_SM2_SM1_NominalDir, &scope_22, 1, 5},
  /* 4 */ { MAP_FORK, "<5", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_5_SM2_SM1_NominalDir, &scope_23, 1, 6},
  /* 5 */ { MAP_FORK, "<6", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_6_SM2_SM1_NominalDir, &scope_24, 1, 7},
  /* 6 */ { MAP_FORK, "<7", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_7_SM2_SM1_NominalDir, &scope_25, 1, 8},
  /* 7 */ { MAP_FORK, "<8", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_Wait_8_SM2_SM1_NominalDir, &scope_26, 1, 9},
  /* 8 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L1_SM1_NominalDir_SM2_Wait, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_Wait_SM1_NominalDir_SM2, &scope_135, 1, 0},
  /* 9 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L4_SM1_NominalDir_SM2_Wait, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_Wait_SM1_NominalDir_SM2, NULL, 1, 1}
};
static const MappingScope scope_18 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:Wait:",
  scope_18_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:<3 */
static const MappingEntry scope_17_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_17 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:<3",
  scope_17_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:<2 */
static const MappingEntry scope_16_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_16 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:<2",
  scope_16_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:<1 */
static const MappingEntry scope_15_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_15 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:<1",
  scope_15_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise: */
static const MappingEntry scope_14_entries[10] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_1_SM2_SM1_NominalDir, &scope_15, 1, 7},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_2_SM2_SM1_NominalDir, &scope_16, 1, 8},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_SecondBalise_3_SM2_SM1_NominalDir, &scope_17, 1, 9},
  /* 3 */ { MAP_INSTANCE, "Subfunctions::Consistency_Check_Track_BG 1", NULL, sizeof(outC_Consistency_Check_Track_BG_Subfunctions), (size_t)&outputs_ctx._4_Context_1, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, &scope_93, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L1", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L1_SM1_NominalDir_SM2_SecondBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, &scope_135, 1, 6},
  /* 5 */ { MAP_LOCAL, "_L2", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L2_SM1_NominalDir_SM2_SecondBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, &scope_135, 1, 1},
  /* 6 */ { MAP_LOCAL, "_L4", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L4_SM1_NominalDir_SM2_SecondBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, &scope_132, 1, 2},
  /* 7 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L5_SM1_NominalDir_SM2_SecondBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, NULL, 1, 3},
  /* 8 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6_SM1_NominalDir_SM2_SecondBalise, &_Type_kcg_bool_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L7", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L7_SM1_NominalDir_SM2_SecondBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, NULL, 1, 4}
};
static const MappingScope scope_14 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:SecondBalise:",
  scope_14_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<4 */
static const MappingEntry scope_13_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_4_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_13 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<4",
  scope_13_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<3 */
static const MappingEntry scope_12_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_3_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_12 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<3",
  scope_12_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<2 */
static const MappingEntry scope_11_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_2_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_11 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<2",
  scope_11_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<1 */
static const MappingEntry scope_10_entries[1] = {
  /* 0 */ { MAP_STRONG_TRANSITION, ">:", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_1_SM2_SM1_NominalDir, NULL, 1, 0}
};
static const MappingScope scope_10 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:<1",
  scope_10_entries, 1,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise: */
static const MappingEntry scope_9_entries[8] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_1_SM2_SM1_NominalDir, &scope_10, 1, 4},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_2_SM2_SM1_NominalDir, &scope_11, 1, 5},
  /* 2 */ { MAP_FORK, "<3", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_3_SM2_SM1_NominalDir, &scope_12, 1, 6},
  /* 3 */ { MAP_FORK, "<4", NULL, 0, 0, NULL, &scope_6_entries[1], isActive_SSM_TR_SM2_SM1_NominalDir_SSM_TR_FirstBalise_4_SM2_SM1_NominalDir, &scope_13, 1, 7},
  /* 4 */ { MAP_INSTANCE, "Subfunctions::InitBG", NULL, sizeof(outC_InitBG_Subfunctions), (size_t)&outputs_ctx.Context_InitBG, NULL, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FirstBalise_SM1_NominalDir_SM2, &scope_92, 1, 0},
  /* 5 */ { MAP_LOCAL, "_L11", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L11_SM1_NominalDir_SM2_FirstBalise, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FirstBalise_SM1_NominalDir_SM2, &scope_135, 1, 3},
  /* 6 */ { MAP_LOCAL, "_L20", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L20_SM1_NominalDir_SM2_FirstBalise, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FirstBalise_SM1_NominalDir_SM2, &scope_132, 1, 1},
  /* 7 */ { MAP_LOCAL, "_L22", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L22_SM1_NominalDir_SM2_FirstBalise, &_Type_kcg_int_Utils, &scope_6_entries[4], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FirstBalise_SM1_NominalDir_SM2, NULL, 1, 2}
};
static const MappingScope scope_9 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:FirstBalise:",
  scope_9_entries, 8,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2: */
static const MappingEntry scope_6_entries[18] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM2_SM1_NominalDir), (size_t)&outputs_ctx.SM2_state_act_SM1_NominalDir, &_Type_SSM_ST_SM2_SM1_NominalDir_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM2_SM1_NominalDir), (size_t)&outputs_ctx.SM2_fired_strong_SM1_NominalDir, &_Type_SSM_TR_SM2_SM1_NominalDir_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM2_SM1_NominalDir), (size_t)&outputs_ctx.SM2_fired_SM1_NominalDir, &_Type_SSM_TR_SM2_SM1_NominalDir_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@kcg2", NULL, sizeof(SSM_ST_SM2_SM1_NominalDir), (size_t)&outputs_ctx._6_SM2_clock_SM1_NominalDir, &_Type_SSM_ST_SM2_SM1_NominalDir_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 0, 7},
  /* 4 */ { MAP_LOCAL, "@kcg3", NULL, sizeof(SSM_ST_SM2_SM1_NominalDir), (size_t)&outputs_ctx.SM2_clock_SM1_NominalDir, &_Type_SSM_ST_SM2_SM1_NominalDir_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 0, 8},
  /* 5 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM2_SM1_NominalDir), (size_t)&outputs_ctx.SM2_state_nxt_SM1_NominalDir, &_Type_SSM_ST_SM2_SM1_NominalDir_Utils, NULL, NULL, NULL, 0, 2},
  /* 6 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM2_reset_act_SM1_NominalDir, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 7 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM2_reset_nxt_SM1_NominalDir, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 8 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM2_SM1_NominalDir), (size_t)&outputs_ctx.SM2_state_sel_SM1_NominalDir, &_Type_SSM_ST_SM2_SM1_NominalDir_Utils, NULL, NULL, NULL, 0, 4},
  /* 9 */ { MAP_STATE, "FifthBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FifthBalise_SM1_NominalDir_SM2, &scope_35, 1, 14},
  /* 10 */ { MAP_STATE, "FirstBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FirstBalise_SM1_NominalDir_SM2, &scope_9, 1, 9},
  /* 11 */ { MAP_STATE, "FourthBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_FourthBalise_SM1_NominalDir_SM2, &scope_31, 1, 13},
  /* 12 */ { MAP_STATE, "LastBaliseinBG:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_LastBaliseinBG_SM1_NominalDir_SM2, &scope_46, 1, 17},
  /* 13 */ { MAP_STATE, "SecondBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SecondBalise_SM1_NominalDir_SM2, &scope_14, 1, 10},
  /* 14 */ { MAP_STATE, "SevensBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SevensBalise_SM1_NominalDir_SM2, &scope_43, 1, 16},
  /* 15 */ { MAP_STATE, "SixthBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_SixthBalise_SM1_NominalDir_SM2, &scope_39, 1, 15},
  /* 16 */ { MAP_STATE, "ThirdBalise:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_ThirdBalise_SM1_NominalDir_SM2, &scope_27, 1, 12},
  /* 17 */ { MAP_STATE, "Wait:", NULL, 0, 0, NULL, &scope_6_entries[0], isActive_SSM_ST_SM2_SM1_NominalDir_SSM_st_Wait_SM1_NominalDir_SM2, &scope_18, 1, 11}
};
static const MappingScope scope_6 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:SM2:",
  scope_6_entries, 18,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir: */
static const MappingEntry scope_5_entries[13] = {
  /* 0 */ { MAP_FORK, "<1", NULL, 0, 0, NULL, &scope_2_entries[1], isActive_SSM_TR_SM1_SSM_TR_NominalDir_1_SM1, &scope_49, 1, 12},
  /* 1 */ { MAP_FORK, "<2", NULL, 0, 0, NULL, &scope_2_entries[2], isActive_SSM_TR_SM1_SSM_TR_NominalDir_2_SM1, &scope_48, 1, 11},
  /* 2 */ { MAP_LOCAL, "@kcg4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.NominalDir_weakb_clock_SM1, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 0, 10},
  /* 3 */ { MAP_AUTOMATON, "SM2:", NULL, 0, 0, NULL, NULL, NULL, &scope_6, 1, 0},
  /* 4 */ { MAP_LOCAL, "_L30", NULL, sizeof(ReceivedBGs_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L30_SM1_NominalDir, &_Type_ReceivedBGs_CheckBGInputChannel_Pkg_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, &scope_136, 1, 1},
  /* 5 */ { MAP_LOCAL, "_L31", NULL, sizeof(ReceivedBGs_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L31_SM1_NominalDir, &_Type_ReceivedBGs_CheckBGInputChannel_Pkg_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, &scope_136, 1, 2},
  /* 6 */ { MAP_LOCAL, "_L32", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx._L32_SM1_NominalDir, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, &scope_135, 1, 3},
  /* 7 */ { MAP_LOCAL, "_L36", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L36_SM1_NominalDir, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 1, 4},
  /* 8 */ { MAP_LOCAL, "_L37", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L37_SM1_NominalDir, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 1, 5},
  /* 9 */ { MAP_LOCAL, "_L39", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L39_SM1_NominalDir, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 1, 6},
  /* 10 */ { MAP_LOCAL, "_L40", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L40_SM1_NominalDir, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 1, 7},
  /* 11 */ { MAP_LOCAL, "_L42", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L42_SM1_NominalDir, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 1, 8},
  /* 12 */ { MAP_LOCAL, "_L43", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L43_SM1_NominalDir, &_Type_kcg_int_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 1, 9}
};
static const MappingScope scope_5 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:NominalDir:",
  scope_5_entries, 13,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1: */
static const MappingEntry scope_2_entries[10] = {
  /* 0 */ { MAP_LOCAL, "@active_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_act, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 0},
  /* 1 */ { MAP_LOCAL, "@active_strong_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired_strong, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "@active_weak_transition", NULL, sizeof(SSM_TR_SM1), (size_t)&outputs_ctx.SM1_fired, &_Type_SSM_TR_SM1_Utils, NULL, NULL, NULL, 0, 6},
  /* 3 */ { MAP_LOCAL, "@next_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_nxt, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 2},
  /* 4 */ { MAP_LOCAL, "@reset_active_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_act, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 1},
  /* 5 */ { MAP_LOCAL, "@reset_next_state", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.SM1_reset_nxt, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 6 */ { MAP_LOCAL, "@selected_state", NULL, sizeof(SSM_ST_SM1), (size_t)&outputs_ctx.SM1_state_sel, &_Type_SSM_ST_SM1_Utils, NULL, NULL, NULL, 0, 4},
  /* 7 */ { MAP_STATE, "No_BG:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_No_BG_SM1, &scope_51, 1, 9},
  /* 8 */ { MAP_STATE, "NominalDir:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, &scope_5, 1, 7},
  /* 9 */ { MAP_STATE, "ReverseDir:", NULL, 0, 0, NULL, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_ReverseDir_SM1, NULL, 1, 8}
};
static const MappingScope scope_2 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_PkgSM1:",
  scope_2_entries, 10,
};

/* CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_Pkg */
static const MappingEntry scope_1_entries[53] = {
  /* 0 */ { MAP_LOCAL, "@kcg0", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 4},
  /* 1 */ { MAP_LOCAL, "@kcg1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.init, &_Type_kcg_bool_Utils, &scope_2_entries[0], isActive_SSM_ST_SM1_SSM_st_NominalDir_SM1, NULL, 0, 5},
  /* 2 */ { MAP_LOCAL, "API_Msg_Present", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.API_Msg_Present, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 12},
  /* 3 */ { MAP_LOCAL, "API_n_pig", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.API_n_pig, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 13},
  /* 4 */ { MAP_LOCAL, "API_n_total", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.API_n_total, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 14},
  /* 5 */ { MAP_LOCAL, "API_nid_bg", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.API_nid_bg, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 11},
  /* 6 */ { MAP_LOCAL, "BG@mem", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.BG, &_Type_kcg_int_Utils, NULL, NULL, NULL, 0, 2},
  /* 7 */ { MAP_INPUT, "BTM_TrackMsg", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&inputs_ctx.BTM_TrackMsg, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_132, 1, 52},
  /* 8 */ { MAP_LOCAL, "BTM_valid@mem", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.BTM_valid, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 0, 3},
  /* 9 */ { MAP_LOCAL, "Expected_Balise@mem", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.Expected_Balise, &_Type_kcg_int_Utils, NULL, NULL, NULL, 0, 1},
  /* 10 */ { MAP_AUTOMATON, "SM1:", NULL, 0, 0, NULL, NULL, NULL, &scope_2, 1, 10},
  /* 11 */ { MAP_INSTANCE, "Subfunctions::Decop_Track_Msg 1", NULL, sizeof(outC_Decop_Track_Msg_Subfunctions), (size_t)&outputs_ctx.Context_1, NULL, NULL, NULL, &scope_91, 1, 9},
  /* 12 */ { MAP_INSTANCE, "TM_conversions::CAST_NID_BG_to_int 1", NULL, sizeof(outC_CAST_NID_BG_to_int_TM_conversions), (size_t)&outputs_ctx._3_Context_1, NULL, NULL, NULL, &scope_54, 1, 6},
  /* 13 */ { MAP_INSTANCE, "TM_conversions::CAST_N_PIG_to_int 1", NULL, sizeof(outC_CAST_N_PIG_to_int_TM_conversions), (size_t)&outputs_ctx._1_Context_1, NULL, NULL, NULL, &scope_73, 1, 8},
  /* 14 */ { MAP_INSTANCE, "TM_conversions::CAST_N_TOTAL_to_int 1", NULL, sizeof(outC_CAST_N_TOTAL_to_int_TM_conversions), (size_t)&outputs_ctx._2_Context_1, NULL, NULL, NULL, &scope_55, 1, 7},
  /* 15 */ { MAP_LOCAL, "_L1", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L1, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 47},
  /* 16 */ { MAP_LOCAL, "_L10", NULL, sizeof(CompressedPackets_T_Common_Types_Pkg), (size_t)&outputs_ctx._L10, &_Type_CompressedPackets_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_122, 1, 38},
  /* 17 */ { MAP_LOCAL, "_L11", NULL, sizeof(M_VERSION), (size_t)&outputs_ctx._L11, &_Type_M_VERSION_Utils, NULL, NULL, NULL, 1, 37},
  /* 18 */ { MAP_LOCAL, "_L12", NULL, sizeof(Q_MEDIA), (size_t)&outputs_ctx._L12, &_Type_Q_MEDIA_Utils, NULL, NULL, NULL, 1, 36},
  /* 19 */ { MAP_LOCAL, "_L13", NULL, sizeof(N_PIG), (size_t)&outputs_ctx._L13, &_Type_N_PIG_Utils, NULL, NULL, NULL, 1, 35},
  /* 20 */ { MAP_LOCAL, "_L14", NULL, sizeof(N_TOTAL), (size_t)&outputs_ctx._L14, &_Type_N_TOTAL_Utils, NULL, NULL, NULL, 1, 34},
  /* 21 */ { MAP_LOCAL, "_L15", NULL, sizeof(M_MCOUNT), (size_t)&outputs_ctx._L15, &_Type_M_MCOUNT_Utils, NULL, NULL, NULL, 1, 33},
  /* 22 */ { MAP_LOCAL, "_L16", NULL, sizeof(NID_C), (size_t)&outputs_ctx._L16, &_Type_NID_C_Utils, NULL, NULL, NULL, 1, 32},
  /* 23 */ { MAP_LOCAL, "_L17", NULL, sizeof(NID_BG), (size_t)&outputs_ctx._L17, &_Type_NID_BG_Utils, NULL, NULL, NULL, 1, 31},
  /* 24 */ { MAP_LOCAL, "_L18", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L18, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 30},
  /* 25 */ { MAP_LOCAL, "_L19", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L19, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 29},
  /* 26 */ { MAP_LOCAL, "_L2", NULL, sizeof(T_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L2, &_Type_T_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 46},
  /* 27 */ { MAP_LOCAL, "_L20", NULL, sizeof(OdometryLocations_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L20, &_Type_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_126, 1, 28},
  /* 28 */ { MAP_LOCAL, "_L21", NULL, sizeof(OdometrySpeeds_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L21, &_Type_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_125, 1, 27},
  /* 29 */ { MAP_LOCAL, "_L22", NULL, sizeof(A_internal_Type_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L22, &_Type_A_internal_Type_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 26},
  /* 30 */ { MAP_LOCAL, "_L23", NULL, sizeof(odoMotionState_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L23, &_Type_odoMotionState_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 25},
  /* 31 */ { MAP_LOCAL, "_L24", NULL, sizeof(odoMotionDirection_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L24, &_Type_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, NULL, 1, 24},
  /* 32 */ { MAP_LOCAL, "_L25", NULL, sizeof(LocWithInAcc_T_Obu_BasicTypes_Pkg), (size_t)&outputs_ctx._L25, &_Type_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils, NULL, NULL, &scope_124, 1, 23},
  /* 33 */ { MAP_LOCAL, "_L26", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L26, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 22},
  /* 34 */ { MAP_LOCAL, "_L27", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L27, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 21},
  /* 35 */ { MAP_LOCAL, "_L28", NULL, sizeof(Radio_TrackTrain_Header_T_Radio_Types_Pkg), (size_t)&outputs_ctx._L28, &_Type_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils, NULL, NULL, &scope_118, 1, 20},
  /* 36 */ { MAP_LOCAL, "_L29", NULL, sizeof(RadioMetadata_T_Common_Types_Pkg), (size_t)&outputs_ctx._L29, &_Type_RadioMetadata_T_Common_Types_Pkg_Utils, NULL, NULL, &scope_123, 1, 19},
  /* 37 */ { MAP_LOCAL, "_L3", NULL, sizeof(MsgSource_T_Common_Types_Pkg), (size_t)&outputs_ctx._L3, &_Type_MsgSource_T_Common_Types_Pkg_Utils, NULL, NULL, NULL, 1, 45},
  /* 38 */ { MAP_LOCAL, "_L30", NULL, sizeof(API_TrackSideInput_T_API_Msg_Pkg), (size_t)&outputs_ctx._L30, &_Type_API_TrackSideInput_T_API_Msg_Pkg_Utils, NULL, NULL, &scope_132, 1, 15},
  /* 39 */ { MAP_LOCAL, "_L32", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L32, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 16},
  /* 40 */ { MAP_LOCAL, "_L33", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L33, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 17},
  /* 41 */ { MAP_LOCAL, "_L34", NULL, sizeof(kcg_int), (size_t)&outputs_ctx._L34, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 18},
  /* 42 */ { MAP_LOCAL, "_L4", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L4, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 44},
  /* 43 */ { MAP_LOCAL, "_L5", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L5, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 43},
  /* 44 */ { MAP_LOCAL, "_L6", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx._L6, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 42},
  /* 45 */ { MAP_LOCAL, "_L7", NULL, sizeof(Q_UPDOWN), (size_t)&outputs_ctx._L7, &_Type_Q_UPDOWN_Utils, NULL, NULL, NULL, 1, 41},
  /* 46 */ { MAP_LOCAL, "_L8", NULL, sizeof(M_DUP), (size_t)&outputs_ctx._L8, &_Type_M_DUP_Utils, NULL, NULL, NULL, 1, 40},
  /* 47 */ { MAP_LOCAL, "_L9", NULL, sizeof(Q_LINK), (size_t)&outputs_ctx._L9, &_Type_Q_LINK_Utils, NULL, NULL, NULL, 1, 39},
  /* 48 */ { MAP_OUTPUT, "count_BTM_BGs", NULL, sizeof(kcg_int), (size_t)&outputs_ctx.count_BTM_BGs, &_Type_kcg_int_Utils, NULL, NULL, NULL, 1, 49},
  /* 49 */ { MAP_LOCAL, "current_BG@mem", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx.current_BG, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 0, 0},
  /* 50 */ { MAP_OUTPUT, "out_BG", NULL, sizeof(ReceivedBG_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx.out_BG, &_Type_ReceivedBG_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_135, 1, 51},
  /* 51 */ { MAP_OUTPUT, "out_BG_complete", NULL, sizeof(kcg_bool), (size_t)&outputs_ctx.out_BG_complete, &_Type_kcg_bool_Utils, NULL, NULL, NULL, 1, 50},
  /* 52 */ { MAP_OUTPUT, "out_Track_BGs", NULL, sizeof(ReceivedBGs_CheckBGInputChannel_Pkg), (size_t)&outputs_ctx.out_Track_BGs, &_Type_ReceivedBGs_CheckBGInputChannel_Pkg_Utils, NULL, NULL, &scope_136, 1, 48}
};
static const MappingScope scope_1 = {
  "CheckBGInputChannel_Pkg::Listen_on_BTM/ Listen_on_BTM_CheckBGInputChannel_Pkg",
  scope_1_entries, 53,
};

/*  */
static const MappingEntry scope_0_entries[1] = {
  /* 0 */ { MAP_ROOT, "CheckBGInputChannel_Pkg::Listen_on_BTM", NULL, 0, 0, NULL, NULL, NULL, &scope_1, 1, 0}
};
static const MappingScope scope_0 = {
  "",
  scope_0_entries, 1,
};

const MappingScope* pTop = &scope_0;

