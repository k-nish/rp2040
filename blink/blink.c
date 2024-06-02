/**
 * Copyright (c) 2024 Kohei Nishimura
 *
 * License Apache-2.0
 */

#include "pico/stdlib.h"

int main() {
    const uint LED_PIN0 = 20;
    gpio_init(LED_PIN0);
    gpio_set_dir(LED_PIN0, GPIO_OUT);
    while (true) {
        gpio_put(LED_PIN0, 1);
        sleep_ms(250);
        gpio_put(LED_PIN0, 0);
        sleep_ms(250);
    }
}
