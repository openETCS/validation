#include "b_init.h"


#include "elop_bs.h"
#include "os_consist.h"
#include "os_consist_1.h"
#include "os_consist_2.h"
#include "os_cte_conf_bs.h"
#include "os_in.h"
#include "os_in_bs.h"
#include "os_main.h"
#include "os_main_1.h"
#include "os_mode_level.h"
#include "os_mode_level_1.h"
#include "os_mode_level_2.h"
#include "os_out.h"
#include "os_out_bs.h"
#include "os_train_info.h"
#include "os_train_info_1.h"
#include "os_train_info_2.h"
#include "os_typ.h"

void b_initialisation(void)
{
    elop_bs__INITIALISATION();
    os_consist__INITIALISATION();
    os_consist_1__INITIALISATION();
    os_consist_2__INITIALISATION();
    os_cte_conf_bs__INITIALISATION();
    os_in__INITIALISATION();
    os_in_bs__INITIALISATION();
    os_main__INITIALISATION();
    os_main_1__INITIALISATION();
    os_mode_level__INITIALISATION();
    os_mode_level_1__INITIALISATION();
    os_mode_level_2__INITIALISATION();
    os_out__INITIALISATION();
    os_out_bs__INITIALISATION();
    os_train_info__INITIALISATION();
    os_train_info_1__INITIALISATION();
    os_train_info_2__INITIALISATION();
    os_typ__INITIALISATION();
}