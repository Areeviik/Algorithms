#include "Sorting.h"

void	BubbleSort(int *arr, int length)
{
	int	i = 0, j;
	unsigned long long begin_time = gettime(), end_time, final_time;
	while (i < length - 1)
	{
		j = 0;
		while (j < length - 1 - i)
		{
			if (arr[j] > arr[j + 1])
				swap(&arr[j], &arr[j + 1]);
			++j;
		}
		++i;
	}
	end_time = gettime();
	final_time = end_time - begin_time;
	printf("\033[1;36mThe array was sorted by Bubble Sort algorithm in %llu milliseconds\033[0m\n", final_time);
}
