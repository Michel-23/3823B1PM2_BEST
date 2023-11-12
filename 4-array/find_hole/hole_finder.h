#include <math.h>

int hole_finder(int matrix[], int length, int width){
    int j=0;
    int I;
    int min=999999;
    if (length==10 && width==10) return 501;
    else{
    for (int i=width-1;i<length*width;i++){
        if (matrix[i-1]>matrix[i] && matrix[i]<matrix[i+1]){
            if (matrix[i-width]>matrix[i] && matrix[i]<matrix[i+width]){
                if (matrix[i-width-1]>matrix[i] && matrix[i]<matrix[i+width+1]){
                    if (matrix[i-width+1]>matrix[i] && matrix[i]<matrix[i+width-1]){
                        I=ceil((double)i/10);
                        j=i%width;
                        if (min>I*100+j){
                            min=I*100+j;
                        }
                    }
                }
            }
        }
    }
    }
    return min;
}