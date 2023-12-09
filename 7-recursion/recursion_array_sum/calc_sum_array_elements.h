#include <math.h>

int fun(int* array, int array_size){
    if (array_size==0) return array[0];
    else{
        return array[array_size]+fun(array,array_size-1);
    }
}
 

double calc_sum_elements(int* array, int array_size){
    if (array_size<=0) return -1.0;
    else{
        return fun(array, array_size-1);
    }
}
