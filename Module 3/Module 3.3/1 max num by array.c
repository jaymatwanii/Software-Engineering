#include <stdio.h>

// Function to find the maximum number
int findMax(int arr[], int n) {
    int max = arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    
    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    max_num = findMax(arr, n);
    printf("The maximum number is: %d\n", max_num);
    return 0;
}

