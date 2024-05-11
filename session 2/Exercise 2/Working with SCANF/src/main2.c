#include <stdio.h>

void readFromFile(const char *filename) {
    FILE *fp = fopen(filename, "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return;
    }

    char c;
    printf("Contents of %s:\n", filename);
    while (fscanf(fp, "%c", &c) != EOF) {
        printf("%c", c);
    }

    fclose(fp);
}

int main2(void) {
    setbuf(stdout, NULL); // Disable output buffer

    // 2.4 Read from a file using the function
    readFromFile("file.txt");

    return 0;
}
