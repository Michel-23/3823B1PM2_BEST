long fib(int m){
    int sum=1;
    int f0=1;
    int f1=1;
    int t;
    if (m>0){
    while (m>=f1) {
    sum=sum+f1;
    t=f1;
    f1=f0+f1;
    f0=t;
    }
    return sum;
    }
    if (m<0) return -1;
}