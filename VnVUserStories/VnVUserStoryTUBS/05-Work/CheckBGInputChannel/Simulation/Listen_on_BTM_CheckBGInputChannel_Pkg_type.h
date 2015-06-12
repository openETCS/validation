#ifndef LISTEN_ON_BTM_CHECKBGINPUTCHANNEL_PKG_TYPES_CONVERTION
#define LISTEN_ON_BTM_CHECKBGINPUTCHANNEL_PKG_TYPES_CONVERTION

/****************************************************************
 ** Boolean entity activation
 ****************************************************************/
extern int _SCSIM_BoolEntity_is_active(void* pValue);

/****************************************************************
 ** Type utils declarations
 ****************************************************************/
extern TypeUtils _SCSIM_kcg_real_Utils;
extern TypeUtils _SCSIM_kcg_bool_Utils;
extern TypeUtils _SCSIM_kcg_char_Utils;
extern TypeUtils _SCSIM_kcg_int_Utils;
extern TypeUtils _SCSIM_struct__2603_Utils;
extern TypeUtils _SCSIM_array_int_500_Utils;
extern TypeUtils _SCSIM_struct__2624_Utils;
extern TypeUtils _SCSIM_array__2632_Utils;
extern TypeUtils _SCSIM_struct__2635_Utils;
extern TypeUtils _SCSIM_struct__2640_Utils;
extern TypeUtils _SCSIM_struct__2652_Utils;
extern TypeUtils _SCSIM_struct__2658_Utils;
extern TypeUtils _SCSIM_struct__2665_Utils;
extern TypeUtils _SCSIM_struct__2671_Utils;
extern TypeUtils _SCSIM_struct__2678_Utils;
extern TypeUtils _SCSIM_struct__2688_Utils;
extern TypeUtils _SCSIM_struct__2693_Utils;
extern TypeUtils _SCSIM_struct__2706_Utils;
extern TypeUtils _SCSIM_struct__2714_Utils;
extern TypeUtils _SCSIM_struct__2723_Utils;
extern TypeUtils _SCSIM_struct__2741_Utils;
extern TypeUtils _SCSIM_struct__2750_Utils;
extern TypeUtils _SCSIM_array__2758_Utils;
extern TypeUtils _SCSIM_Q_UPDOWN_Utils;
extern TypeUtils _SCSIM_M_VERSION_Utils;
extern TypeUtils _SCSIM_Q_MEDIA_Utils;
extern TypeUtils _SCSIM_N_PIG_Utils;
extern TypeUtils _SCSIM_N_TOTAL_Utils;
extern TypeUtils _SCSIM_M_DUP_Utils;
extern TypeUtils _SCSIM_M_MCOUNT_Utils;
extern TypeUtils _SCSIM_NID_C_Utils;
extern TypeUtils _SCSIM_NID_BG_Utils;
extern TypeUtils _SCSIM_Q_LINK_Utils;
extern TypeUtils _SCSIM_NID_MESSAGE_Utils;
extern TypeUtils _SCSIM_T_TRAIN_Utils;
extern TypeUtils _SCSIM_M_ACK_Utils;
extern TypeUtils _SCSIM_NID_LRBG_Utils;
extern TypeUtils _SCSIM_NID_EM_Utils;
extern TypeUtils _SCSIM_Q_SCALE_Utils;
extern TypeUtils _SCSIM_D_SR_Utils;
extern TypeUtils _SCSIM_D_REF_Utils;
extern TypeUtils _SCSIM_Q_DIR_Utils;
extern TypeUtils _SCSIM_D_EMERGENCYSTOP_Utils;
extern TypeUtils _SCSIM_NID_PACKET_Utils;
extern TypeUtils _SCSIM_Q_NVLOCACC_Utils;
extern TypeUtils _SCSIM_Q_DIRLRBG_Utils;
extern TypeUtils _SCSIM_Q_DIRTRAIN_Utils;
extern TypeUtils _SCSIM_ReceivedBG_CheckBGInputChannel_Pkg_Utils;
extern TypeUtils _SCSIM_Completeness_CheckBGInputChannel_Pkg_Utils;
extern TypeUtils _SCSIM_Consistency_CheckBGInputChannel_Pkg_Utils;
extern TypeUtils _SCSIM_ReceivedBGs_CheckBGInputChannel_Pkg_Utils;
extern TypeUtils _SCSIM_API_TrackSideInput_T_API_Msg_Pkg_Utils;
extern TypeUtils _SCSIM_API_TelegramHeader_T_API_Msg_Pkg_Utils;
extern TypeUtils _SCSIM_API_RadioMsgHeader_T_API_Msg_Pkg_Utils;
extern TypeUtils _SCSIM_T_internal_Type_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_odometry_T_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_OdometryLocations_T_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_L_internal_Type_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_OdometrySpeeds_T_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_V_internal_Type_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_A_internal_Type_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_odoMotionState_T_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_odoMotionDirection_T_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_LocWithInAcc_T_Obu_BasicTypes_Pkg_Utils;
extern TypeUtils _SCSIM_MsgSource_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_RadioMetadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPackets_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Metadata_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_MetadataElement_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_CompressedPacketData_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_ReceivedMessage_T_Common_Types_Pkg_Utils;
extern TypeUtils _SCSIM_TelegramHeader_T_BG_Types_Pkg_Utils;
extern TypeUtils _SCSIM_centerOfBalisePosition_T_BG_Types_Pkg_Utils;
extern TypeUtils _SCSIM_BG_Header_T_BG_Types_Pkg_Utils;
extern TypeUtils _SCSIM_Radio_TrackTrain_Header_T_Radio_Types_Pkg_Utils;

/****************************************************************
 ** kcg_real
 ****************************************************************/
extern const char * kcg_real_to_string(const void* pValue);
extern int check_kcg_real_string(const char* strValue);
extern int string_to_kcg_real(const char* strValue, void* pValue);
int is_kcg_real_allow_double_convertion();
extern int kcg_real_to_double(double * nValue, const void*);
extern const char * get_kcg_real_signature();
extern int compare_kcg_real_type(int*, const char*, const void*);
#define kcg_real_filter_size 0
#define get_kcg_real_filter_utils 0
#define kcg_real_filter_values 0
/****************************************************************
 ** kcg_bool
 ****************************************************************/
extern const char * kcg_bool_to_string(const void* pValue);
extern int check_kcg_bool_string(const char* strValue);
extern int string_to_kcg_bool(const char* strValue, void* pValue);
int is_kcg_bool_allow_double_convertion();
extern int kcg_bool_to_double(double * nValue, const void*);
extern const char * get_kcg_bool_signature();
extern int compare_kcg_bool_type(int*, const char*, const void*);
#define kcg_bool_filter_size 0
#define get_kcg_bool_filter_utils 0
#define kcg_bool_filter_values 0
/****************************************************************
 ** kcg_char
 ****************************************************************/
extern const char * kcg_char_to_string(const void* pValue);
extern int check_kcg_char_string(const char* strValue);
extern int string_to_kcg_char(const char* strValue, void* pValue);
int is_kcg_char_allow_double_convertion();
extern int kcg_char_to_double(double * nValue, const void*);
extern const char * get_kcg_char_signature();
extern int compare_kcg_char_type(int*, const char*, const void*);
#define kcg_char_filter_size 0
#define get_kcg_char_filter_utils 0
#define kcg_char_filter_values 0
/****************************************************************
 ** kcg_int
 ****************************************************************/
