#ifndef _os_train_info_1_h
#define _os_train_info_1_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

/* Clause IMPORTS */
#include "os_train_info_2.h"
#define os_train_info_1__write_posoff_max_safe_front os_train_info_2__write_posoff_max_safe_front
#define os_train_info_1__write_posoff_min_safe_front os_train_info_2__write_posoff_min_safe_front
#define os_train_info_1__write_train_speed os_train_info_2__write_train_speed

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */


/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_train_info_1__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_train_info_1__read_posoff_max_safe_front(int32_t *p_res);
extern void os_train_info_1__read_posoff_min_safe_front(int32_t *p_res);
extern void os_train_info_1__read_train_speed(int32_t *p_res);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_train_info_1_h */
