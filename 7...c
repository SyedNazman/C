
This program takes a string as input and finds the sum of ASCII values of all characters in a given string.

1. Take a string as input and store it in the array string[].
2. Initialize the variable sum to zero. Using for loop increment the variable sum with the elements of the array.
3. Print the variable sum as output. */

    #include <stdio.h>

    #include <string.h>

    void main()

    {

        int sum = 0, j, len;

        char string1[88];

        printf("Enter the string : ");

        scanf("%[^\n]s", string1);

            len = strlen(string1);

        for (j = 0; j < len; j++)

        {

            sum = sum + string1[j];

        }

        printf("\nSum of all characters : %d ",sum);

    }
