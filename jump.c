int jumpSearch(int *arr, int n, int val)
{
    int step = sqrt(n);
    int prev = 0;
    while (arr[min(step, n) - 1] < val)
    {
        prev = step;
        step += sqrt(n);
        if (prev >= n)
            return -1;
    }
    while (arr[prev] < val)
    {
        prev++;
        if (prev == min(step, n))
            return prev;
        return -1;
    }
}