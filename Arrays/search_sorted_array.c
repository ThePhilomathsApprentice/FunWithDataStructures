#include <stdio.h>
#include <stdbool.h>

#include "array_utils.h"

int search_last_occurence_sorted_array(int array[], __uint32_t size_of_array, int number_to_search)
{

    if (size_of_array)
    {
        int left = 0;
        int right = size_of_array - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if ((mid == (size_of_array - 1) || array[mid + 1] > number_to_search) &&
                (array[mid] == number_to_search))
            {
                return mid;
            }
            else if (array[mid] < number_to_search)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return -1;
    }
    return -1;
}

int search_first_occurence_sorted_array(int array[], __uint32_t size_of_array, int number_to_search)
{

    if (size_of_array)
    {
        int left = 0;
        int right = size_of_array - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if ((mid == 0 || array[mid - 1] < number_to_search) &&
                (array[mid] == number_to_search))
            {
                return mid;
            }
            else if (array[mid] < number_to_search)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return -1;
    }
    return -1;
}

bool search_sorted_array(int array[], __uint32_t size_of_array, int number_to_search)
{

    if (size_of_array)
    {
        int left = 0;
        int right = size_of_array - 1;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (array[mid] == number_to_search)
            {
                return true;
            }
            else if (array[mid] < number_to_search)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        return false;
    }
    return false;
}

int main()
{

    int arr[10] = {0, 0, 1, 3, 7, 12, 13, 15, 16, 19};
    printf("============\n");
    printf("Source_array:\n");
    print_array(arr, 10);

    int number_to_search = 12;
    printf("The Number %d is %sPresent in the Array.\n",
           number_to_search, search_sorted_array(arr, 10, number_to_search) ? "" : "NOT ");

    number_to_search = 10;
    printf("The Number %d is %sPresent in the Array.\n",
           number_to_search, search_sorted_array(arr, 10, number_to_search) ? "" : "NOT ");
    number_to_search = 0;
    printf("The Number %d is %sPresent in the Array.\n",
           number_to_search, search_sorted_array(arr, 10, number_to_search) ? "" : "NOT ");
    number_to_search = 1001;
    printf("The Number %d is %sPresent in the Array.\n",
           number_to_search, search_sorted_array(arr, 10, number_to_search) ? "" : "NOT ");

    number_to_search = 0;
    printf("The first occurence of Number %d is Present in the Arra:%d.\n",
           number_to_search, search_first_occurence_sorted_array(arr, 10, number_to_search));

    printf("The last occurence of Number %d is Present in the Arra:%d.\n",
           number_to_search, search_last_occurence_sorted_array(arr, 10, number_to_search));

    printf("The total occurence of Number %d is :%d.\n",
           number_to_search,
           search_last_occurence_sorted_array(arr, 10, number_to_search) - search_first_occurence_sorted_array(arr, 10, number_to_search) + 1);
}
