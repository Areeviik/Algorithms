#include "Sorting.h"

void SelectionSort(int *arr)
{
	size_t length;
	int i;
	int j;
	int min;

	length = sizeof(arr);

	i = 0;
	while (i < length)
	{
		min = i;
		j = i + 1; 
		while (j < length)
		{
			if (arr[j] < arr[min])
				min = j;
			++j;
			if (min != i)
				swap(&arr[i], &arr[min]);
		}
		++i;
	}

}