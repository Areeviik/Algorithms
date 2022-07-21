#include "searching.h"

int main()
{
    int length = 1000000;

    int *arr_for_linear = (int *)malloc(sizeof(int) * length);
    int *arr_for_binary = (int *)malloc(sizeof(int) * length);
    int *arr_for_jump = (int *)malloc(sizeof(int) * length);

    for (int i = 0; i < length; i++)
    {
        arr_for_binary[i] = i;
        arr_for_linear[i] = i;
        arr_for_jump[i] = i;
    }
    printf("\033[1;35mSearching 280799th element with linear search\033[0m\n");
    int linear_res = linearSearch(arr_for_linear, 1000000, 280799);
    printf("\033[1;35m280799th element in array_for_linear is %d\033[0m\n", linear_res);

    printf("Searching 5555th element with binary search\n");
    int binary_res = binarySearch(arr_for_linear,0, 1000000 - 1, 5555);
    printf("Last element in array_for_linear is %d\n", binary_res);

    printf("Searching 7777th element with linear search\n");
    int jump_res = jumpSearch(arr_for_linear, 1000000, 7777);
    printf("7777th element in array_for_linear is %d\n", jump_res);
    return 0;
}