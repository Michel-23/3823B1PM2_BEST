#include <stdbool.h>


bool is_digit(char x) {
    int y=x;
    if (x=="") return false;
    else if ((47<y) && (y<58)) return true;
    else return false; 
}

bool is_letter(char x) {
    int y=x;
    if (((96<y) && y<123) || ((64<y) && y<91)) return true;
    else return false;
}

bool is_punctuation(char x) {
    int y=x;
    if (((32<y) && (y<48)) || ((57<y) && (y<65)) || ((90<y) && (y<97)) || ((122<y) && (y<127))) return true; 
    else return false;
}

int get_ascii_code(char first, char second, char third) {
    int x=first;
    int y=second;
    int z=third;
    return 1000000*x+1000*y+z;
}