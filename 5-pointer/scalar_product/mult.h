#include <stdio.h>
#include <math.h>

int scalar_product(int* vec1, int* vec2, int size){
    int ab=0;
    int mod_a=0;
    int mod_b=0;
    int mod_a_mod_b=0;
    int otv=0;
    for (int i=0;i<size;i++){
        for (int j=0;j<size;j++){
            printf("%d",vec1[i]);
            ab+=vec1[i]*vec2[j];
            mod_a+=sqrt(pow(i,2));
            mod_b+=sqrt(pow(j,2));
        }
    }
    //printf("%d\n",ab);
    mod_a_mod_b=mod_a+mod_b;
    otv=ab/mod_a_mod_b;
    otv=acos(otv);
    //printf("%d\n",otv);
    return otv;
}
