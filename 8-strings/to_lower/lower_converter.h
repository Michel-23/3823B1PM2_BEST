#include <math.h>
#include <string.h>

void lower(char* str){
    for (int i=0; str[i] != '\0'; i++){
        if (str[i] >='A' && str [i] <='Z'){
            str[i] = str[i] + 32; 
        }
    } 
}