extern const char * kcg_int_to_string(const void* pValue);
extern int check_kcg_int_string(const char* strValue);
extern int string_to_kcg_int(const char* strValue, void* pValue);
int is_kcg_int_allow_double_convertion();
extern int kcg_int_to_double(double * nValue, const void*);
extern const char * get_kcg_int_signature();
extern int compare_kcg_int_type(int*, const char*, const void*);
#define kcg_int_filter_size 0
#define get_kcg_int_filter_utils 0
#define kcg_int_filter_values 0
/****************************************************************
 ** struct__2603
 ****************************************************************/
extern const char * struct__2603_to_string(const void* pValue);
extern int check_struct__2603_string(const char* strValue);
extern int string_to_struct__2603(const char* strValue, void* pValue);
int is_struct__2603_allow_double_convertion();
extern const char * get_struct__2603_signature();
extern int compare_struct__2603_type(int*, const char*, const void*);
#define struct__2603_filter_size 15
extern FilterUtils get_struct__2603_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2603_filter_values[15];
/****************************************************************
 ** array_int_500
 ****************************************************************/
extern const char * array_int_500_to_string(const void* pValue);
extern int check_array_int_500_string(const char* strValue);
extern int string_to_array_int_500(const char* strValue, void* pValue);
int is_array_int_500_allow_double_convertion();
extern const char * get_array_int_500_signature();
extern int compare_array_int_500_type(int*, const char*, const void*);
#define array_int_500_filter_size 500
extern FilterUtils get_array_int_500_filter_utils(const char* strFilter, void* pValue);
#define array_int_500_filter_values 0
/****************************************************************
 ** struct__2624
 ****************************************************************/
extern const char * struct__2624_to_string(const void* pValue);
extern int check_struct__2624_string(const char* strValue);
extern int string_to_struct__2624(const char* strValue, void* pValue);
int is_struct__2624_allow_double_convertion();
extern const char * get_struct__2624_signature();
extern int compare_struct__2624_type(int*, const char*, const void*);
#define struct__2624_filter_size 5
extern FilterUtils get_struct__2624_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2624_filter_values[5];
/****************************************************************
 ** array__2632
 ****************************************************************/
extern const char * array__2632_to_string(const void* pValue);
extern int check_array__2632_string(const char* strValue);
extern int string_to_array__2632(const char* strValue, void* pValue);
int is_array__2632_allow_double_convertion();
extern const char * get_array__2632_signature();
extern int compare_array__2632_type(int*, const char*, const void*);
#define array__2632_filter_size 30
extern FilterUtils get_array__2632_filter_utils(const char* strFilter, void* pValue);
#define array__2632_filter_values 0
/****************************************************************
 ** struct__2635
 ****************************************************************/
extern const char * struct__2635_to_string(const void* pValue);
extern int check_struct__2635_string(const char* strValue);
extern int string_to_struct__2635(const char* strValue, void* pValue);
int is_struct__2635_allow_double_convertion();
extern const char * get_struct__2635_signature();
extern int compare_struct__2635_type(int*, const char*, const void*);
#define struct__2635_filter_size 2
extern FilterUtils get_struct__2635_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2635_filter_values[2];
/****************************************************************
 ** struct__2640
 ****************************************************************/
extern const char * struct__2640_to_string(const void* pValue);
extern int check_struct__2640_string(const char* strValue);
extern int string_to_struct__2640(const char* strValue, void* pValue);
int is_struct__2640_allow_double_convertion();
extern const char * get_struct__2640_signature();
extern int compare_struct__2640_type(int*, const char*, const void*);
#define struct__2640_filter_size 9
extern FilterUtils get_struct__2640_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2640_filter_values[9];
/****************************************************************
 ** struct__2652
 ****************************************************************/
extern const char * struct__2652_to_string(const void* pValue);
extern int check_struct__2652_string(const char* strValue);
extern int string_to_struct__2652(const char* strValue, void* pValue);
int is_struct__2652_allow_double_convertion();
extern const char * get_struct__2652_signature();
extern int compare_struct__2652_type(int*, const char*, const void*);
#define struct__2652_filter_size 3
extern FilterUtils get_struct__2652_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2652_filter_values[3];
/****************************************************************
 ** struct__2658
 ****************************************************************/
extern const char * struct__2658_to_string(const void* pValue);
extern int check_struct__2658_string(const char* strValue);
extern int string_to_struct__2658(const char* strValue, void* pValue);
int is_struct__2658_allow_double_convertion();
extern const char * get_struct__2658_signature();
extern int compare_struct__2658_type(int*, const char*, const void*);
#define struct__2658_filter_size 4
extern FilterUtils get_struct__2658_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2658_filter_values[4];
/****************************************************************
 ** struct__2665
 ****************************************************************/
extern const char * struct__2665_to_string(const void* pValue);
extern int check_struct__2665_string(const char* strValue);
extern int string_to_struct__2665(const char* strValue, void* pValue);
int is_struct__2665_allow_double_convertion();
extern const char * get_struct__2665_signature();
extern int compare_struct__2665_type(int*, const char*, const void*);
#define struct__2665_filter_size 3
extern FilterUtils get_struct__2665_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2665_filter_values[3];
/****************************************************************
 ** struct__2671
 ****************************************************************/
extern const char * struct__2671_to_string(const void* pValue);
extern int check_struct__2671_string(const char* strValue);
extern int string_to_struct__2671(const char* strValue, void* pValue);
int is_struct__2671_allow_double_convertion();
extern const char * get_struct__2671_signature();
extern int compare_struct__2671_type(int*, const char*, const void*);
#define struct__2671_filter_size 4
extern FilterUtils get_struct__2671_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2671_filter_values[4];
/****************************************************************
 ** struct__2678
 ****************************************************************/
extern const char * struct__2678_to_string(const void* pValue);
extern int check_struct__2678_string(const char* strValue);
extern int string_to_struct__2678(const char* strValue, void* pValue);
int is_struct__2678_allow_double_convertion();
extern const char * get_struct__2678_signature();
extern int compare_struct__2678_type(int*, const char*, const void*);
#define struct__2678_filter_size 7
extern FilterUtils get_struct__2678_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2678_filter_values[7];
/****************************************************************
 ** struct__2688
 ****************************************************************/
extern const char * struct__2688_to_string(const void* pValue);
extern int check_struct__2688_string(const char* strValue);
extern int string_to_struct__2688(const char* strValue, void* pValue);
int is_struct__2688_allow_double_convertion();
extern const char * get_struct__2688_signature();
extern int compare_struct__2688_type(int*, const char*, const void*);
#define struct__2688_filter_size 2
extern FilterUtils get_struct__2688_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2688_filter_values[2];
/****************************************************************
 ** struct__2693
 ****************************************************************/
