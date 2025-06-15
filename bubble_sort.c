#include <stdio.h>

void bubble_sort(int arr[], int n) {
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int my_arr[] = {1, 6, 2, 10, 4, 5, 8, 7};
    int size = sizeof(my_arr) / sizeof(my_arr[0]);
    
    bubble_sort(my_arr, size);

    for (int i = 0; i < size; i++) {
        printf("%d ", my_arr[i]);
    }
    printf("\n");

    return 0;
}