#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

void displayArray(int* arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int maxElement(int arr[], int size) {
    int max = INT_MIN;
    for (int i = 0; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

void count_sort(int arr[], int size) {
    int n = maxElement(arr, size) + 1;
    int* count = (int *) malloc(n * sizeof(int));
    int i, j;

    for (i = 0; i < n; i++) {
        count[i] = 0;
    }

    for (i = 0; i < size; i++) {
        count[arr[i]] = count[arr[i]] + 1;
    }

    i = 0; // counter for count array
    j = 0; // counter for main array

    while (i < n) {
        if (count[i] > 0) {
            arr[j] = i;
            count[i]  = count[i] - 1;
            j++;
        } else {
            i++;
        }
    }


}

int main() {
    int A[] = {3, 1, 9, 7, 1, 2, 4};
    int size = sizeof(A) / sizeof(int);

    count_sort(A, size);
    displayArray(A, size);

    return 0;
}