#include <math.h>

double limit(double eps, int n_max){
    int n=0;
    double y1=10;
    double y2=0;
    while (fabs(y1-y2)>eps && n<n_max){
        n++;
        y1=y2;
        y2=n/sqrt(pow(n,2)+n);
    }
    return y2;
}