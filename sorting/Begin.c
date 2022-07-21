#include "Sorting.h"

void first_array()
{
	int *arr1 = (int *)malloc(sizeof(int) * 1000);
	gen_arrays(arr1, 1000);
	printf("\033[1;35m ~~~~~~Arrays of 1000 elements~~~~~~\033[0m\n");
	int *cp = make_copy(arr1, 1000);
	BubbleSort(cp, 1000);
	cp = make_copy(arr1, 1000);
	InsertionSort(cp, 1000);
	cp = make_copy(arr1, 1000);
	SelectionSort(cp, 1000);
	cp = make_copy(arr1, 1000);
	MergeSort(cp, 0, 1000);
	cp = make_copy(arr1, 1000);
	QuickSort(cp, 0, 1000);
}

void second_array()
{
	int *arr2 = (int *)malloc(sizeof(int) * 10000);
	gen_arrays(arr2, 10000);
	printf("\033[1;35m ~~~~~~Arrays of 10000 elements~~~~~~\033[0m\n");
	int *cp = make_copy(arr2, 10000);
	BubbleSort(cp, 10000);
	cp = make_copy(arr2, 10000);
	InsertionSort(cp, 10000);
	cp = make_copy(arr2, 10000);
	SelectionSort(cp, 10000);
	cp = make_copy(arr2, 10000);
	MergeSort(cp,0, 10000);
	cp = make_copy(arr2, 10000);
	QuickSort(cp, 0, 10000);
}

void third_array()
{
	int *arr3 = (int *)malloc(sizeof(int) * 20000);
	gen_arrays(arr3, 20000);
	printf("\033[1;35m ~~~~~~Arrays of 20000 elements~~~~~~\033[0m\n");
	int *cp = make_copy(arr3, 20000);
	BubbleSort(cp, 20000);
	cp = make_copy(arr3, 20000);
	InsertionSort(cp, 20000);
	cp = make_copy(arr3, 20000);
	SelectionSort(cp, 20000);
	cp = make_copy(arr3, 20000);
	MergeSort(cp,0, 20000);
	cp = make_copy(arr3, 20000);
	QuickSort(cp,0, 20000);
}