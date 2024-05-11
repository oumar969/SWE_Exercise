#include <stdio.h>
#include "my_string_func.h"
/* read_line: read a line into s, return length */
int my_length(char *text)
{ 
    int i = 0;
    while (text[i] != '\0')
    {
        i++;
    }
    return i;
}
void my_to_upper(char *str_in, char *str_out) {
    int i = 0;
    while(str_in[i]) {
        str_out[i] = toupper(str_in[i]);
        i++;
    }
    str_out[i] = '\0'; // Null terminate the output string
}

int read_line(char s[])
{
    int c = 0;
    int i = 0;
    int done = 0;
    do
    {
        c = getchar();
        if (c == EOF || c == '\n')
        {
            done = 1;
        }
        else
        {
            s[i++] = c;
        }
    } while (!done);
    s[i] = '\0';
    return i;
}