extern const char * struct__2693_to_string(const void* pValue);
extern int check_struct__2693_string(const char* strValue);
extern int string_to_struct__2693(const char* strValue, void* pValue);
int is_struct__2693_allow_double_convertion();
extern const char * get_struct__2693_signature();
extern int compare_struct__2693_type(int*, const char*, const void*);
#define struct__2693_filter_size 10
extern FilterUtils get_struct__2693_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2693_filter_values[10];
/****************************************************************
 ** struct__2706
 ****************************************************************/
extern const char * struct__2706_to_string(const void* pValue);
extern int check_struct__2706_string(const char* strValue);
extern int string_to_struct__2706(const char* strValue, void* pValue);
int is_struct__2706_allow_double_convertion();
extern const char * get_struct__2706_signature();
extern int compare_struct__2706_type(int*, const char*, const void*);
#define struct__2706_filter_size 5
extern FilterUtils get_struct__2706_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2706_filter_values[5];
/****************************************************************
 ** struct__2714
 ****************************************************************/
extern const char * struct__2714_to_string(const void* pValue);
extern int check_struct__2714_string(const char* strValue);
extern int string_to_struct__2714(const char* strValue, void* pValue);
int is_struct__2714_allow_double_convertion();
extern const char * get_struct__2714_signature();
extern int compare_struct__2714_type(int*, const char*, const void*);
#define struct__2714_filter_size 6
extern FilterUtils get_struct__2714_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2714_filter_values[6];
/****************************************************************
 ** struct__2723
 ****************************************************************/
extern const char * struct__2723_to_string(const void* pValue);
extern int check_struct__2723_string(const char* strValue);
extern int string_to_struct__2723(const char* strValue, void* pValue);
int is_struct__2723_allow_double_convertion();
extern const char * get_struct__2723_signature();
extern int compare_struct__2723_type(int*, const char*, const void*);
#define struct__2723_filter_size 15
extern FilterUtils get_struct__2723_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2723_filter_values[15];
/****************************************************************
 ** struct__2741
 ****************************************************************/
extern const char * struct__2741_to_string(const void* pValue);
extern int check_struct__2741_string(const char* strValue);
extern int string_to_struct__2741(const char* strValue, void* pValue);
int is_struct__2741_allow_double_convertion();
extern const char * get_struct__2741_signature();
extern int compare_struct__2741_type(int*, const char*, const void*);
#define struct__2741_filter_size 6
extern FilterUtils get_struct__2741_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2741_filter_values[6];
/****************************************************************
 ** struct__2750
 ****************************************************************/
extern const char * struct__2750_to_string(const void* pValue);
extern int check_struct__2750_string(const char* strValue);
extern int string_to_struct__2750(const char* strValue, void* pValue);
int is_struct__2750_allow_double_convertion();
extern const char * get_struct__2750_signature();
extern int compare_struct__2750_type(int*, const char*, const void*);
#define struct__2750_filter_size 5
extern FilterUtils get_struct__2750_filter_utils(const char* strFilter, void* pValue);
extern const char * struct__2750_filter_values[5];
/****************************************************************
 ** array__2758
 ****************************************************************/
extern const char * array__2758_to_string(const void* pValue);
extern int check_array__2758_string(const char* strValue);
extern int string_to_array__2758(const char* strValue, void* pValue);
int is_array__2758_allow_double_convertion();
extern const char * get_array__2758_signature();
extern int compare_array__2758_type(int*, const char*, const void*);
#define array__2758_filter_size 10
extern FilterUtils get_array__2758_filter_utils(const char* strFilter, void* pValue);
#define array__2758_filter_values 0
/****************************************************************
 ** Q_UPDOWN
 ****************************************************************/
extern const char * Q_UPDOWN_to_string(const void* pValue);
extern int check_Q_UPDOWN_string(const char* strValue);
extern int string_to_Q_UPDOWN(const char* strValue, void* pValue);
int is_Q_UPDOWN_allow_double_convertion();
extern int Q_UPDOWN_to_double(double * nValue, const void*);
extern const char * get_Q_UPDOWN_signature();
extern int compare_Q_UPDOWN_type(int*, const char*, const void*);
#define Q_UPDOWN_filter_size 0
#define get_Q_UPDOWN_filter_utils 0
#define Q_UPDOWN_filter_values 0
/****************************************************************
 ** M_VERSION
 ****************************************************************/
extern const char * M_VERSION_to_string(const void* pValue);
extern int check_M_VERSION_string(const char* strValue);
extern int string_to_M_VERSION(const char* strValue, void* pValue);
int is_M_VERSION_allow_double_convertion();
extern int M_VERSION_to_double(double * nValue, const void*);
extern const char * get_M_VERSION_signature();
extern int compare_M_VERSION_type(int*, const char*, const void*);
#define M_VERSION_filter_size 0
#define get_M_VERSION_filter_utils 0
#define M_VERSION_filter_values 0
/****************************************************************
 ** Q_MEDIA
 ****************************************************************/
extern const char * Q_MEDIA_to_string(const void* pValue);
extern int check_Q_MEDIA_string(const char* strValue);
extern int string_to_Q_MEDIA(const char* strValue, void* pValue);
int is_Q_MEDIA_allow_double_convertion();
extern int Q_MEDIA_to_double(double * nValue, const void*);
extern const char * get_Q_MEDIA_signature();
extern int compare_Q_MEDIA_type(int*, const char*, const void*);
#define Q_MEDIA_filter_size 0
#define get_Q_MEDIA_filter_utils 0
#define Q_MEDIA_filter_values 0
/****************************************************************
 ** N_PIG
 ****************************************************************/
extern const char * N_PIG_to_string(const void* pValue);
extern int check_N_PIG_string(const char* strValue);
extern int string_to_N_PIG(const char* strValue, void* pValue);
int is_N_PIG_allow_double_convertion();
extern int N_PIG_to_double(double * nValue, const void*);
extern const char * get_N_PIG_signature();
extern int compare_N_PIG_type(int*, const char*, const void*);
#define N_PIG_filter_size 0
#define get_N_PIG_filter_utils 0
#define N_PIG_filter_values 0
/****************************************************************
 ** N_TOTAL
 ****************************************************************/
extern const char * N_TOTAL_to_string(const void* pValue);
extern int check_N_TOTAL_string(const char* strValue);
extern int string_to_N_TOTAL(const char* strValue, void* pValue);
int is_N_TOTAL_allow_double_convertion();
extern int N_TOTAL_to_double(double * nValue, const void*);
extern const char * get_N_TOTAL_signature();
extern int compare_N_TOTAL_type(int*, const char*, const void*);
#define N_TOTAL_filter_size 0
#define get_N_TOTAL_filter_utils 0
#define N_TOTAL_filter_values 0
/****************************************************************
 ** M_DUP
 ****************************************************************/
extern const char * M_DUP_to_string(const void* pValue);
extern int check_M_DUP_string(const char* strValue);
extern int string_to_M_DUP(const char* strValue, void* pValue);
int is_M_DUP_allow_double_convertion();
extern int M_DUP_to_double(double * nValue, const void*);
extern const char * get_M_DUP_signature();
extern int compare_M_DUP_type(int*, const char*, const void*);
#define M_DUP_filter_size 0
#define get_M_DUP_filter_utils 0
#define M_DUP_filter_values 0
/****************************************************************
 ** M_MCOUNT
 ****************************************************************/
