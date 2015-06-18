#ifndef _os_train_info_2_h
#define _os_train_info_2_h

#include <stdint.h>
#include <stdbool.h>
/* Clause SEES */
#include "os_typ.h"
#include "os_cte_conf_bs.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */


/* Clause SETS */

/* Clause CONCRETE_VARIABLES */

extern int32_t os_train_info_2__posoff_max_safe_front_i;
extern int32_t os_train_info_2__posoff_min_safe_front_i;
extern int32_t os_train_info_2__train_speed_i;

/* Clause CONCRETE_CONSTANTS */
/* Basic constants */
/* Array and record constants */
extern void os_train_info_2__INITIALISATION(void);

/* Clause OPERATIONS */

extern void os_train_info_2__write_posoff_max_safe_front(int32_t p_abs);
extern void os_train_info_2__write_posoff_min_safe_front(int32_t p_abs);
extern void os_train_info_2__write_train_speed(int32_t p_speed);

#ifdef __cplusplus
}
#endif /* __cplusplus */


#endif /* _os_train_info_2_h */
