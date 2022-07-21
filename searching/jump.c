#include "searching.h"

int jumpSearch(int *arr, int n, int val)
{
    int step = my_sqrt(n);
    int prev = 0;
    while (arr[my_min(step, n) - 1] < val)
    {
        prev = step;
        step += my_sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < val)
    {
        prev++;
        if (prev == my_min(step, n))
            return -1;
    }
    if (arr[prev] == val)
        return prev;
    return -1;
}