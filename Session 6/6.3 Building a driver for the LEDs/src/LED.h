#ifndef LED_H
#define LED_H

#include <stdint.h> // stdint.h er en headerfil, der definerer en række variable typer, som er nøjagtige størrelser. Det er en del af C99-standarden.

#define INTERNAL 0 // Definerer en konstant med værdien 0
#define EXTERNAL 1 // Definerer en konstant med værdien 1

void led_init(uint8_t led_id); 

void led_on(uint8_t led_id);

void led_off(uint8_t led_id);

void led_toggle(uint8_t led_id);

#endif /* LED_H */
