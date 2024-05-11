#include <stdio.h>

struct Rectangle {
    float length;
    float width;
};

int main() {
//  oprette en struct Rectangle variabel
    struct Rectangle rect;

    // Prompt the user to enter the length and width
    printf("Enter the length of the rectangle: ");
    scanf("%f", &rect.length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &rect.width);

    // Calculate the area
    float area = rect.length * rect.width;

    // Print the area
    printf("The area of the rectangle is: %.2f\n", area);

    return 0;
    //vi returnerer 0, fordi vi ikke har nogen fejl i vores program eller noget der skal returneres
}
