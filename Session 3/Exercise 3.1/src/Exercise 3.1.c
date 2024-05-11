#include <stdio.h>

int main()
{
    char text[] = "The quick brown fox jumps over lazy dog";
    char *endS = text + 39; /* Don't worry about this */
    printf("The string now says: \"%s\n", text);
    *endS = '\0';
    printf("The string now says: \"%s\n", text);

    // Experiment with different positions
    endS = endS - 1;
    *endS = '\0';
    printf("String after null-character at position 38: \"%s\"\n", text);

    endS = endS + 2; // Increment by 2 positions
    *endS = '\0';
    printf("String after null-character at position 40: \"%s\"\n", text);

    ++endS; // Prefix increment
    *endS = '\0';
    printf("String after null-character at position 42: \"%s\"\n", text);

    --endS; // Prefix decrement
    *endS = '\0';
    printf("String after null-character at position 41: \"%s\"\n", text);

    endS = endS - 1;
    *endS = '\0';
    printf("The string now says: \"%s\n", text);
    return 0;
}