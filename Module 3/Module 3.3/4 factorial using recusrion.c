#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

int main() {
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factorial: %d\n", factorial(n));
    return 0;
}

