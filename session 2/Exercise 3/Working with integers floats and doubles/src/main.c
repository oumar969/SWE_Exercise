#include <stdio.h>

// 3.1 Division
void divisionExamples() {
    // Integer Division
    int intResult = 7 / 3;
    printf("Integer Division: %d\n", intResult);

    // Float Division
    float floatResult = 7.0 / 3.0;
    printf("Float Division: %f\n", floatResult);

    // Double Division
    double doubleResult = 7.0 / 3.0;
    printf("Double Division: %f\n", doubleResult); // %f for doubles
}

// 3.2 Modulo
void moduloExamples() {
    // Integer Modulo
    int intRemainder = 7 % 3;
    printf("Integer Modulo: %d\n", intRemainder);

    // Float Modulo (not applicable, as the modulo operator is not defined for floats)
}

// 3.3 Result of 0.2 - 0.1 - 0.1
void floatingPointArithmetic() {
    double result = 0.2 - 0.1 - 0.1;
    printf("Result of 0.2 - 0.1 - 0.1: %f10\n", result);
}

// 3.4 Using preprocessor define
#define BIG_NUMBER 99

int main(void) {
    // 3.1 Division
    printf("3.1 Division Examples:\n");
    divisionExamples();

    // 3.2 Modulo
    printf("\n3.2 Modulo Examples:\n");
    moduloExamples();

    // 3.3 Floating Point Arithmetic
    printf("\n3.3 Result of 0.2 - 0.1 - 0.1:\n");
    floatingPointArithmetic();

    // 3.4 Using preprocessor define
    printf("\n3.4 Using Preprocessor Define (BIG_NUMBER): %d\n", BIG_NUMBER);

    return 0;
}
        