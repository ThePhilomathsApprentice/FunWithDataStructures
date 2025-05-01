#include <stdio.h>
#include <limits.h>

#include "array_utils.h"

int max_subarray(int array[], int size_of_array)
{
    if (size_of_array)
    {
        int left = 0;
        int right = size_of_array - 1;
        int current_max = array[0];
        int max_sum = INT_MIN;

        for (int offset = 1; offset < size_of_array; offset++)
        {
            current_max = max(current_max + array[offset], array[offset]);
            max_sum = max(current_max, max_sum);
        }

        return max_sum;
    }
    return -1;
}

int main()
{

    int arr[10] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

    printf("============\n");
    printf("Source_array:\n");
    print_array(arr, 10);

    printf("the maximum sum in the subarray is:%d\n", max_subarray(arr, 10));
}
