#include <stdio.h>

void insertion_sort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int curr = arr[i];
        int previdx = i-1;

        while (previdx >= 0 && arr[previdx] > curr) {
            arr[previdx + 1] = arr[previdx];
            previdx--;
        }
        arr[previdx+1] = curr;
    }
}

int main() {
    int arr[] = {4, 1, 5, 2, 3};
    int n = 5;

    insertion_sort(arr, n);

    for(int i=0; i< n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}