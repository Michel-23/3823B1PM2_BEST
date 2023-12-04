#include <math.h>

int nod(int first, int second){
    if ((first<=0) || (second<=0)) 
        return -1;
    else if (first==second) 
        return first;
    else{
        int maxx=fmax(first,second);
        int minn=fmin(first,second);
        return nod(minn,maxx-minn);
    }
}
