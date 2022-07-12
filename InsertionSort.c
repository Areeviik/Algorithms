#include "Sorting.h"

void InsertionSort(int *arr, int length)
{
	int i;
	int j;
	int key;

	unsigned long long begin_time;
	unsigned long long end_time;
	unsigned long long final_time;

	begin_time = gettime();
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
	end_time = gettime();
	final_time = end_time - begin_time;
	printf("The array was sorted by Insertion Sort algorithm in %llu seconds\n", final_time);
}