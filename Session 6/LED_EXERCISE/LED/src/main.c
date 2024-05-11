#include <Arduino.h>

void setup() {
  // Configure PB7 as an output
  DDRB |= (1 << PB7);
}

void loop() {
  // Blink LED once
  PORTB |= (1 << PB7);  // Turn on LED
  delay(500);           // Wait for 500 milliseconds
  PORTB &= ~(1 << PB7); // Turn off LED
  delay(500);           // Wait for 500 milliseconds
}
