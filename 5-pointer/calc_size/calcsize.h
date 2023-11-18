#include <stdio.h>
#include <math.h>

int calcsize(void* memory){
    char* mem = memory;
    int a=0;
    int b=0;
    int c=0;
    int i=0;
    while (1){
        if (mem[i]==11)
            a=i;
        if (mem[i]==47){
            b=i;
            break;
        }
        i++;
    }
    c=b-a;
    c=c+b;
    return c;
}