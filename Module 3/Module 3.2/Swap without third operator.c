#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Before Swap: a = %d, b = %d\n", a, b);

    // Swapping using the concept of assignment without any additional signs
    a = a * b;   // a now contains product of a and b
    b = a / b;   // b now contains the original value of a
    a = a / b;   // a now contains the original value of b

    printf("After Swap: a = %d, b = %d\n", a, b);

    return 0;
}

