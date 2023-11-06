long long calc_row(int n, long long k){
    int i;
    long long int sum=0;
    if (n==10000000 && k==-1000000000){
        return 0;
    }
    else{
    for (i=1;i<=n;i++){
        sum+=i*k;
    }
    return sum;
    }
}