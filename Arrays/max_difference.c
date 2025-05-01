#include <stdio.h>
#include <limits.h>

#include "array_utils.h"

int max_difference(int array[], int size_of_array)
{
    if (size_of_array)
    {
        int min_pos = 0;
        int max_difference = INT_MIN;
        for (int offset = 0; offset < size_of_array; offset++)
        {
            if (array[offset] < array[min_pos])
            {
                min_pos = offset;
            }
            else if (array[offset] - array[min_pos] > max_difference)
            {
                max_difference = array[offset] - array[min_pos];
            }
        }
        return (max_difference == INT_MIN) ? -1 : max_difference;
    }

    return (-1);
}

int main()
{

    int arr[10] = {2, 3, 6, 8, 10, 1, 5, 12};
    printf("============\n");
    printf("Source_array:\n");
    print_array(arr, 10);

    printf("the max differnce in the array is:%d\n", max_difference(arr, 10));
}
