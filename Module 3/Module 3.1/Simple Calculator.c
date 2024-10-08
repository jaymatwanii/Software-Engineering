#include <stdio.h>

int main() {
    int num1, num2, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    printf("Choose operation: 1. Add 2. Subtract 3. Multiply 4. Divide 5. Modulo\n");
    scanf("%d", &choice);

    switch(choice) {
        case 1: printf("Addition: %d\n", num1 + num2); break;
        case 2: printf("Subtraction: %d\n", num1 - num2); break;
        case 3: printf("Multiplication: %d\n", num1 * num2); break;
        case 4: 
            if (num2 != 0) 
                printf("Division: %d\n", num1 / num2);
            else 
                printf("Cannot divide by zero\n");
            break;
        case 5: 
            if (num2 != 0) 
                printf("Modulo: %d\n", num1 % num2);
            else 
                printf("Cannot divide by zero\n");
            break;
        default: printf("Invalid operation\n");
    }
    return 0;
}

