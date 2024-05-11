#include <avr/io.h>
#include <util/delay.h>

#define F_CPU 1000000UL // Assuming a 1MHz clock frequency, change accordingly

void LED_init()
{
    DDRA |= (1 << DDA1); // Set PA1 as output (assuming the LED is connected to PA1)
}

void switch_init()
{
    DDRA &= ~(1 << DDA0); // Set PA0 as input (switch connected to PA0)
    PORTA |= (1 << PA0);  // Enable pull-up resistor for PA0
}

int main(void)
{
    LED_init();
    switch_init();

    int switch_pressed = 0; // Flag to keep track of switch state
    int led_state = 0;      // Flag to keep track of LED state

    while (1)
    {
        if (!(PINA & (1 << PA0)))
        { // Check if switch is pressed (active low)
            if (!switch_pressed)
            {                           // Only change LED state if switch was not previously pressed
                led_state = !led_state; // Toggle LED state
                switch_pressed = 1;     // Set switch_pressed flag
            }
        }
        else
        {
            switch_pressed = 0; // Reset switch_pressed flag when switch is released
        }

        // Update LED state
        if (led_state)
        {
            PORTA |= (1 << PA1); // Turn on LED
        }
        else
        {
            PORTA &= ~(1 << PA1); // Turn off LED
        }

        _delay_ms(2000); // Add a small delay to debounce the switch
    }

    return 0;
}
