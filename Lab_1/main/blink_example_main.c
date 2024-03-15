/* Blink Example

   This example code is in the Public Domain (or CC0 licensed, at your option.)

   Unless required by applicable law or agreed to in writing, this
   software is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
   CONDITIONS OF ANY KIND, either express or implied.
*/
#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "driver/gpio.h"
#include "esp_log.h"
#include "led_strip.h"
#include "sdkconfig.h"
#include <string.h>

/* Use project configuration menu (idf.py menuconfig) to choose the GPIO to blink,
   or you can edit the following line and set a number here.
*/

void app_main(void)
{
    int state = 0;
    char noti[10];
    gpio_set_direction(GPIO_NUM_22,GPIO_MODE_OUTPUT);

    while (1) {
        state = !state;
        strcpy(noti, (state == 1) ? "on" : "off");
        gpio_set_level(GPIO_NUM_22,state);
        printf("Turn %s the led\n", noti);
        vTaskDelay(500/portTICK_PERIOD_MS);
    }

}
