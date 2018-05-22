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
    coffee_tmr = 0,
    coffee_tmr1 = 1,
    coffee_tmr2 = 2,
    coffee_tmr3 = 3
} chip_timer_manager_timers;

void chip_timer_manager_PI_coffee_SET_tmr(const asn1SccT_UInt32 *val);

void chip_timer_manager_PI_coffee_RESET_tmr();

void chip_timer_manager_PI_coffee_SET_tmr1(const asn1SccT_UInt32 *val);

void chip_timer_manager_PI_coffee_RESET_tmr1();

void chip_timer_manager_PI_coffee_SET_tmr2(const asn1SccT_UInt32 *val);

void chip_timer_manager_PI_coffee_RESET_tmr2();

void chip_timer_manager_PI_coffee_SET_tmr3(const asn1SccT_UInt32 *val);

void chip_timer_manager_PI_coffee_RESET_tmr3();

#ifdef __cplusplus
}
#endif

#endif