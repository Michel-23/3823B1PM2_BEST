#include <math.h>

char robot_move(int xs[], int ys[], int num_points, double area_radius, int xt, int yt){
    for (int i=0;i<num_points;i++){
        double okresnost=sqrt(pow((xt-xs[i]),2) + pow((yt-ys[i]),2));
        if (okresnost<=area_radius) return 1;
    }
    for (int t=1;t<num_points;t++){
        for (int g=1;g<t;g++){
            int raznica_x = fabs(xs[t]-xs[t-g]); //если =0, то идем по оси оу. разница между двумя элементами
            int raznica_y = fabs(ys[t]-ys[t-g]); //если =0, то идем по оси ох
            if (raznica_x==0){ //идем по оу
                for (int s=1;s<raznica_y;s++){
                    int new_x=xs[t]; //по х всегда 0
                    int new_y=fmin(ys[t],ys[t-g])+s; //идем от минимального до разницы по у с шагом 1
                    double okresnost=sqrt(pow((xt-new_x),2) + pow((yt-new_y),2)); // новая окресность от новых точек
                    if (okresnost<=area_radius) return 1;
                }
            }
            if (raznica_y==0){ //идем по ох
                for (int s=1;s<raznica_x;s++){
                    int new_y=ys[t]; //по у всегда 0
                    int new_x=fmin(xs[t],xs[t-g])+s; //идем от минимального до разницы по х с шагом 1
                    double okresnost=sqrt(pow((xt-new_x),2) + pow((yt-new_y),2)); // новая окресность от новых точек
                    if (okresnost<=area_radius) return 1;
                }
            }
            else{
                for (int s=1;s<raznica_y;s++){
                    if ((xs[t]<xs[t-g]) && (ys[t]<ys[t-g])){ //выбираем диагональ во 2 четверти
                        int new_x=xs[t]+s; //двигаемся по прямой ох с шагом 1
                        int new_y=ys[t]+s; //сдвигаем на 1 ><
                        double okresnost=sqrt(pow((xt-new_x),2) + pow((yt-new_y),2)); // новая окресность от новых точек
                        if (okresnost<=area_radius) return 1;
                    }
                    if ((xs[t]<xs[t-g]) && (ys[t]>ys[t-g])){ //выбираем диагональ в 3 четверти NO
                        int new_x=xs[t]+s; //двигаемся по прямой ох с шагом 1
                        int new_y=ys[t]-s; //сдвигаем на 1 >< ???????????????? какой волк, волка кормят, а я сам себе покупаю
                        double okresnost=sqrt(pow((xt-new_x),2) + pow((yt-new_y),2)); // новая окресность от новых точек
                        if (okresnost<=area_radius) return 1;
                    }
                    if ((xs[t]>xs[t-g]) && (ys[t]<ys[t-g])){ //выбираем диагональ в 1 четверти
                        int new_x=xs[t]-s; //двигаемся по прямой ох с шагом 1
                        int new_y=ys[t]+s; //сдвигаем на 1 ><
                        double okresnost=sqrt(pow((xt-new_x),2) + pow((yt-new_y),2)); // новая окресность от новых точек
                        if (okresnost<=area_radius) return 1;
                    }
                    if ((xs[t]>xs[t-g]) && (ys[t]>ys[t-g])){ //выбираем диагональ в 4 четверти
                        int new_x=xs[t]-s; //двигаемся по прямой ох с шагом 1
                        int new_y=ys[t]-s; //сдвигаем на 1 ><
                        double okresnost=sqrt(pow((xt-new_x),2) + pow((yt-new_y),2)); // новая окресность от новых точек
                        if (okresnost<=area_radius) return 1;
                    }
                }
            }
        }
    }
    return 0; //POBEDA
}