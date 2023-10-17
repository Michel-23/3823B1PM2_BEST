bool compare_double(double x, double y) {
    double e=0.0000000001;
    if (fabs(x-y)<e) return true;
    else return false;
}

int get_nearest_int(double x){
    if ((x-(int)x)>=0.5) return (int)x+1;
    else return (int)x;
}

double get_fractional(double x) {
    return x - floor(x);
}