extern const char * M_MCOUNT_to_string(const void* pValue);
extern int check_M_MCOUNT_string(const char* strValue);
extern int string_to_M_MCOUNT(const char* strValue, void* pValue);
int is_M_MCOUNT_allow_double_convertion();
extern int M_MCOUNT_to_double(double * nValue, const void*);
#define get_M_MCOUNT_signature get_kcg_int_signature
#define compare_M_MCOUNT_type compare_kcg_int_type
#define M_MCOUNT_filter_size kcg_int_filter_size
#define get_M_MCOUNT_filter_utils get_kcg_int_filter_utils
#define M_MCOUNT_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_C
 ****************************************************************/
extern const char * NID_C_to_string(const void* pValue);
extern int check_NID_C_string(const char* strValue);
extern int string_to_NID_C(const char* strValue, void* pValue);
int is_NID_C_allow_double_convertion();
extern int NID_C_to_double(double * nValue, const void*);
#define get_NID_C_signature get_kcg_int_signature
#define compare_NID_C_type compare_kcg_int_type
#define NID_C_filter_size kcg_int_filter_size
#define get_NID_C_filter_utils get_kcg_int_filter_utils
#define NID_C_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_BG
 ****************************************************************/
extern const char * NID_BG_to_string(const void* pValue);
extern int check_NID_BG_string(const char* strValue);
extern int string_to_NID_BG(const char* strValue, void* pValue);
int is_NID_BG_allow_double_convertion();
extern int NID_BG_to_double(double * nValue, const void*);
#define get_NID_BG_signature get_kcg_int_signature
#define compare_NID_BG_type compare_kcg_int_type
#define NID_BG_filter_size kcg_int_filter_size
#define get_NID_BG_filter_utils get_kcg_int_filter_utils
#define NID_BG_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_LINK
 ****************************************************************/
extern const char * Q_LINK_to_string(const void* pValue);
extern int check_Q_LINK_string(const char* strValue);
extern int string_to_Q_LINK(const char* strValue, void* pValue);
int is_Q_LINK_allow_double_convertion();
extern int Q_LINK_to_double(double * nValue, const void*);
extern const char * get_Q_LINK_signature();
extern int compare_Q_LINK_type(int*, const char*, const void*);
#define Q_LINK_filter_size 0
#define get_Q_LINK_filter_utils 0
#define Q_LINK_filter_values 0
/****************************************************************
 ** NID_MESSAGE
 ****************************************************************/
extern const char * NID_MESSAGE_to_string(const void* pValue);
extern int check_NID_MESSAGE_string(const char* strValue);
extern int string_to_NID_MESSAGE(const char* strValue, void* pValue);
int is_NID_MESSAGE_allow_double_convertion();
extern int NID_MESSAGE_to_double(double * nValue, const void*);
#define get_NID_MESSAGE_signature get_kcg_int_signature
#define compare_NID_MESSAGE_type compare_kcg_int_type
#define NID_MESSAGE_filter_size kcg_int_filter_size
#define get_NID_MESSAGE_filter_utils get_kcg_int_filter_utils
#define NID_MESSAGE_filter_values kcg_int_filter_values
/****************************************************************
 ** T_TRAIN
 ****************************************************************/
extern const char * T_TRAIN_to_string(const void* pValue);
extern int check_T_TRAIN_string(const char* strValue);
extern int string_to_T_TRAIN(const char* strValue, void* pValue);
int is_T_TRAIN_allow_double_convertion();
extern int T_TRAIN_to_double(double * nValue, const void*);
#define get_T_TRAIN_signature get_kcg_real_signature
#define compare_T_TRAIN_type compare_kcg_real_type
#define T_TRAIN_filter_size kcg_real_filter_size
#define get_T_TRAIN_filter_utils get_kcg_real_filter_utils
#define T_TRAIN_filter_values kcg_real_filter_values
/****************************************************************
 ** M_ACK
 ****************************************************************/
extern const char * M_ACK_to_string(const void* pValue);
extern int check_M_ACK_string(const char* strValue);
extern int string_to_M_ACK(const char* strValue, void* pValue);
int is_M_ACK_allow_double_convertion();
extern int M_ACK_to_double(double * nValue, const void*);
extern const char * get_M_ACK_signature();
extern int compare_M_ACK_type(int*, const char*, const void*);
#define M_ACK_filter_size 0
#define get_M_ACK_filter_utils 0
#define M_ACK_filter_values 0
/****************************************************************
 ** NID_LRBG
 ****************************************************************/
extern const char * NID_LRBG_to_string(const void* pValue);
extern int check_NID_LRBG_string(const char* strValue);
extern int string_to_NID_LRBG(const char* strValue, void* pValue);
int is_NID_LRBG_allow_double_convertion();
extern int NID_LRBG_to_double(double * nValue, const void*);
#define get_NID_LRBG_signature get_kcg_int_signature
#define compare_NID_LRBG_type compare_kcg_int_type
#define NID_LRBG_filter_size kcg_int_filter_size
#define get_NID_LRBG_filter_utils get_kcg_int_filter_utils
#define NID_LRBG_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_EM
 ****************************************************************/
extern const char * NID_EM_to_string(const void* pValue);
extern int check_NID_EM_string(const char* strValue);
extern int string_to_NID_EM(const char* strValue, void* pValue);
int is_NID_EM_allow_double_convertion();
extern int NID_EM_to_double(double * nValue, const void*);
#define get_NID_EM_signature get_kcg_int_signature
#define compare_NID_EM_type compare_kcg_int_type
#define NID_EM_filter_size kcg_int_filter_size
#define get_NID_EM_filter_utils get_kcg_int_filter_utils
#define NID_EM_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_SCALE
 ****************************************************************/
extern const char * Q_SCALE_to_string(const void* pValue);
extern int check_Q_SCALE_string(const char* strValue);
extern int string_to_Q_SCALE(const char* strValue, void* pValue);
int is_Q_SCALE_allow_double_convertion();
extern int Q_SCALE_to_double(double * nValue, const void*);
extern const char * get_Q_SCALE_signature();
extern int compare_Q_SCALE_type(int*, const char*, const void*);
#define Q_SCALE_filter_size 0
#define get_Q_SCALE_filter_utils 0
#define Q_SCALE_filter_values 0
/****************************************************************
 ** D_SR
 ****************************************************************/
extern const char * D_SR_to_string(const void* pValue);
extern int check_D_SR_string(const char* strValue);
extern int string_to_D_SR(const char* strValue, void* pValue);
int is_D_SR_allow_double_convertion();
extern int D_SR_to_double(double * nValue, const void*);
#define get_D_SR_signature get_kcg_int_signature
#define compare_D_SR_type compare_kcg_int_type
#define D_SR_filter_size kcg_int_filter_size
#define get_D_SR_filter_utils get_kcg_int_filter_utils
#define D_SR_filter_values kcg_int_filter_values
/****************************************************************
 ** D_REF
 ****************************************************************/
