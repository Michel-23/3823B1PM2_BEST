#include <math.h>
#include <string.h>

double convert(char num[]) {
    double result = 0.0; // будет содержать итоговое значение числа
    int nomer = 0; // сколько десятичных знаков обработано
    int znak = 1; // знак числа
    int i = 0; // для перебора символов

    if (num[0] == '-') { // если первый символ - то знак -
        znak = -1;
        i++; // идем дальше
    }

    for (i; num[i] != '\0'; i++) { // перебираем до последнего
        if (num[i] == '.') {
            nomer = 1; // чтобы начать обрабатывать дробную часть числа
        }
        else {
            int cifra = num[i] - '0'; // символ интерпретируется как цифра
            if (nomer) {
                result = result + (double)cifra / pow(10, nomer); // представление вещественной части числа (после точки)
                nomer++;
            }
            else {
                result = result * 10 + cifra; // типичное составление целочисленного числа
            }
        }
    }
    return result * znak;
}
