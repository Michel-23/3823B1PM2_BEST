#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double delmat(int* mat, int size) {
     if (size == 4)
          return mat[0] * mat[3] - mat[1] * mat[2];
     if (size == 9)
          return mat[0]*mat[4]*mat[8]+ mat[6]*mat[1]*mat[5] + mat[3]*mat[7]*mat[2]-mat[6]*mat[4]*mat[2]-mat[0]*mat[7]*mat[5]-mat[3]*mat[1]*mat[8];
}

double kramer_method(int* matrix, int* vector, int size){
     int del=0;
     int sq = size*size;
     
     int* x = (int*) malloc(sq*sizeof(int));
     for (int i=0;i<sq;i++){
          x[i]=matrix[i];
     }

     int* mat1 = (int*) malloc(sq*sizeof(int));
     int* mat2 = (int*) malloc(sq*sizeof(int));
     int* mat3 = (int*) malloc(sq*sizeof(int));

     for (int g=0;g<sq;g++){
          mat1[g] = matrix[g];
          mat2[g] = matrix[g];
          mat3[g] = matrix[g];
     }

     for (int g=0;g<size;g++){
          mat1[g*size] = vector[g];
          mat2[g*size+1] = vector[g];
          mat3[g*size+2] = vector[g];
     }

     del = delmat(x, sq);

     int del1=delmat(mat1, sq);
     int del2=delmat(mat2, sq);
     int del3=delmat(mat3, sq);

     if (del != 0 && size==3)
          return ((double)del1/ (double)del) + ((double)del2/ (double)del) + ((double)del3/ (double)del);
     if (del != 0 && size==2)
          return ((double)del1/ (double)del) + ((double)del2/ (double)del);
     return -1;
}