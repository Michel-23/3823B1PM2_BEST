#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int a=-1;
    int c=-1;
    int k=-1;
    int t=-1;
    for (int i=0;i<array_size;i++){
        if (array[i] == array[0] && array[i+1] == array[1]){
            int a=i;
        }
        if (array[i] == subarray1[0] && array[i+1] == subarray1[1]){
            int c=i;
        }
        if (array[i] == subarray2[0] && array[i+1] == subarray2[1]){
            int k=i;
        }
        if (array[i] == subarray3[0] && array[i+1] == subarray3[1]){
            int t=i;
        }
    }
    return a+c+k+t;
}