extern const char * D_REF_to_string(const void* pValue);
extern int check_D_REF_string(const char* strValue);
extern int string_to_D_REF(const char* strValue, void* pValue);
int is_D_REF_allow_double_convertion();
extern int D_REF_to_double(double * nValue, const void*);
#define get_D_REF_signature get_kcg_int_signature
#define compare_D_REF_type compare_kcg_int_type
#define D_REF_filter_size kcg_int_filter_size
#define get_D_REF_filter_utils get_kcg_int_filter_utils
#define D_REF_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_DIR
 ****************************************************************/
extern const char * Q_DIR_to_string(const void* pValue);
extern int check_Q_DIR_string(const char* strValue);
extern int string_to_Q_DIR(const char* strValue, void* pValue);
int is_Q_DIR_allow_double_convertion();
extern int Q_DIR_to_double(double * nValue, const void*);
extern const char * get_Q_DIR_signature();
extern int compare_Q_DIR_type(int*, const char*, const void*);
#define Q_DIR_filter_size 0
#define get_Q_DIR_filter_utils 0
#define Q_DIR_filter_values 0
/****************************************************************
 ** D_EMERGENCYSTOP
 ****************************************************************/
extern const char * D_EMERGENCYSTOP_to_string(const void* pValue);
extern int check_D_EMERGENCYSTOP_string(const char* strValue);
extern int string_to_D_EMERGENCYSTOP(const char* strValue, void* pValue);
int is_D_EMERGENCYSTOP_allow_double_convertion();
extern int D_EMERGENCYSTOP_to_double(double * nValue, const void*);
#define get_D_EMERGENCYSTOP_signature get_kcg_int_signature
#define compare_D_EMERGENCYSTOP_type compare_kcg_int_type
#define D_EMERGENCYSTOP_filter_size kcg_int_filter_size
#define get_D_EMERGENCYSTOP_filter_utils get_kcg_int_filter_utils
#define D_EMERGENCYSTOP_filter_values kcg_int_filter_values
/****************************************************************
 ** NID_PACKET
 ****************************************************************/
extern const char * NID_PACKET_to_string(const void* pValue);
extern int check_NID_PACKET_string(const char* strValue);
extern int string_to_NID_PACKET(const char* strValue, void* pValue);
int is_NID_PACKET_allow_double_convertion();
extern int NID_PACKET_to_double(double * nValue, const void*);
#define get_NID_PACKET_signature get_kcg_int_signature
#define compare_NID_PACKET_type compare_kcg_int_type
#define NID_PACKET_filter_size kcg_int_filter_size
#define get_NID_PACKET_filter_utils get_kcg_int_filter_utils
#define NID_PACKET_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_NVLOCACC
 ****************************************************************/
extern const char * Q_NVLOCACC_to_string(const void* pValue);
extern int check_Q_NVLOCACC_string(const char* strValue);
extern int string_to_Q_NVLOCACC(const char* strValue, void* pValue);
int is_Q_NVLOCACC_allow_double_convertion();
extern int Q_NVLOCACC_to_double(double * nValue, const void*);
#define get_Q_NVLOCACC_signature get_kcg_int_signature
#define compare_Q_NVLOCACC_type compare_kcg_int_type
#define Q_NVLOCACC_filter_size kcg_int_filter_size
#define get_Q_NVLOCACC_filter_utils get_kcg_int_filter_utils
#define Q_NVLOCACC_filter_values kcg_int_filter_values
/****************************************************************
 ** Q_DIRLRBG
 ****************************************************************/
extern const char * Q_DIRLRBG_to_string(const void* pValue);
extern int check_Q_DIRLRBG_string(const char* strValue);
extern int string_to_Q_DIRLRBG(const char* strValue, void* pValue);
int is_Q_DIRLRBG_allow_double_convertion();
extern int Q_DIRLRBG_to_double(double * nValue, const void*);
extern const char * get_Q_DIRLRBG_signature();
extern int compare_Q_DIRLRBG_type(int*, const char*, const void*);
#define Q_DIRLRBG_filter_size 0
#define get_Q_DIRLRBG_filter_utils 0
#define Q_DIRLRBG_filter_values 0
/****************************************************************
 ** Q_DIRTRAIN
 ****************************************************************/
extern const char * Q_DIRTRAIN_to_string(const void* pValue);
extern int check_Q_DIRTRAIN_string(const char* strValue);
extern int string_to_Q_DIRTRAIN(const char* strValue, void* pValue);
int is_Q_DIRTRAIN_allow_double_convertion();
extern int Q_DIRTRAIN_to_double(double * nValue, const void*);
extern const char * get_Q_DIRTRAIN_signature();
extern int compare_Q_DIRTRAIN_type(int*, const char*, const void*);
#define Q_DIRTRAIN_filter_size 0
#define get_Q_DIRTRAIN_filter_utils 0
#define Q_DIRTRAIN_filter_values 0
/****************************************************************
 ** ReceivedBG_CheckBGInputChannel_Pkg
 ****************************************************************/
extern const char * ReceivedBG_CheckBGInputChannel_Pkg_to_string(const void* pValue);
extern int check_ReceivedBG_CheckBGInputChannel_Pkg_string(const char* strValue);
extern int string_to_ReceivedBG_CheckBGInputChannel_Pkg(const char* strValue, void* pValue);
int is_ReceivedBG_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int ReceivedBG_CheckBGInputChannel_Pkg_to_double(double * nValue, const void*);
#define get_ReceivedBG_CheckBGInputChannel_Pkg_signature get_struct__2750_signature
#define compare_ReceivedBG_CheckBGInputChannel_Pkg_type compare_struct__2750_type
#define ReceivedBG_CheckBGInputChannel_Pkg_filter_size struct__2750_filter_size
#define get_ReceivedBG_CheckBGInputChannel_Pkg_filter_utils get_struct__2750_filter_utils
#define ReceivedBG_CheckBGInputChannel_Pkg_filter_values struct__2750_filter_values
/****************************************************************
 ** Completeness_CheckBGInputChannel_Pkg
 ****************************************************************/
extern const char * Completeness_CheckBGInputChannel_Pkg_to_string(const void* pValue);
extern int check_Completeness_CheckBGInputChannel_Pkg_string(const char* strValue);
extern int string_to_Completeness_CheckBGInputChannel_Pkg(const char* strValue, void* pValue);
int is_Completeness_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int Completeness_CheckBGInputChannel_Pkg_to_double(double * nValue, const void*);
#define get_Completeness_CheckBGInputChannel_Pkg_signature get_kcg_bool_signature
#define compare_Completeness_CheckBGInputChannel_Pkg_type compare_kcg_bool_type
#define Completeness_CheckBGInputChannel_Pkg_filter_size kcg_bool_filter_size
#define get_Completeness_CheckBGInputChannel_Pkg_filter_utils get_kcg_bool_filter_utils
#define Completeness_CheckBGInputChannel_Pkg_filter_values kcg_bool_filter_values
/****************************************************************
 ** Consistency_CheckBGInputChannel_Pkg
 ****************************************************************/
