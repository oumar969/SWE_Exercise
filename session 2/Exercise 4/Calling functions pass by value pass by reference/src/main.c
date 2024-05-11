#include <stdio.h>

// Function to add two integers (pass by value)
int add(int a, int b)
{
    return a + b;
}

// Function to swap two integers (pass by reference)
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Function to find the maximum of three integers (pass by value)
int findMax(int x, int y, int z)
{
    if (x > y && x > z)
    {
        return x;
    }
    else if (y > x && y > z)
    {
        return y;
    }
    else
    {
        return z;
    }
}

int main(void)
{
    // Calling functions, pass by value, pass by reference examples

    // 4.1 Add two integers (pass by value)
    int sum = add(5, 3);
    printf("4.1 Sum of 5 and 3: %d\n", sum);

    // 4.2 Swap two integers (pass by reference)
    int num1 = 10, num2 = 20;
    printf("\n4.2 Before Swap: num1 = %d, num2 = %d\n", num1, num2);
    swap(&num1, &num2);
    printf("    After Swap: num1 = %d, num2 = %d\n", num1, num2);

    // 4.3 Find the maximum of three integers (pass by value)
    int maxNumber = findMax(8, 12, 5);
    printf("\n4.3 Maximum of 8, 12, and 5: %d\n", maxNumber);

    return 0;
}
// bak er en pik