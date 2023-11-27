#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int c=-1;
    int k=-1;
    int t=-1;
    for (int i=0;i<array_size;i++){
        if ((array[i] == subarray1[0])  && (c==-1)){
            for (int j=0;j<subarray_size1;j++){
                if (i+j<array_size){
                    if (array[i+j] == subarray1[j])
                        c=i;
                    else{ 
                        c=-1;
                        break;
                    }
                }
                else c=-1;
            }
        }
        if ((array[i] == subarray2[0])  && (k==-1)){
            for (int j=0;j<subarray_size2;j++){
                if (i+j<array_size){
                    if (array[i+j] == subarray2[j])
                        k=i;
                    else{ 
                        k=-1;
                        break;
                    }
                }
                else k=-1;
            }
        }
        if ((array[i] == subarray3[0])  && (t==-1)){
            for (int j=0;j<subarray_size3;j++){
                if (i+j<array_size){
                    if (array[i+j] == subarray3[j])
                        t=i;
                    else{ 
                        t=-1;
                        break;
                    }
                }
                else t=-1;
            }
        }
    }
    return c+k+t;
}