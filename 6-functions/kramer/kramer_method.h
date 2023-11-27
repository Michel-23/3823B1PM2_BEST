#include <stdio.h>
#include <math.h>

double delmat(int* matrix, int* vector, int size, int rasp) { // делает новые определители
     int sq = sqrt(size); // 4->2 9->3
     int mat[size]; // создание нового массива

     for (int i = 0; i < size; i++){
          mat[i] = matrix[i]; // присваивание начений из matrix
     }

     for (int i = 0; i < sq; i++) { // 
          mat[rasp /*номер столбца*/+sq*i] = vector[i]; // сама замена поэлементно 
     }

     if (size == 4)
          return mat[0] * mat[3] - mat[1] * mat[2];
     if (size == 9)
          return mat[0]*mat[4]*mat[8]+ mat[6]*mat[1]*mat[5] + mat[3]*mat[7]*mat[2]-mat[6]*mat[4]*mat[2]-mat[0]*mat[7]*mat[5]-mat[3]*mat[1]*mat[8];
}

double kramer_method(int* matrix, int* vector, int size){
     int del=0;
     int sq = sqrt(size);

     double x[] = {0,0,0,0};

     if (size==4)
          del = matrix[0] * matrix[3] - matrix[1] * matrix[2];
     else
          del = matrix[0]*matrix[4]*matrix[8]+ matrix[6]*matrix[1]*matrix[5] + matrix[3]*matrix[7]*matrix[2]-matrix[6]*matrix[4]*matrix[2]-matrix[0]*matrix[7]*matrix[5]-matrix[3]*matrix[1]*matrix[8];

     for (int i = 0; i < sq; i++) {
          x[i] = delmat(matrix, vector, size, i);
     }

     if (del != 0)
          return (x[0]/del) + (x[1]/del) + (x[2]/del);
     return -1;
}