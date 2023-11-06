#include <math.h>
#include <stdio.h>

unsigned long long calc_e(char order){
    unsigned long long x=1;
    double n=pow(10,order);
    double e=2.718282;
    double x2=0;
    double x1=(pow(1+1.0/x,x));
    while (fabs(x2-x1)>0.000000000000000001){
        x++;
        x2=x1;
        x1=(pow(1+1.0/x,x));
        if ((int)(e*n) == (int)(x1*n)){
            x2=x1;
        }
    }
    return x;
}