#include <stdio.h>
#include "my_string_func.h"

#define MAX_LENGTH 1000

int main() {
    char line[MAX_LENGTH];
    char upper[MAX_LENGTH];
    int line_length;

    /* Use a while loop to read input lines as long as there are any.
       For each input line, print the length of the line as well as
       the upper case version of the line.
       NOTE: You are NOT allowed to use the standard toupper(...) function in string.h
    */
    while (fgets(line, MAX_LENGTH, stdin) != NULL) {
        // Compute the length of the input line
        line_length = compute_length(line);

        // Convert the input line to uppercase using custom function my_to_upper
        my_to_upper(line, upper);

        // Print the length and the uppercase version of the line
        printf("Length: %d\t%s\n", line_length, upper);

        char str_in[] = "Hello World!";
    char str_out[50]; // Make sure this is large enough to hold the input string

    my_to_upper(str_in, str_out);

    printf("Original string: %s\n", str_in);
    printf("Uppercase string: %s\n", str_out);

    return 0;
    }
}
