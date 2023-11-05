#include <math.h>

char count_max_digit(long long int number){
    long long int max = 0;
    long long int ostatok = 0;
    long long int del = number;
    long long int lelll= number;

    if (number<0){
        int num = number*(-1);
        del = num;
        lelll= num;
    }

    while (lelll!=0){
        ostatok = lelll%10;
        if (ostatok > max){
            max = ostatok;
    }
    lelll = lelll / 10;
    }

    int c=0;

    while (del!=0){
        int chislo = del%10;
        if (chislo == max){
            c++;
    }
    del = del/10;
    }

    return c;
}