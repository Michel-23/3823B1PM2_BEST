#include <math.h>

double integral(double a, double b, double c, double left, double right){
    double fp=(a*right*right*right/3)+(b*right*right/2)+c*right;
    double fl=(a*left*left*left/3)+(b*left*left/2)+c*left;
    return fp-fl;
}