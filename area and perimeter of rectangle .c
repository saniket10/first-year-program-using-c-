#include<stdio.h>

int main() {
    int a, b;

    printf("Enter Length: ");
    scanf("%d", &a);

    printf("Enter Breadth: ");
    scanf("%d", &b);

    // Area of Rectangle
    printf("Area of rectangle: %d\n", a * b);

    // Perimeter of Rectangle
    printf("Perimeter of Rectangle: %d", 2 * (a + b));

    return 0;
}