#ifndef SORTING_H
#define SORTING_H

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

void BubbleSort(int *arr, int length);
void InsertionSort(int *arr, int length);
void SelectionSort(int *arr, int length);
void swap(int *a, int *b);
void gen_arrays(int *arr, int size);
int* make_copy(int *arr, int length);

#endif