extern const char * Consistency_CheckBGInputChannel_Pkg_to_string(const void* pValue);
extern int check_Consistency_CheckBGInputChannel_Pkg_string(const char* strValue);
extern int string_to_Consistency_CheckBGInputChannel_Pkg(const char* strValue, void* pValue);
int is_Consistency_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int Consistency_CheckBGInputChannel_Pkg_to_double(double * nValue, const void*);
#define get_Consistency_CheckBGInputChannel_Pkg_signature get_kcg_bool_signature
#define compare_Consistency_CheckBGInputChannel_Pkg_type compare_kcg_bool_type
#define Consistency_CheckBGInputChannel_Pkg_filter_size kcg_bool_filter_size
#define get_Consistency_CheckBGInputChannel_Pkg_filter_utils get_kcg_bool_filter_utils
#define Consistency_CheckBGInputChannel_Pkg_filter_values kcg_bool_filter_values
/****************************************************************
 ** ReceivedBGs_CheckBGInputChannel_Pkg
 ****************************************************************/
extern const char * ReceivedBGs_CheckBGInputChannel_Pkg_to_string(const void* pValue);
extern int check_ReceivedBGs_CheckBGInputChannel_Pkg_string(const char* strValue);
extern int string_to_ReceivedBGs_CheckBGInputChannel_Pkg(const char* strValue, void* pValue);
int is_ReceivedBGs_CheckBGInputChannel_Pkg_allow_double_convertion();
extern int ReceivedBGs_CheckBGInputChannel_Pkg_to_double(double * nValue, const void*);
#define get_ReceivedBGs_CheckBGInputChannel_Pkg_signature get_array__2758_signature
#define compare_ReceivedBGs_CheckBGInputChannel_Pkg_type compare_array__2758_type
#define ReceivedBGs_CheckBGInputChannel_Pkg_filter_size array__2758_filter_size
#define get_ReceivedBGs_CheckBGInputChannel_Pkg_filter_utils get_array__2758_filter_utils
#define ReceivedBGs_CheckBGInputChannel_Pkg_filter_values array__2758_filter_values
/****************************************************************
 ** API_TrackSideInput_T_API_Msg_Pkg
 ****************************************************************/
extern const char * API_TrackSideInput_T_API_Msg_Pkg_to_string(const void* pValue);
extern int check_API_TrackSideInput_T_API_Msg_Pkg_string(const char* strValue);
extern int string_to_API_TrackSideInput_T_API_Msg_Pkg(const char* strValue, void* pValue);
int is_API_TrackSideInput_T_API_Msg_Pkg_allow_double_convertion();
extern int API_TrackSideInput_T_API_Msg_Pkg_to_double(double * nValue, const void*);
#define get_API_TrackSideInput_T_API_Msg_Pkg_signature get_struct__2714_signature
#define compare_API_TrackSideInput_T_API_Msg_Pkg_type compare_struct__2714_type
#define API_TrackSideInput_T_API_Msg_Pkg_filter_size struct__2714_filter_size
#define get_API_TrackSideInput_T_API_Msg_Pkg_filter_utils get_struct__2714_filter_utils
#define API_TrackSideInput_T_API_Msg_Pkg_filter_values struct__2714_filter_values
/****************************************************************
 ** API_TelegramHeader_T_API_Msg_Pkg
 ****************************************************************/
extern const char * API_TelegramHeader_T_API_Msg_Pkg_to_string(const void* pValue);
extern int check_API_TelegramHeader_T_API_Msg_Pkg_string(const char* strValue);
extern int string_to_API_TelegramHeader_T_API_Msg_Pkg(const char* strValue, void* pValue);
int is_API_TelegramHeader_T_API_Msg_Pkg_allow_double_convertion();
extern int API_TelegramHeader_T_API_Msg_Pkg_to_double(double * nValue, const void*);
#define get_API_TelegramHeader_T_API_Msg_Pkg_signature get_struct__2706_signature
#define compare_API_TelegramHeader_T_API_Msg_Pkg_type compare_struct__2706_type
#define API_TelegramHeader_T_API_Msg_Pkg_filter_size struct__2706_filter_size
#define get_API_TelegramHeader_T_API_Msg_Pkg_filter_utils get_struct__2706_filter_utils
#define API_TelegramHeader_T_API_Msg_Pkg_filter_values struct__2706_filter_values
/****************************************************************
 ** API_RadioMsgHeader_T_API_Msg_Pkg
 ****************************************************************/
