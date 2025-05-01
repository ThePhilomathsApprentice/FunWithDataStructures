#include <stdio.h>

#include "array_utils.h"


int largest_in_array(int array[], int size_of_array){

    if (size_of_array) {
        int largest = array[0];
        for (int offset=0 ; offset < size_of_array ; offset++ ) {
            if (array[offset] > largest){
                largest = array[offset];
    
            }
    
        }
        return largest;
    }
    return __INT_MAX__;

}

int main() {

    int arr[10] = {0,10,-4,7,12};
    printf("============\n");
    printf("Source_array:\n");
    print_array(arr, 10);

    printf("the largest in the array is:%d\n",largest_in_array(arr, 10));


}

