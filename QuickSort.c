#include "Sorting.h"

void QuickSort(int *arr, int length)
{
    int first = 0, last = length - 1, i, j, pivot, tmp;
    if (first < last)
    {
        pivot = first;
        i = first;
        j = last;
        while (i < j)
        {
            while (arr[j] <= arr[pivot] && i < last)
                i++;
            while (arr[j] > arr[pivot])
                j--;
            if (i < j)
                swap(arr[i], arr[j]);
        }
    }
    swap(arr[pivot], arr[j]);
    QuickSort(arr, first, j - 1);
    QuickSort(arr, j + 1, last);
}