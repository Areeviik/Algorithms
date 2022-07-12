#include "Sorting.h"

void BubbleSort(int *arr, int length)
{
	int i, j;

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
}