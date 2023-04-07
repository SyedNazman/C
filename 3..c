#include <stdio.h>

int main()
{
    int arr[50], n, i, j, temp, second_largest, second_smallest, sum = 0, avg = 0;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        for(j = i+1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("The array in descending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    second_largest = arr[1];
    second_smallest = arr[n-2];
    sum = second_largest + second_smallest;
    avg = sum / 2;

    for(i = 0; i < n; i++)
    {
        if(avg == arr[i])
        {
            printf("\nThe average %d is present in the array.", avg);
            break;
        }
    }

    if(i == n)
    {
        printf("\nThe average %d is not present in the array.", avg);
    }

    return 0;
}
