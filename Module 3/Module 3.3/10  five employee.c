#include <stdio.h>

// Define structure for Employee
struct Employee {
    int empno;
    char empname[50];
    char address[100];
    int age;
};

int main() {
    struct Employee emp[5];  // Declare an array of structure for five employees
    int i;

    // Taking input for five employees
    for (i = 0; i < 5; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Enter employee number: ");
        scanf("%d", &emp[i].empno);
        printf("Enter employee name: ");
        scanf("%s", emp[i].empname);
        printf("Enter employee address: ");
        scanf("%s", emp[i].address);
        printf("Enter employee age: ");
        scanf("%d", &emp[i].age);
    }

    // Displaying details of five employees
    printf("\nEmployee Details:\n");
    for (i = 0; i < 5; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Employee Number: %d\n", emp[i].empno);
        printf("Employee Name: %s\n", emp[i].empname);
        printf("Employee Address: %s\n", emp[i].address);
        printf("Employee Age: %d\n", emp[i].age);
    }

    return 0;
}

