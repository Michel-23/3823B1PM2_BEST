#include <math.h>

double fun(int t, int k){
    if (k == 1) return 1.0; 
    else if (t+1 == k) return 1.0/k;
    else{ 
        return 1.0/k + fun(t, k-1);
    }
}


double sum_series(int n){
    if (n<=0) return -1.0;
    double c = 0.0;
    if (n>10000){
        for (int i=1; i < n/10000; i++){
            c += fun((i-1)*10000, i*10000);
        }
        c += fun((n/10000)*10000, n);
    }
    else{
        c += fun(0, n);
    }
    return c;
}
