#include <stdio.h>

void matrixOperations(int mat1[10][10], int mat2[10][10], int n, char op) {
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (op == '+') sum[i][j] = mat1[i][j] + mat2[i][j];
            if (op == '-') sub[i][j] = mat1[i][j] - mat2[i][j];
            if (op == '*') {
                mul[i][j] = 0;
                for (int k = 0; k < n; k++) {
                    mul[i][j] += mat1[i][j] * mat2[i][k];
                }
            }
        }
    }
}

int main() {
    printf("Enter the size of the matrices (nxn): ");
    scanf("%d", &n);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat1[i][j]);
        }
    }

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &mat2[i][j]);
        }
    }

    matrixOperations(mat1, mat2, n, '+');
    matrixOperations(mat1, mat2, n, '-');
    matrixOperations(mat1, mat2, n, '*');

    // Printing results...
    return 0;
}