extern const char * API_RadioMsgHeader_T_API_Msg_Pkg_to_string(const void* pValue);
extern int check_API_RadioMsgHeader_T_API_Msg_Pkg_string(const char* strValue);
extern int string_to_API_RadioMsgHeader_T_API_Msg_Pkg(const char* strValue, void* pValue);
int is_API_RadioMsgHeader_T_API_Msg_Pkg_allow_double_convertion();
extern int API_RadioMsgHeader_T_API_Msg_Pkg_to_double(double * nValue, const void*);
#define get_API_RadioMsgHeader_T_API_Msg_Pkg_signature get_struct__2671_signature
#define compare_API_RadioMsgHeader_T_API_Msg_Pkg_type compare_struct__2671_type
#define API_RadioMsgHeader_T_API_Msg_Pkg_filter_size struct__2671_filter_size
#define get_API_RadioMsgHeader_T_API_Msg_Pkg_filter_utils get_struct__2671_filter_utils
#define API_RadioMsgHeader_T_API_Msg_Pkg_filter_values struct__2671_filter_values
/****************************************************************
 ** T_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * T_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_T_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_T_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_T_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int T_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_T_internal_Type_Obu_BasicTypes_Pkg_signature get_kcg_int_signature
#define compare_T_internal_Type_Obu_BasicTypes_Pkg_type compare_kcg_int_type
#define T_internal_Type_Obu_BasicTypes_Pkg_filter_size kcg_int_filter_size
#define get_T_internal_Type_Obu_BasicTypes_Pkg_filter_utils get_kcg_int_filter_utils
#define T_internal_Type_Obu_BasicTypes_Pkg_filter_values kcg_int_filter_values
/****************************************************************
 ** odometry_T_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * odometry_T_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_odometry_T_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_odometry_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_odometry_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int odometry_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_odometry_T_Obu_BasicTypes_Pkg_signature get_struct__2678_signature
#define compare_odometry_T_Obu_BasicTypes_Pkg_type compare_struct__2678_type
#define odometry_T_Obu_BasicTypes_Pkg_filter_size struct__2678_filter_size
#define get_odometry_T_Obu_BasicTypes_Pkg_filter_utils get_struct__2678_filter_utils
#define odometry_T_Obu_BasicTypes_Pkg_filter_values struct__2678_filter_values
/****************************************************************
 ** OdometryLocations_T_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * OdometryLocations_T_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_OdometryLocations_T_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_OdometryLocations_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_OdometryLocations_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int OdometryLocations_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_OdometryLocations_T_Obu_BasicTypes_Pkg_signature get_struct__2665_signature
#define compare_OdometryLocations_T_Obu_BasicTypes_Pkg_type compare_struct__2665_type
#define OdometryLocations_T_Obu_BasicTypes_Pkg_filter_size struct__2665_filter_size
#define get_OdometryLocations_T_Obu_BasicTypes_Pkg_filter_utils get_struct__2665_filter_utils
#define OdometryLocations_T_Obu_BasicTypes_Pkg_filter_values struct__2665_filter_values
/****************************************************************
 ** L_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * L_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_L_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_L_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_L_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int L_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_L_internal_Type_Obu_BasicTypes_Pkg_signature get_kcg_int_signature
#define compare_L_internal_Type_Obu_BasicTypes_Pkg_type compare_kcg_int_type
#define L_internal_Type_Obu_BasicTypes_Pkg_filter_size kcg_int_filter_size
#define get_L_internal_Type_Obu_BasicTypes_Pkg_filter_utils get_kcg_int_filter_utils
#define L_internal_Type_Obu_BasicTypes_Pkg_filter_values kcg_int_filter_values
/****************************************************************
 ** OdometrySpeeds_T_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_OdometrySpeeds_T_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_OdometrySpeeds_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_OdometrySpeeds_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int OdometrySpeeds_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_signature get_struct__2658_signature
#define compare_OdometrySpeeds_T_Obu_BasicTypes_Pkg_type compare_struct__2658_type
#define OdometrySpeeds_T_Obu_BasicTypes_Pkg_filter_size struct__2658_filter_size
#define get_OdometrySpeeds_T_Obu_BasicTypes_Pkg_filter_utils get_struct__2658_filter_utils
#define OdometrySpeeds_T_Obu_BasicTypes_Pkg_filter_values struct__2658_filter_values
/****************************************************************
 ** V_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * V_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_V_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_V_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_V_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int V_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_V_internal_Type_Obu_BasicTypes_Pkg_signature get_kcg_int_signature
#define compare_V_internal_Type_Obu_BasicTypes_Pkg_type compare_kcg_int_type
#define V_internal_Type_Obu_BasicTypes_Pkg_filter_size kcg_int_filter_size
#define get_V_internal_Type_Obu_BasicTypes_Pkg_filter_utils get_kcg_int_filter_utils
#define V_internal_Type_Obu_BasicTypes_Pkg_filter_values kcg_int_filter_values
/****************************************************************
 ** A_internal_Type_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * A_internal_Type_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_A_internal_Type_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_A_internal_Type_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_A_internal_Type_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int A_internal_Type_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_A_internal_Type_Obu_BasicTypes_Pkg_signature get_kcg_int_signature
#define compare_A_internal_Type_Obu_BasicTypes_Pkg_type compare_kcg_int_type
#define A_internal_Type_Obu_BasicTypes_Pkg_filter_size kcg_int_filter_size
#define get_A_internal_Type_Obu_BasicTypes_Pkg_filter_utils get_kcg_int_filter_utils
#define A_internal_Type_Obu_BasicTypes_Pkg_filter_values kcg_int_filter_values
/****************************************************************
 ** odoMotionState_T_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * odoMotionState_T_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_odoMotionState_T_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_odoMotionState_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_odoMotionState_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int odoMotionState_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
extern const char * get_odoMotionState_T_Obu_BasicTypes_Pkg_signature();
extern int compare_odoMotionState_T_Obu_BasicTypes_Pkg_type(int*, const char*, const void*);
#define odoMotionState_T_Obu_BasicTypes_Pkg_filter_size 0
#define get_odoMotionState_T_Obu_BasicTypes_Pkg_filter_utils 0
#define odoMotionState_T_Obu_BasicTypes_Pkg_filter_values 0
/****************************************************************
 ** odoMotionDirection_T_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * odoMotionDirection_T_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_odoMotionDirection_T_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_odoMotionDirection_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_odoMotionDirection_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int odoMotionDirection_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
extern const char * get_odoMotionDirection_T_Obu_BasicTypes_Pkg_signature();
extern int compare_odoMotionDirection_T_Obu_BasicTypes_Pkg_type(int*, const char*, const void*);
#define odoMotionDirection_T_Obu_BasicTypes_Pkg_filter_size 0
#define get_odoMotionDirection_T_Obu_BasicTypes_Pkg_filter_utils 0
#define odoMotionDirection_T_Obu_BasicTypes_Pkg_filter_values 0
/****************************************************************
 ** LocWithInAcc_T_Obu_BasicTypes_Pkg
 ****************************************************************/
extern const char * LocWithInAcc_T_Obu_BasicTypes_Pkg_to_string(const void* pValue);
extern int check_LocWithInAcc_T_Obu_BasicTypes_Pkg_string(const char* strValue);
extern int string_to_LocWithInAcc_T_Obu_BasicTypes_Pkg(const char* strValue, void* pValue);
int is_LocWithInAcc_T_Obu_BasicTypes_Pkg_allow_double_convertion();
extern int LocWithInAcc_T_Obu_BasicTypes_Pkg_to_double(double * nValue, const void*);
#define get_LocWithInAcc_T_Obu_BasicTypes_Pkg_signature get_struct__2652_signature
#define compare_LocWithInAcc_T_Obu_BasicTypes_Pkg_type compare_struct__2652_type
#define LocWithInAcc_T_Obu_BasicTypes_Pkg_filter_size struct__2652_filter_size
#define get_LocWithInAcc_T_Obu_BasicTypes_Pkg_filter_utils get_struct__2652_filter_utils
#define LocWithInAcc_T_Obu_BasicTypes_Pkg_filter_values struct__2652_filter_values
/****************************************************************
 ** MsgSource_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MsgSource_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MsgSource_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MsgSource_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MsgSource_T_Common_Types_Pkg_allow_double_convertion();
extern int MsgSource_T_Common_Types_Pkg_to_double(double * nValue, const void*);
extern const char * get_MsgSource_T_Common_Types_Pkg_signature();
extern int compare_MsgSource_T_Common_Types_Pkg_type(int*, const char*, const void*);
#define MsgSource_T_Common_Types_Pkg_filter_size 0
#define get_MsgSource_T_Common_Types_Pkg_filter_utils 0
#define MsgSource_T_Common_Types_Pkg_filter_values 0
/****************************************************************
 ** RadioMetadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * RadioMetadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_RadioMetadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_RadioMetadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_RadioMetadata_T_Common_Types_Pkg_allow_double_convertion();
extern int RadioMetadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_RadioMetadata_T_Common_Types_Pkg_signature get_struct__2640_signature
#define compare_RadioMetadata_T_Common_Types_Pkg_type compare_struct__2640_type
#define RadioMetadata_T_Common_Types_Pkg_filter_size struct__2640_filter_size
#define get_RadioMetadata_T_Common_Types_Pkg_filter_utils get_struct__2640_filter_utils
#define RadioMetadata_T_Common_Types_Pkg_filter_values struct__2640_filter_values
/****************************************************************
 ** CompressedPackets_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPackets_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPackets_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPackets_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPackets_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPackets_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPackets_T_Common_Types_Pkg_signature get_struct__2635_signature
#define compare_CompressedPackets_T_Common_Types_Pkg_type compare_struct__2635_type
#define CompressedPackets_T_Common_Types_Pkg_filter_size struct__2635_filter_size
#define get_CompressedPackets_T_Common_Types_Pkg_filter_utils get_struct__2635_filter_utils
#define CompressedPackets_T_Common_Types_Pkg_filter_values struct__2635_filter_values
/****************************************************************
 ** Metadata_T_Common_Types_Pkg
 ****************************************************************/
