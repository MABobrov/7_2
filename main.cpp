#include <stdio.h>

void fill_and_print_array(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int array1[5];
    int array2[10];

    fill_and_print_array(array1, 5);
    fill_and_print_array(array2, 10);

    return 0;
}