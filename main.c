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
	cp = make_copy(arr2, 10000);
	BubbleSort(cp, 10000);
	cp = make_copy(arr3, 20000);
	BubbleSort(cp, 20000);

	cp = make_copy(arr1, 1000);
	InsertionSort(cp, 1000);
	cp = make_copy(arr2, 10000);
	InsertionSort(cp, 10000);
	cp = make_copy(arr3, 20000);
	InsertionSort(cp, 20000);

	cp = make_copy(arr1, 1000);
	SelectionSort(cp, 1000);
	cp = make_copy(arr2, 10000);
	SelectionSort(cp, 10000);
	cp = make_copy(arr3, 20000);
	SelectionSort(cp, 20000);
	return (0);
}
