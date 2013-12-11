#ifndef _elop_bs_h
#define _elop_bs_h

#include <stdint.h>
#include <stdbool.h>

extern void elop_bs__INITIALISATION(void);

extern void elop_bs__fail(void);
extern void elop_bs__add_int_int(
   const int32_t p_int_1,
   const int32_t p_int_2,
   int32_t * const p_res);
extern void elop_bs__mul_int_int(
   const int32_t p_int_1,
   const int32_t p_int_2,
   int32_t * const p_res);

#endif

