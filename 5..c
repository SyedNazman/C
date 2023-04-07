#include <stdio.h>

int main() {
    int arr[] = {2, 7, 1, 23, 5, 1, 7, 2, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    // Print the original array
    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Remove duplicate elements
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n;) {
            if (arr[j] == arr[i]) {
                for (int k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--;
            } else {
                j++;
            }
        }
    }
    
    // Print the array without duplicates
    printf("Array without duplicates: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
