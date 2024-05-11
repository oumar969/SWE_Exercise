#include <stdio.h>
int main() {
    const char* str = "Hello World";
    size_t length = my_strlen(str);
    printf("Length of '%s' is %zu\n", str, length);
    return 0;
}
