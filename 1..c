int Arr[5] = {12, 56, 34, 78, 100};
int largest = Arr[0];
for (int i = 1; i < 5; i++) {
  if (Arr[i] > largest) {
    largest = Arr[i];
  }
}
printf("The largest element of the array is %d", largest);
