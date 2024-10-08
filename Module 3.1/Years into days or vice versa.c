#include <stdio.h>

int main() {
    int choice, years, days;

    printf("Choose option:\n1. Convert years to days\n2. Convert days to years\n");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter number of years: ");
            scanf("%d", &years);
            printf("Equivalent days: %d\n", years * 365);
            break;
        case 2:
            printf("Enter number of days: ");
            scanf("%d", &days);
            printf("Equivalent years: %.2f\n", days / 365.0);
            break;
        default:
            printf("Invalid option\n");
    }

    return 0;
}

