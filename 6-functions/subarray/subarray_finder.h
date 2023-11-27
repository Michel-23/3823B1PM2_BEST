#include <math.h>

int find_subarray(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3){
    int i=0;
    for (i = 0; i<=array_size - array_size;i++){
        int j=0;
        for (j=0;j<array_size;j++){
            if (array[i+j] != array[j])
                break;
        }
        if (j==array_size) 
            return i;
    }
    return -1;
}

int find_subarra(int* array, int array_size, int* subarray1, int subarray_size1, int* subarray2, int subarray_size2, int* subarray3, int subarray_size3) {
    int k = -1, p = -1, m = -1;

    for (int i = 0; i <= array_size - subarray_size1; i++) {
        int j = 0;
        for (j = 0; j < subarray_size1; j++) {
            if (array[i + j] != subarray1[j])
            break;
        }
        if (j == subarray_size1) {
            k = i;
            break;
        }
    }

    for (int i = 0; i <= array_size - subarray_size2; i++) {
        int j = 0;
        for (j = 0; j < subarray_size2; j++) {
            if (array[i + j] != subarray2[j])
            break;
        }
        if (j == subarray_size2) {
            p = i;
            break;
        }
    }

    for (int i = 0; i <= array_size - subarray_size3; i++) {
        int j = 0;
        for (j = 0; j < subarray_size3; j++) {
            if (array[i + j] != subarray3[j])
            break;
        }
        if (j == subarray_size3) {
            m = i;
            break;
        }
    }

    return k + p + m;
}
