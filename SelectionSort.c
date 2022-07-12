#include "Sorting.h"

void SelectionSort(int *arr, int length)
{
	int i;
	int j;
	int min;
	
	unsigned long long begin_time;
	unsigned long long end_time;
	unsigned long long final_time;

	begin_time = gettime();
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
	end_time = gettime();
	final_time = end_time - begin_time;
	printf("The array was sorted by Selection Sort algorithm in %llu seconds\n", final_time);
}