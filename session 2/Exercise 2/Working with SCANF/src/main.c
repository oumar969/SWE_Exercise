#include <stdio.h>

int main(void) {
    setbuf(stdout, NULL); // Disable output buffer

    // 2.2 Read stuff from the terminal
    char name[100];
    printf("Enter your name: ");
    scanf("%s", name);

    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Hi %s, you are %d years old.\n", name, age);

    // 2.3 Write to a file
    FILE *fp;
    fp = fopen("file.txt", "w"); // Writing to a file named "file.txt" in the same directory

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(fp, "Name: %s\nAge: %d\n", name, age);
    fclose(fp);

    // 2.4 Read from a file
    char c;
    fp = fopen("file.txt", "r");

    if (fp == NULL) {
        printf("Error opening file\n");
        return 1;
    }

    printf("Contents of file.txt:\n");
    while (fscanf(fp, "%c", &c) != EOF) {
        printf("%c", c);
    }

    fclose(fp);

    return 0;
}
