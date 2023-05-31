#include <stdio.h>

#define MAX_LENGTH 100

void swapArrays(int arr1[], int arr1_length, int arr2[], int arr2_length) {
    int max_length = (arr1_length > arr2_length) ? arr1_length : arr2_length;
    int temp[MAX_LENGTH];

    // Copy elements from the first array to the temporary array
    for (int i = 0; i < arr1_length; i++) {
        temp[i] = arr1[i];
    }

    // Copy elements from the second array to the first array
    for (int i = 0; i < arr2_length; i++) {
        arr1[i] = arr2[i];
    }

    // Copy elements from the temporary array to the second array
    for (int i = 0; i < arr1_length; i++) {
        arr2[i] = temp[i];
    }
}

int main() {
    int array1[] = {1, 2, 3};
    int array2[] = {4, 5, 6, 7, 8};

    int array1_length = sizeof(array1) / sizeof(array1[0]);
    int array2_length = sizeof(array2) / sizeof(array2[0]);

    swapArrays(array1, array1_length, array2, array2_length);

    printf("Array 1 after swapping: ");
    for (int i = 0; i < array1_length; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Array 2 after swapping: ");
    for (int i = 0; i < array2_length; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
