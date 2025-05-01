#include <stdio.h>

void print_array(int array[], int size_of_array)
{
    for (int offset = 0; offset < size_of_array; offset++)
    {
        printf("[%d](%d) ", offset, array[offset]);
    }
    printf("\n");
    printf("============\n");
}

int max(int a, int b){
    return (a>b?a:b);

}