#include <math.h>

void reverse_array(int* array, int array_size) {
    if (array_size <= 1) {
        return;
    }  
    else {
        int temp = array[0];
        array[0] = array[array_size-1];
        array[array_size-1] = temp; 
        reverse_array(array+1, array_size-2);
    }
}
