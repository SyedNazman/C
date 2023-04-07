#include <stdio.h>

int main()
{
    int n, i, largest, second_largest;

    // Read the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Read the elements of the array
    int arr[n];
    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Initialize largest and second_largest
    if (arr[0] > arr[1])
    {
        largest = arr[0];
        second_largest = arr[1];
    }
    else
    {
        largest = arr[1];
        second_largest = arr[0];
    }

    // Find the largest and second largest elements in the array
    for (i = 2; i < n; i++)
    {
        if (arr[i] > largest)
        {
            second_largest = largest;
            largest = arr[i];
        }
        else if (arr[i] > second_largest && arr[i] != largest)
        {
            second_largest = arr[i];
        }
    }

    // Print the largest and second largest elements in the array
    printf("The largest element in the array is: %d\n", largest);
    printf("The second largest element in the array is: %d\n", second_largest);

    return 0;
}
