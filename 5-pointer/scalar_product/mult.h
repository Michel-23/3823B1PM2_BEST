#include <stdio.h>
#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    double pi=3.1415;
    int ab=0;
    double len_a=0.0;
    double len_b=0.0;
    double len_a_len_b=0.0;
    double otv=0.0;
    for (int i=0;i<size;i++){
        ab+=vec1[i]*vec2[i];
        len_a+=vec1[i]*vec1[i];
        len_b+=vec2[i]*vec2[i];
    }
    len_a_len_b=sqrt(len_a * len_b);
    otv=ab/len_a_len_b;
    otv=acos(otv);
    otv=otv*180/pi;
    return (int)otv;
}
