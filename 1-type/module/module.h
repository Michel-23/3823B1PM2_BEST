int get_module(int a, int b, int c) {
    int d; 
    int f;
    int s;
    d=a%c;
    f=b%c;
    s=(d*f)%c;
    return s;
}