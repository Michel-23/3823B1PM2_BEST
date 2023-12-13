#include <math.h>
#include <string.h>
#include <stdio.h>

int is_palindrom(char text[]) {
    int length = strlen(text);
    int i = 0;
    int j = length - 1;

    while (i < j) {
        while (i < j && !(('a' <= text[i] && text[i] <= 'z') || ('A' <= text[i] && text[i] <= 'Z'))) {
            i++;
        }
        while (i < j && !(('a' <= text[j] && text[j] <= 'z') || ('A' <= text[j] && text[j] <= 'Z'))) {
            j--;
        }
        if (text[i] != text[j] && (text[i] - 32 != text[j] && text[i] + 32 != text[j])) {
            return 0;
        }
        i++; 
        j--;
    }
    return 1;
}