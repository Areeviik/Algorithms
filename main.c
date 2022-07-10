#include "Sorting.h"

int main()
{
    int *arr = malloc(5);
    arr[0] = 21;
    arr[1] = 7;
    arr[2] = 55;
    arr[3] = -3;
    arr[4] = 0;

    int n = sizeof(arr)/sizeof(arr[0]);
    BubbleSort(arr);
    printf("Sorted array:\n");
    printArray(arr, n);
    return 0;

}