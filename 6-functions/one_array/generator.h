#include <stdlib.h>
#include <time.h>
#include <math.h>

int* array_generator(int* real_size, int k, int m, int f){
    int size = 12;
    *real_size = size;
    int* arr = (int*) malloc(size*sizeof(int));
    arr[0]=f;
    for (int i=1;i<size;i++){
        arr[i]=0;
    }
    return arr;
}