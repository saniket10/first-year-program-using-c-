#include<stdio.h>

int main() {
    float D, r;

    printf("Enter diameter: ");
    scanf("%f", &D);

    r = D / 2;

    // Area of circle
    printf("Area of circle is %f\n", 3.14 * r * r);

    // Circumference of circle
    printf("Circumference of circle is %f", 2 * 3.14 * r);

    return 0;
}