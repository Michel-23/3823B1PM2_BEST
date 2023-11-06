#include <math.h>

int num_invers(int num){
    int m;
    if (num<=0) return 0;
    m=num%10;
    num=num/10;
    while (num>0){
        m=m*10+num%10;
        num=num/10;
    }
    return m;
}