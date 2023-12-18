#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>

void write_smile(char filename[] /*имя файла*/, char smile_names[] /*строка с названиями смайликов*/){
    int len = strlen(smile_names); // переменная для хранения длины строки !!!
    char str[50]; 
    for (int i = 0; i < 50; i++)
        str[i] = '0'; // занулили
    FILE* fl; // указатель на файл 
    fl = fopen(filename, "w"); // открытие файла для записи
    int k = 0;
    for (int i = 0; i < len; i ++){ // цикл для обработки каждого символа в строке
        if (smile_names[i] != ','){ // если символ, который нам дали не ,
            str[k] = smile_names[i]; // то копируй его в новую созданную строку
            k ++; 
        }
        if ((smile_names[i] == ',') || (i == len - 1) /*последний символ*/){ 
            i ++;
            str[k] = '\0'; // массив завершен
            if (strcmp(str, "smile") == 0){ // если символ в строке и строчка smile идентичны
                fputc('(', fl); // записывается этот смайлик
                fputc('n', fl);
                fputc('_', fl);
                fputc('n', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "uh...oh") == 0){
                fputc('(', fl);
                fputc('.', fl);
                fputc('_', fl);
                fputc('.', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "ouch") == 0){
                fputc('(', fl);
                fputc('>', fl);
                fputc('_', fl);
                fputc('<', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "happy") == 0){
                fputc('(', fl);
                fputc('^', fl);
                fputc('_', fl);
                fputc('^', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "happier") == 0){
                fputc('*', fl);
                fputc('(', fl);
                fputc('^', fl);
                fputc('o', fl);
                fputc('^', fl);
                fputc(')', fl);
                fputc('*', fl);
            }
            else if (strcmp(str, "sad") == 0){
                fputc('(', fl);
                fputc('!', fl);
                fputc('_', fl);
                fputc('!', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "bored") == 0){
                fputc('(', fl);
                fputc('=', fl);
                fputc('_', fl);
                fputc('=', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "serious") == 0){
                fputc('(', fl);
                fputc('o', fl);
                fputc('_', fl);
                fputc('o', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "wink") == 0){
                fputc('(', fl);
                fputc('-', fl);
                fputc('_', fl);
                fputc('o', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "i messed it up") == 0){
                fputc('(', fl);
                fputc('-', fl);
                fputc('_', fl);
                fputc('-', fl);
                fputc(':', fl);
                fputc(')', fl);
            }
            else if (strcmp(str, "jealous") == 0){
                fputc('8', fl);
                fputc('(', fl);
                fputc('>', fl);
                fputc('_', fl);
                fputc('<', fl);
                fputc(')', fl);
                fputc('8', fl);
            }
            else if (strcmp(str, "i love it") == 0){
                fputc('(', fl);
                fputc('*', fl);
                fputc('-', fl);
                fputc('*', fl);
                fputc(')', fl);
            }
            
            k = 0;
            
        }
    }
    fclose(fl);
}
