#include "ets_sys.h"
#include "osapi.h"
#include "user_interface.h"
#include "driver/uart.h"

void user_rf_pre_init(void)
{
    uart_init(BIT_RATE_115200, BIT_RATE_115200);
    os_printf("\n");
    os_printf("user_rf_pre_init\n");
}

void user_init(void)
{
    uart_init(BIT_RATE_115200, BIT_RATE_115200);
    os_printf("\n");
    os_printf("user_init\n");

    while (1) {
        system_soft_wdt_feed();
    }
}
