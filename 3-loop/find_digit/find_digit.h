#include <math.h>

char find_digit(double number, char digit){
    long long int ostatok = 0;
    long long int num;
    long long int del = number;
    long long int lelll= number;
    if ((999<number) && (number<10000)){
        num=number*1000000000;
        while (num!=0){
        ostatok = num%10;
        if (ostatok == digit){
            digit=statok;
        }
        num=num/10;
    }

    int c=0;

    while (del!=0){
        int chislo = del%10;
        if (chislo == max){
            c++;
    }
    del = del / 10;
    }

    return c;
    }
}