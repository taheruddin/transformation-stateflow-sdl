/* Timer manager */
/* This file was generated automatically: DO NOT MODIFY IT ! */

#ifndef __AUTO_CODE_H_chip_timer_manager__
#define __AUTO_CODE_H_chip_timer_manager__

#include "C_ASN1_Types.h"
#ifdef __cplusplus
extern "C" {
#endif

void chip_timer_manager_startup();

void chip_timer_manager_PI_tick_100ms();

typedef enum {
    timersys_sdltmr = 0
} chip_timer_manager_timers;

void chip_timer_manager_PI_timersys_SET_sdltmr(const asn1SccT_UInt32 *val);

void chip_timer_manager_PI_timersys_RESET_sdltmr();

#ifdef __cplusplus
}
#endif

#endif