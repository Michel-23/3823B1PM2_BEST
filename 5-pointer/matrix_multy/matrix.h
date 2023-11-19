#include <stdlib.h>
#include <math.h>

//int* matrix_multy(int* A, int aM, int aN, int* B, int bM, int bN){
//    if (aN!=bM) return NULL;
//    int* otv = (int*)malloc(aM*bN*sizeof(int));
//    for (int r=0;r<aM*bM;r++){
//        otv[r]=0;
//    }
//    for (int i=0;i<aM;i++){ // ставим границу строк 1 матрицы
//        for (int j=0;j<bN;j++){ // ставим границу столбцов 2 матрицы
 //           int sum=0;
 //           for (int k=0;k<aN;k++){ // счетчик, который будет ходить по строке матрицы А и столбцу матрицы В
  //              sum+=A[i*aM+k]*B[k*bM+j];
  //          }
  //          otv[]=sum;
  //      }
 //   }
//    return otv;
//}








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
    printf("%d\n",otv[0]);
    return otv;
}
