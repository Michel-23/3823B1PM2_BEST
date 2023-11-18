#include <math.h>

unsigned long long pack_ull(unsigned char arr[], int size){
    if (size>8) return 0;
    unsigned long long* new = (unsigned long long*) arr;
    
    return *new;
}

unsigned char unpack_ull(unsigned long long input){
    return 5;
}