#include "searching.h"

int binarySearch(int *arr, int beg, int end, int val)
{
    int mid;
    if (end >= beg)
    {
        mid = beg +(end - beg) / 2;
        if (arr[mid] == val)
            return mid;
        else if (arr[mid] <= val)
            return binarySearch(arr, mid + 1, end, val);
        else
            return binarySearch(arr, beg, mid - 1, val);
    }
    return -1;
}