extern const char * Metadata_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_Metadata_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_Metadata_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_Metadata_T_Common_Types_Pkg_allow_double_convertion();
extern int Metadata_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_Metadata_T_Common_Types_Pkg_signature get_array__2632_signature
#define compare_Metadata_T_Common_Types_Pkg_type compare_array__2632_type
#define Metadata_T_Common_Types_Pkg_filter_size array__2632_filter_size
#define get_Metadata_T_Common_Types_Pkg_filter_utils get_array__2632_filter_utils
#define Metadata_T_Common_Types_Pkg_filter_values array__2632_filter_values
/****************************************************************
 ** MetadataElement_T_Common_Types_Pkg
 ****************************************************************/
extern const char * MetadataElement_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_MetadataElement_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_MetadataElement_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_MetadataElement_T_Common_Types_Pkg_allow_double_convertion();
extern int MetadataElement_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_MetadataElement_T_Common_Types_Pkg_signature get_struct__2624_signature
#define compare_MetadataElement_T_Common_Types_Pkg_type compare_struct__2624_type
#define MetadataElement_T_Common_Types_Pkg_filter_size struct__2624_filter_size
#define get_MetadataElement_T_Common_Types_Pkg_filter_utils get_struct__2624_filter_utils
#define MetadataElement_T_Common_Types_Pkg_filter_values struct__2624_filter_values
/****************************************************************
 ** CompressedPacketData_T_Common_Types_Pkg
 ****************************************************************/
extern const char * CompressedPacketData_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_CompressedPacketData_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_CompressedPacketData_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_CompressedPacketData_T_Common_Types_Pkg_allow_double_convertion();
extern int CompressedPacketData_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_CompressedPacketData_T_Common_Types_Pkg_signature get_array_int_500_signature
#define compare_CompressedPacketData_T_Common_Types_Pkg_type compare_array_int_500_type
#define CompressedPacketData_T_Common_Types_Pkg_filter_size array_int_500_filter_size
#define get_CompressedPacketData_T_Common_Types_Pkg_filter_utils get_array_int_500_filter_utils
#define CompressedPacketData_T_Common_Types_Pkg_filter_values array_int_500_filter_values
/****************************************************************
 ** ReceivedMessage_T_Common_Types_Pkg
 ****************************************************************/
extern const char * ReceivedMessage_T_Common_Types_Pkg_to_string(const void* pValue);
extern int check_ReceivedMessage_T_Common_Types_Pkg_string(const char* strValue);
extern int string_to_ReceivedMessage_T_Common_Types_Pkg(const char* strValue, void* pValue);
int is_ReceivedMessage_T_Common_Types_Pkg_allow_double_convertion();
extern int ReceivedMessage_T_Common_Types_Pkg_to_double(double * nValue, const void*);
#define get_ReceivedMessage_T_Common_Types_Pkg_signature get_struct__2741_signature
#define compare_ReceivedMessage_T_Common_Types_Pkg_type compare_struct__2741_type
#define ReceivedMessage_T_Common_Types_Pkg_filter_size struct__2741_filter_size
#define get_ReceivedMessage_T_Common_Types_Pkg_filter_utils get_struct__2741_filter_utils
#define ReceivedMessage_T_Common_Types_Pkg_filter_values struct__2741_filter_values
/****************************************************************
 ** TelegramHeader_T_BG_Types_Pkg
 ****************************************************************/
extern const char * TelegramHeader_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_TelegramHeader_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_TelegramHeader_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_TelegramHeader_T_BG_Types_Pkg_allow_double_convertion();
extern int TelegramHeader_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_TelegramHeader_T_BG_Types_Pkg_signature get_struct__2693_signature
#define compare_TelegramHeader_T_BG_Types_Pkg_type compare_struct__2693_type
#define TelegramHeader_T_BG_Types_Pkg_filter_size struct__2693_filter_size
#define get_TelegramHeader_T_BG_Types_Pkg_filter_utils get_struct__2693_filter_utils
#define TelegramHeader_T_BG_Types_Pkg_filter_values struct__2693_filter_values
/****************************************************************
 ** centerOfBalisePosition_T_BG_Types_Pkg
 ****************************************************************/
extern const char * centerOfBalisePosition_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_centerOfBalisePosition_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_centerOfBalisePosition_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_centerOfBalisePosition_T_BG_Types_Pkg_allow_double_convertion();
extern int centerOfBalisePosition_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_centerOfBalisePosition_T_BG_Types_Pkg_signature get_struct__2688_signature
#define compare_centerOfBalisePosition_T_BG_Types_Pkg_type compare_struct__2688_type
#define centerOfBalisePosition_T_BG_Types_Pkg_filter_size struct__2688_filter_size
#define get_centerOfBalisePosition_T_BG_Types_Pkg_filter_utils get_struct__2688_filter_utils
#define centerOfBalisePosition_T_BG_Types_Pkg_filter_values struct__2688_filter_values
/****************************************************************
 ** BG_Header_T_BG_Types_Pkg
 ****************************************************************/
extern const char * BG_Header_T_BG_Types_Pkg_to_string(const void* pValue);
extern int check_BG_Header_T_BG_Types_Pkg_string(const char* strValue);
extern int string_to_BG_Header_T_BG_Types_Pkg(const char* strValue, void* pValue);
int is_BG_Header_T_BG_Types_Pkg_allow_double_convertion();
extern int BG_Header_T_BG_Types_Pkg_to_double(double * nValue, const void*);
#define get_BG_Header_T_BG_Types_Pkg_signature get_struct__2723_signature
#define compare_BG_Header_T_BG_Types_Pkg_type compare_struct__2723_type
#define BG_Header_T_BG_Types_Pkg_filter_size struct__2723_filter_size
#define get_BG_Header_T_BG_Types_Pkg_filter_utils get_struct__2723_filter_utils
#define BG_Header_T_BG_Types_Pkg_filter_values struct__2723_filter_values
/****************************************************************
 ** Radio_TrackTrain_Header_T_Radio_Types_Pkg
 ****************************************************************/
extern const char * Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_string(const void* pValue);
extern int check_Radio_TrackTrain_Header_T_Radio_Types_Pkg_string(const char* strValue);
extern int string_to_Radio_TrackTrain_Header_T_Radio_Types_Pkg(const char* strValue, void* pValue);
int is_Radio_TrackTrain_Header_T_Radio_Types_Pkg_allow_double_convertion();
extern int Radio_TrackTrain_Header_T_Radio_Types_Pkg_to_double(double * nValue, const void*);
#define get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_signature get_struct__2603_signature
#define compare_Radio_TrackTrain_Header_T_Radio_Types_Pkg_type compare_struct__2603_type
#define Radio_TrackTrain_Header_T_Radio_Types_Pkg_filter_size struct__2603_filter_size
#define get_Radio_TrackTrain_Header_T_Radio_Types_Pkg_filter_utils get_struct__2603_filter_utils
#define Radio_TrackTrain_Header_T_Radio_Types_Pkg_filter_values struct__2603_filter_values

#endif /*LISTEN_ON_BTM_CHECKBGINPUTCHANNEL_PKG_TYPES_CONVERTION */
