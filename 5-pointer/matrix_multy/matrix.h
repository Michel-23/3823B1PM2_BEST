#include <stdlib.h>
#include <math.h>

int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
    if (aN!=bM) return NULL;
    int* otv = (int*)malloc(aM*bN*sizeof(int));
    for (int r=0;r<aM*bN;r++){
        otv[r]=0;
    }
    for (int k=0;k<aM*bN;k++)
    {
        for (int i=0;i<aN;i++){
            otv[k]+=A[aN*(k/aM)+i] * B[i*bN+(k%bN)];
        }
    }
    return otv;
}
