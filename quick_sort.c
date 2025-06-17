#include <stdio.h>

void displayArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int partition(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;

    do
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] > pivot)
        {
            j--;
        }

        if (i < j)
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    } while (i < j);

    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}

void quick_sort(int arr[], int low, int high)
{
    int parIdx;

    if (low < high)
    {
        parIdx = partition(arr, low, high);
        quick_sort(arr, low, parIdx - 1);  // sort left subarray
        quick_sort(arr, parIdx + 1, high); // sort right subarray
    }
}

int main()
{
    int A[] = {3, 5, 2, 13, 12, 2, 5};
    int size = sizeof(A) / sizeof(int);

    quick_sort(A, 0, size-1);
    displayArray(A, size);

    return 0;
}