#include <stdio.h>

int main() {
    int choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);
    
    printf("Choose an operation:\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: result = num1 + num2; break;
        case 2: result = num1 - num2; break;
        case 3: result = num1 * num2; break;
        case 4: result = num1 / num2; break;
        default: printf("Invalid choice!"); return 0;
    }
    
    printf("Result: %d\n", result);
    return 0;
}

