#include <stdio.h>

int main() {
    int num,i, evenCount = 0, oddCount = 0, evenSum = 0, oddSum = 0;

    for (i = 0; i < 10; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);

        if (num % 2 == 0) {
            evenCount++;
            evenSum += num;
        } else {
            oddCount++;
            oddSum += num;
        }
    }

    printf("Even numbers count: %d\n", evenCount);
    printf("Odd numbers count: %d\n", oddCount);
    printf("Sum of even numbers: %d\n", evenSum);
    printf("Sum of odd numbers: %d\n", oddSum);

    return 0;
}

