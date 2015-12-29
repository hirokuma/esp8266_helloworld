#include "ets_sys.h"
#include "osapi.h"
#include "user_interface.h"
#include "driver/uart.h"

void user_rf_pre_init(void)
{
}

void user_init(void)
{
    uart_init(BIT_RATE_115200, BIT_RATE_115200);
    os_printf("\n");

    os_printf("Hello World\n");

    while (1) {
        system_soft_wdt_feed();
    }
    
}
