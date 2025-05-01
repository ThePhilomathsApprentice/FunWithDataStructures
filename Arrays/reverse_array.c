#include <stdio.h>

#include "array_utils.h"


void reverse_in_array(int source_array[], int destination_array[], int size_of_array)
{

    if (size_of_array)
    {
        for (int offset = 0; offset < size_of_array; offset++)
        {
            destination_array[offset] = source_array[size_of_array - offset - 1];
        }
        return;
    }
    return;
}

int main()
{

    int src[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int dst[10];

    printf("============\n");
    printf("Source_array:\n");
    print_array(src, 10);
    reverse_in_array(src, dst, 10);
    printf("============\n");
    printf("Source_array:\n");
    print_array(src, 10);
    printf("============\n");
    printf("Destination_array:\n");
    print_array(dst, 10);
}
