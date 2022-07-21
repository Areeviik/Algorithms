#ifndef SEARCHING_H
#define SEARCHING_H

#include <stdio.h>
#include <stdlib.h>

int linearSearch(int *arr, int n, int val);
int binarySearch(int *arr, int beg, int end, int val);
int jumpSearch(int *arr, int n, int val);

int	my_sqrt(int nb);
int my_min(int a, int b);

#endif