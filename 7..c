#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Print original array
    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reverse array
    for (int i = 0; i < size / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }

    // Print reversed array
    printf("Reversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Check if palindrome array
    int isPalindrome = 1;
    for (int i = 0; i < size / 2; i++) {
        if (arr[i] != arr[size - i - 1]) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome) {
        printf("The array is a palindrome array.\n");
    } else {
        printf("The array is not a palindrome array.\n");
    }

    return 0;
}
