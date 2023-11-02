#include <math.h>

char count_max_digit(long long int){
    int x;
    int elem;
    int max_elem=0;
    int c=0;
    while (x>0){
        elem=x%10;
        if (elem>max_elem){
            max_elem=elem;
            c=1;
        }
        else if (elem==max_elem){
            c++;
        }
        x=x/10;
    }
    return c;
}