#include "Sorting.h"

void BubbleSort(int *arr, int length)
{
	int i, j;
	unsigned long long begin_time;
	unsigned long long end_time;
	unsigned long long final_time;

	begin_time = gettime();
	i = 0;
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
	printf("The array was sorted by Bubble Sort algorithm in %llu seconds\n", final_time);
}