#include <math.h>

double fun(int k){
    if (k == 0) 
        return 0.0;
    else {
        return (fun(k-1)+1.0)/k;
    }
}

double new(int k, int t, double count){
    count += fun(t);
    if (k != t)
        return new(k, t + 1, count);
    else 
        return count;
}


double find_sum_elements_series(int k){
    double count = 0.0;
    if (k == 0)
        return 0;
    else if (k < 0)
        return -1;
    else{
        count = new(k-1, 0, count);
        return count;
    }
}
