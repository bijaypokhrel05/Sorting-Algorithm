#include <stdio.h>

void selection_sort(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        int smallest_idx = i;
        for (int j = i+1; j < size; j++) {
            if(arr[j] < arr[smallest_idx]) {
                smallest_idx = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[smallest_idx];
        arr[smallest_idx] = temp;
    }
}


int main() {
    int arr[] = {4, 1, 5, 2, 3, 12, 10, 8, 7, 9};
    int n = sizeof(arr)/sizeof(int);

    selection_sort(arr, n);
    printf("[");
    for(int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if(n != i+1) {
            printf(", ");
        }
    }
    printf("]");
    printf("\n");

    return 0;
}