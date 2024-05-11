#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int* array = (int*)malloc(size * sizeof(int));
    //malloc returns a pointer to the first byte of the allocated memory
    //dvs den hjælper med at allokere hukommelse til arrayet
    //تساعد في تخصيص الذاكرة للمصفوفة
    printf("Enter integer values for each element of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &array[i]);
    }

    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += array[i];
    }

    printf("Sum of all values in the array: %d\n", sum);

    free(array);
    //free releases the memory allocated by malloc
    //تساعد في تحرير الذاكرة المخصصة بواسطة malloc

    return 0;
}
