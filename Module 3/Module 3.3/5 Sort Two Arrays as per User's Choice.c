#include <stdio.h>

void sortArray(int arr[], int n, int choice) {
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (choice == 1) {
                if (arr[j] > arr[j+1]) {  // Ascending
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            } else {
                if (arr[j] < arr[j+1]) {  // Descending
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
}

int main() {
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter 1 for ascending or 2 for descending: ");
    scanf("%d", &choice);

    sortArray(arr, n, choice);

    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

