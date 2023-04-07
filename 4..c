#include <stdio.h>

int main() {
    int array[] = {10, 15, 90, 200, 110};
    int size = sizeof(array) / sizeof(array[0]);
    int max_diff = array[1] - array[0]; // initialize with the difference between the first two elements
    int min_element = array[0]; // initialize with the first element

    for (int i = 1; i < size; i++) {
        if (array[i] - min_element > max_diff) {
            max_diff = array[i] - min_element;
        }
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }

    printf("The maximum difference is %d\n", max_diff);

    return 0;
}
