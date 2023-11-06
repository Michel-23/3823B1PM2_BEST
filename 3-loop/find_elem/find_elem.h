#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 1; //Счётчик итераций
    int m=number-left;
    for (i;i<=max_iter;i++){
        if ((right+left)/2==number)
            return i*m;
        else if ((right+left)/2<number){
            left=(right+left)/2+1;
        }
        else if ((right+left)/2>number){
            right=(right+left)/2-1;
        }
    }
}