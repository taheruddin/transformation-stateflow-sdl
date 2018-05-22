/* Timer manager */
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <assert.h>

#include "chip_timer_manager.h"

static struct {
    long long value;
    enum { active, inactive } state;
} timers[4] = { { .value = 0, .state = inactive } };

void chip_timer_manager_startup()
{
    /* Timer start up (nothing to do) */
}

void chip_timer_manager_PI_tick_100ms()
{
    if (timers[coffee_tmr].state == active && 0 == --timers[coffee_tmr].value) {
        chip_timer_manager_RI_coffee_tmr();
        timers[coffee_tmr].state = inactive;
    }

    if (timers[coffee_tmr1].state == active && 0 == --timers[coffee_tmr1].value) {
        chip_timer_manager_RI_coffee_tmr1();
        timers[coffee_tmr1].state = inactive;
    }

    if (timers[coffee_tmr2].state == active && 0 == --timers[coffee_tmr2].value) {
        chip_timer_manager_RI_coffee_tmr2();
        timers[coffee_tmr2].state = inactive;
    }

    if (timers[coffee_tmr3].state == active && 0 == --timers[coffee_tmr3].value) {
        chip_timer_manager_RI_coffee_tmr3();
        timers[coffee_tmr3].state = inactive;
    }

}

void chip_timer_manager_PI_coffee_SET_tmr(const asn1SccT_UInt32 *val)
{
    /* Timer value must be multiple of 100 ms */
    assert (*val % 100 == 0);
    timers[coffee_tmr].state = active;
    timers[coffee_tmr].value = *val / 100;
}

void chip_timer_manager_PI_coffee_RESET_tmr()
{
    timers[coffee_tmr].state = inactive;
}

void chip_timer_manager_PI_coffee_SET_tmr1(const asn1SccT_UInt32 *val)
{
    /* Timer value must be multiple of 100 ms */
    assert (*val % 100 == 0);
    timers[coffee_tmr1].state = active;
    timers[coffee_tmr1].value = *val / 100;
}

void chip_timer_manager_PI_coffee_RESET_tmr1()
{
    timers[coffee_tmr1].state = inactive;
}

void chip_timer_manager_PI_coffee_SET_tmr2(const asn1SccT_UInt32 *val)
{
    /* Timer value must be multiple of 100 ms */
    assert (*val % 100 == 0);
    timers[coffee_tmr2].state = active;
    timers[coffee_tmr2].value = *val / 100;
}

void chip_timer_manager_PI_coffee_RESET_tmr2()
{
    timers[coffee_tmr2].state = inactive;
}

void chip_timer_manager_PI_coffee_SET_tmr3(const asn1SccT_UInt32 *val)
{
    /* Timer value must be multiple of 100 ms */
    assert (*val % 100 == 0);
    timers[coffee_tmr3].state = active;
    timers[coffee_tmr3].value = *val / 100;
}

void chip_timer_manager_PI_coffee_RESET_tmr3()
{
    timers[coffee_tmr3].state = inactive;
}

