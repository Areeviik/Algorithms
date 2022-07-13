#include "Sorting.h"

void QuickSort(int *arr, int first, int length)
{
   int i, j, pivot, tmp;
   if(first < length)
   {
      pivot = first;
      i = first;
      j = length;
      while(i < j)
      {
         while(arr[i] <= arr[pivot] && i < length)
            i++;
         while(arr[j] > arr[pivot])
            j--;
         if(i < j){
            swap(&arr[i], &arr[j]);
         }
      }
      swap(&arr[pivot], &arr[j]);
      QuickSort(arr, first, j - 1);
      QuickSort(arr, j + 1, length);
   }
}
