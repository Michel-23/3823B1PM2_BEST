#include <math.h>

int find_bin_pattern(int n){
    char bin[32];
    int find_bin_pattern=0;
    for (int i=31;i>=0;i--){
        bin[i]=(n & 1) + '0';
        n>>=1;
    }
    for (int i=0;i<=29;i++){
        if (bin[i]=='1' && bin[i+1]=='0' && bin[i+2]=='1'){
            find_bin_pattern++;
        }
    }
    return find_bin_pattern;
}