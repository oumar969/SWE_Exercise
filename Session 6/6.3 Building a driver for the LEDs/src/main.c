#include <avr/io.h>
#include "led.h"

int main() {
    // Initialize internal LED
    led_init(INTERNAL);

    // Turn on internal LED
    led_on(INTERNAL);

    // Wait for some time+
    _delay_ms(1000);

    // Turn off internal LED
    led_off(INTERNAL);

    // Toggle internal LED
    led_toggle(INTERNAL);

    // Wait for some time
    _delay_ms(1000);

    // Toggle internal LED again
    led_toggle(INTERNAL);

    while(1) {
        // Your main program loop
    }
    return 0;
}
