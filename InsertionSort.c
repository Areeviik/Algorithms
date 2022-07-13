#include "Sorting.h"

void InsertionSort(int *arr, int length)
{
	int i = 1, j, key;
	unsigned long long begin_time = gettime(), end_time, final_time;
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
	end_time = gettime();
	final_time = end_time - begin_time;
	printf("The array was sorted by Insertion Sort algorithm in %llu seconds\n", final_time);
}
