#ifndef SORTING_H
#define SORTING_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <sys/time.h>


/* Sorting functions */
void BubbleSort(int *arr, int length);
void InsertionSort(int *arr, int length);
void SelectionSort(int *arr, int length);

/* Utils functions */
void swap(int *a, int *b);
void gen_arrays(int *arr, int size);
int* make_copy(int *arr, int length);
unsigned long long	gettime(void);

#endif