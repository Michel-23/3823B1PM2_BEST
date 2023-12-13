#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int find_error(char filename[]) {
    FILE *file = fopen(filename, "r");
    
    char line[1000]; // объявление массива для чтения строк файла
    int line_number = 1; // для отслеживания текущей строки
    int error_found = 0; // для наличия ошибок в файле

    while (fgets(line, sizeof(line), file)) { // чтение каждой строки файла
        if (strstr(line, "if ") && !strstr(line, "if (" )) { 
            error_found = 1; // Нет скобок после if на строке
        }
        if (strstr(line, "while ") && !strstr(line, "while (" )) {
            error_found = 1; // Нет скобок после while на строке
        }
        if (strstr(line, "for ") && !strstr(line, "for (" )) {
            error_found = 1; // Нет скобок после for на строке
        }
        if (strstr(line, "if ") && !strstr(line, "{" )) {
            error_found = 1; // Нет фигурных скобок после if на строке
        }
        if (strstr(line, "while ") && !strstr(line, "{" )) {
            error_found = 1; // Нет фигурных скобок после while на строке
        }
        if (strstr(line, "for ") && !strstr(line, "{" )) {
            error_found = 1; // Нет фигурных скобок после for на строке
        }
        if (strstr(line, "int ") && !strstr(line, "int " )) {
            error_found = 1; // Нет объявления типа переменной на строке
        }
        line_number++; // увеличение номера строки
    }

    fclose(file);

    if (error_found) {
        return 1;
    } 
    else {
        return 0;
    }
}
