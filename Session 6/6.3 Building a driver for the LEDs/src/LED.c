#include "led.h" // Inkluderer headerfilen led.h
#include <avr/io.h> // Inkluderer headerfilen avr/io.h, som indeholder definitioner for specifikke registre på mikrocontrolleren.

void led_init(uint8_t led_id) {
    if (led_id == INTERNAL) {
        // Configure internal LED pin as output
        DDRB |= (1 << PB7);
    } else if (led_id == EXTERNAL) {
        // Configure external LED pin as output
        // Add your code here to configure the pin for the external LED
    }
}

void led_on(uint8_t led_id) {
    if (led_id == INTERNAL) {
        // Turn on internal LED
        PORTB |= (1 << PB7);
    } else if (led_id == EXTERNAL) {
        // Turn on external LED
        // Add your code here to turn on the external LED
    }
}

void led_off(uint8_t led_id) {
    if (led_id == INTERNAL) {
        // Turn off internal LED
        PORTB &= ~(1 << PB7);
    } else if (led_id == EXTERNAL) {
        // Turn off external LED
        // Add your code here to turn off the external LED
    }
}

void led_toggle(uint8_t led_id) {
    if (led_id == INTERNAL) {
        // Toggle internal LED
        PORTB ^= (1 << PB7);
    } else if (led_id == EXTERNAL) {
        // Toggle external LED
        // Add your code here to toggle the external LED
    }
}
