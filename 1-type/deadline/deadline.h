#include <math.h>

int get_score(short score, int start, int stop, int now) {
    int a=score; //полная стоимость
    int b=start; //дедлайн
    int c=stop; //дедлайн через какое-то время
    int d=now; //момент,когда сдается задача
    int megdudedl;
    double ravnoub;
    double t;
    if (d<=b) return score;
    else if ((b<d) && (d<c)){
        megdudedl=c-b;
        ravnoub=((double)a / 2) / megdudedl;
        t=d-b;
        a=ceil(a-(t*ravnoub));
        return (int)a;
        }
    else{
        return (int)ceil((double)a/2);
    }
}