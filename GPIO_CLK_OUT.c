/* Below is an example how to generate 20MHz square wave at 50% duty on GPIO18. */

#include "driver/ledc.h"
     
    ledc_timer_config_t ledc_timer = {
        .speed_mode = LEDC_HIGH_SPEED_MODE,
        .timer_num  = LEDC_TIMER_0,
        .bit_num    = 2,
        .freq_hz    = 20000000
    };
     
    ledc_channel_config_t ledc_channel = {
        .channel    = LEDC_CHANNEL_0,
        .gpio_num   = 18,
        .speed_mode = LEDC_HIGH_SPEED_MODE,
        .timer_sel  = LEDC_TIMER_0,
        .duty       = 2
    };
     
    void app_main()
    {
        ledc_timer_config(&ledc_timer);
        ledc_channel_config(&ledc_channel);
        while (1) {
            ;
        }
    }
