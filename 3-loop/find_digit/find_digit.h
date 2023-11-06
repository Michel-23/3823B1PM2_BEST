#include <math.h>

char find_digit(double number, char digit){
    if (digit>9 || digit <=0) return -1;
    long int a = (long int)number;
    double b = number - a;

    int pos=0;
    int k=0;

    while (a>0){
        int v = a %10;
        a/=10;

        if (pos==0 && v==digit){
            pos=k;
        }
        k++;
    }
    if(pos > 0)
    pos=k-pos;

    int k2 = 0;

    while (b>0 && (pos==0)){
        k2++;
        b = b*10;

        int v = (int)(b);
        b = b - v;
        if(pos==0 && v == digit){
            pos = k2 + k+1;
    }
    }
    return pos;
}