#include <avr/io.h>
#include <util/delay.h>

/* Turn LED on
int main ()
{
  DDRB |= (1<<7); //Port B, bit 7 is set to output

  while(1) {
    PORTB ^= (1<<7); //tænd LED (^ er XOR, så den skifter mellem 1 og 0)
  }

  return 0;

}

*/

int main()
{

  // init
  DDRB |= (1 << 7);   // Port B, bit 7 is set to output
  PORTB &= ~(1 << 7); // sluk LED

  while (1)
  {

    PORTB ^= (1 << 7); // tænd LED (^ er XOR, så den skifter mellem 1 og 0)
    _delay_ms(1000);   // vent 1 sekund
  }

  return 0;
}