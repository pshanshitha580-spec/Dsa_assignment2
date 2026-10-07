#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int partition(int arr[], int low, int high, int n)
{
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++)
    {
        if (arr[j] <= pivot)
        {
            i++;

            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    int temp = arr[i + 1];
    arr[i + 1] = arr[high];
    arr[high] = temp;

    printf("Pivot = %d, Array after partition: ", pivot);
    printArray(arr, n);

    return i + 1;
}

void quickSort(int arr[], int low, int high, int n)
{
    if (low < high)
    {
        int pi = partition(arr, low, high, n);

        quickSort(arr, low, pi - 1, n);
        quickSort(arr, pi + 1, high, n);
    }
}

int main()
{
    int arr[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n);

    printf("\nQuick Sort Partition Trace:\n");

    quickSort(arr, 0, n - 1, n);

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n);

    return 0;
}
