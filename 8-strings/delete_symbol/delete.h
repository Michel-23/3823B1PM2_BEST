#include <math.h>
#include <string.h>

void DelSymbol1(char *str, char sym){
    int length = strlen(str);
    int index = 0;
    int newIndex = 0;
    while (index<length){
        if (str[index] != sym){
            str[newIndex] = str[index];
            newIndex++; 
        }
        index++;
    } 
    str[newIndex] = '\0';
}

