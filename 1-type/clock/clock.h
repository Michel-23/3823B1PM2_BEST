int get_time(long long angle) {
    int h,m,m1,s;
    if (angle<360){
        s=angle/6;
    }
    if (angle>360 && angle<21600){
        s=angle/6;
        m=int(s/60);
        s=s-(m*60);
    }
    if (angle>21600){
        h=angle/21600;
        m1=angle-(h*21600);
        m=m1/360;
        s=m1-m;
    }
    return (h*10000+m*100+s);
}