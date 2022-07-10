#include "Sorting.h"

void InsertionSort(int *arr)
{
	size_t length;
	int i;
	int j;
	int key;

	length = sizeof(arr);
	i = 1;
	while (i < length)
	{
		key = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > key)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
		++i;
	}

}