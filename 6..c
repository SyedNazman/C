#include <stdio.h>

int main() {
   int inputArray[100], evenArray[100], oddArray[100];
   int evenCount = 0, oddCount = 0, size, i;

   // Read size of the array
   printf("Enter the size of the array: ");
   scanf("%d", &size);

   // Read array elements
   printf("Enter the array elements:\n");
   for(i=0; i<size; i++) {
      scanf("%d", &inputArray[i]);
   }

   // Store even and odd elements in separate arrays
   for(i=0; i<size; i++) {
      if(inputArray[i] % 2 == 0) {
         evenArray[evenCount] = inputArray[i];
         evenCount++;
      } else {
         oddArray[oddCount] = inputArray[i];
         oddCount++;
      }
   }

   // Print even elements
   printf("\nEven elements are: ");
   for(i=0; i<evenCount; i++) {
      printf("%d ", evenArray[i]);
   }

   // Print odd elements
   printf("\nOdd elements are: ");
   for(i=0; i<oddCount; i++) {
      printf("%d ", oddArray[i]);
   }

   return 0;
}
