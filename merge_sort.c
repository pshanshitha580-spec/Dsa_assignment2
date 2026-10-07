#include <stdio.h>

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void merge(int arr[], int left, int mid, int right, int n)
{
    int i = left;
    int j = mid + 1;
    int k = 0;

    int temp[right - left + 1];

    while (i <= mid && j <= right)
    {
        if (arr[i] <= arr[j])
        {
            temp[k++] = arr[i++];
        }
        else
        {
            temp[k++] = arr[j++];
        }
    }

    while (i <= mid)
        temp[k++] = arr[i++];

    while (j <= right)
        temp[k++] = arr[j++];

    for (i = left, k = 0; i <= right; i++, k++)
        arr[i] = temp[k];

    printf("After merging [%d - %d]: ", left, right);
    printArray(arr, n);
}

void mergeSort(int arr[], int left, int right, int n)
{
    if (left < right)
    {
        int mid = (left + right) / 2;

        mergeSort(arr, left, mid, n);
        mergeSort(arr, mid + 1, right, n);

        merge(arr, left, mid, right, n);
    }
}

int main()
{
    int arr[] = {324, 125, 456, 218, 102, 389, 275, 147};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n);

    printf("\nMerge Sort Trace:\n");

    mergeSort(arr, 0, n - 1, n);

    printf("\nFinal Sorted Array:\n");
    printArray(arr, n);

    return 0;
}
