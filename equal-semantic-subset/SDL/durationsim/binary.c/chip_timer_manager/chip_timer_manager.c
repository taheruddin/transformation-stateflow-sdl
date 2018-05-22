/* Timer manager */
/* This file was generated automatically: DO NOT MODIFY IT ! */

#include <assert.h>

#include "chip_timer_manager.h"

static struct {
    long long value;
    enum { active, inactive } state;
} timers[1] = { { .value = 0, .state = inactive } };

void chip_timer_manager_startup()
{
    /* Timer start up (nothing to do) */
}

void chip_timer_manager_PI_tick_100ms()
{
    if (timers[durationsys_sdltmr].state == active && 0 == --timers[durationsys_sdltmr].value) {
        chip_timer_manager_RI_durationsys_sdltmr();
        timers[durationsys_sdltmr].state = inactive;
    }

}

void chip_timer_manager_PI_durationsys_SET_sdltmr(const asn1SccT_UInt32 *val)
{
    /* Timer value must be multiple of 100 ms */
    assert (*val % 100 == 0);
    timers[durationsys_sdltmr].state = active;
    timers[durationsys_sdltmr].value = *val / 100;
}

void chip_timer_manager_PI_durationsys_RESET_sdltmr()
{
    timers[durationsys_sdltmr].state = inactive;
}

