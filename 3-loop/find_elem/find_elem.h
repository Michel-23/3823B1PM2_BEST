#include <math.h>

int find_elem(int left, int right, int number, int max_iter){
    int i = 0; //Счётчик итераций
    while ((right-left)!=0){
        if (number<((right-left)/2)){
            right=((right-left)/2);
        }
        else{
            left=((right-left)/2);
        }
        i++;
    }
    if ((right-left)==0){
        number=right;
    }


    return i; //НЕ МЕНЯТЬ!
}