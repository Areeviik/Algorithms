#include "Sorting.h"

int main()
{
	int *arr1 = (int *)malloc(sizeof(int) * 1000);
	int *arr2 = (int *)malloc(sizeof(int) * 10000);
	int *arr3 = (int *)malloc(sizeof(int) * 20000);

	gen_arrays(arr1, 1000);
	gen_arrays(arr2, 10000);
	gen_arrays(arr3, 20000);

	/* Bubble Sort */
	int *cp = make_copy(arr1, 1000);
	BubbleSort(cp, 1000);
	cp = make_copy(arr2, 10000);
	BubbleSort(cp, 10000);
	cp = make_copy(arr3, 20000);
	BubbleSort(cp, 20000);

	/* Insertion Sort */
	cp = make_copy(arr1, 1000);
	InsertionSort(cp, 1000);
	cp = make_copy(arr2, 10000);
	InsertionSort(cp, 10000);
	cp = make_copy(arr3, 20000);
	InsertionSort(cp, 20000);

	/*Selection Sort */
	cp = make_copy(arr1, 1000);
	SelectionSort(cp, 1000);
	cp = make_copy(arr2, 10000);
	SelectionSort(cp, 10000);
	cp = make_copy(arr3, 20000);
	SelectionSort(cp, 20000);

	/*Merge Sort */
	// unsigned long long time;
	// cp = make_copy(arr1, 1000);
	// time = MergeSort(cp, 1000);
	// printf("The array was sorted by Merge Sort algorithm in %llu seconds\n", time);
	// cp = make_copy(arr2, 10000);
	// time = MergeSort(cp, 10000);
	// printf("The array was sorted by Merge Sort algorithm in %llu seconds\n", time);
	// cp = make_copy(arr3, 20000);
	// time = MergeSort(cp, 20000);
	// printf("The array was sorted by Merge Sort algorithm in %llu seconds\n", time);

	/*Quick Sort */
	// cp = make_copy(arr1, 1000);
	// time = QuickSort(cp, 1000);
	// printf("The array was sorted by Quick Sort algorithm in %llu seconds\n", time);
	// cp = make_copy(arr2, 10000);
	// time = QuickSort(cp, 10000);
	// printf("The array was sorted by Quick Sort algorithm in %llu seconds\n", time);
	// cp = make_copy(arr3, 20000);
	// time = QuickSort(cp, 20000);
	// printf("The array was sorted by Quick Sort algorithm in %llu seconds\n", time);

	// int i = 0;
	// while (cp[i])
	// {
	// 	printf("%d\n", cp[i]);
	// 	++i;
	// }
	return 0;
}