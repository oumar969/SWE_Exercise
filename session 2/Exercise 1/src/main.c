#include <stdio.h>

#include "calculator.h"

int main (void) {

int a = 10;

int b = -2;

printf ("\nHere, we add, subtract and multiply....\n\n");

printf ("%d\t+\t%d\t=\t%d\n", a, b, calculator_add(a,b));

printf ("%d\t-\t%d\t=\t%d\n", a, b, calculator_subtract(a,b));

printf ("%d\t*\t%d\t=\t%d\n", a, b, calculator_multiply(a,b));

printf ("%d\t/\t%d\t=\t%d\n", a, b, calculator_divide(a,b));

printf("This is the end of the program\n\n");

return 0;

}