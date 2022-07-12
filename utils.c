#include "Sorting.h"

void swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	gen_arrays(int *arr, int size)
{
	int i = 0;
	while (i < size)
	{
		arr[i] = rand() % 1000000 + 1;
		++i;
	}
}

int* make_copy(int *arr, int length)
{
	int *cp = (int *)malloc(sizeof(int) * length);
	int i = 0;
	while (arr[i])
	{
		cp[i] = arr[i];
		++i;
	}
	return cp;
}

unsigned long long	gettime(void)
{
	struct timeval		time;
	unsigned long long	ms;

	gettimeofday(&time, NULL);
	ms = (time.tv_sec * 1000) + (time.tv_usec / 1000);
	return (ms);
}