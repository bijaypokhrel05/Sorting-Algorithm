#include <stdio.h>


void sort(int arr[], int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int i = 0; i < n - 1 - j; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
            }
        }
    }
}

int main() {
    int a[] = {2, 9, 3, 7, 4, 10};
    int b[] = {5, 8, 1, 6, 12, 89};
    int i = 0, j = 0, k=0;
    int n_a = sizeof(a) / sizeof(a[0]);
    int n_b = sizeof(b) / sizeof(b[0]);
    int c[n_a + n_b];


    sort(a, n_a);
    sort(b, n_b);

    printf("The first sorted array is: ");
    for (i = 0; i < n_a; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("The second sorted array is: ");
    for (i = 0; i < n_a; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");

    i=0, j=0;

    while ((i != n_a) && (j != n_b)) {
        if (a[i] < b[j]) {
            c[k] = a[i];
            i++;
            k++;
        } else {
            c[k] = b[j];
            j++;
            k++;
        }
    }
    while (i != n_a) {
        c[k] = a[i];
        k++;
        i++;
    }
    while (j != n_b) {
        c[k] = b[j];
        j++;
        k++;
    }

    printf("Merged two sorted array. The latest array is shown below!\n");
    for (int z = 0; z < n_a + n_b; z++) {
        printf("%d ", c[z]);
    }
    printf("\n");

    return 0;
}
