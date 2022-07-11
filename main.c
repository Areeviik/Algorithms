#include "Sorting.h"

int main()
{
	int *arr1 = (int *)malloc(sizeof(int) * 1000);
	int *arr2 = (int *)malloc(sizeof(int) * 10000);
	int *arr3 = (int *)malloc(sizeof(int) * 20000);

	gen_arrays(arr1, 1000);
	gen_arrays(arr2, 10000);
	gen_arrays(arr3, 20000);

	int *cp = make_copy(arr1, 1000);

	BubbleSort(cp, 1000);
	int i = 0 ;
	
	while (cp[i])
	{
		printf("%d\n", cp[i]);
		++i;
	}


}