#include <stdio.h>
#define PI 3.1416

int main() {
    float radius, length, width, base, height;

    // Circle
    printf("Enter radius of the circle: ");
    scanf("%f", &radius);
    printf("Area of Circle: %.2f\n", PI * radius * radius);

    // Rectangle
    printf("Enter length and width of the rectangle: ");
    scanf("%f %f", &length, &width);
    printf("Area of Rectangle: %.2f\n", length * width);

    // Triangle
    printf("Enter base and height of the triangle: ");
    scanf("%f %f", &base, &height);
    printf("Area of Triangle: %.2f\n", 0.5 * base * height);

    return 0;
}

