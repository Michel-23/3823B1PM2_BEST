#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isDigit(char c) { // принимает символ c и возвращает true, если символ - цифра, иаче false
    return (c >= '0' && c <= '9');
}

int calculate_expression(char expression[]) { // принимает массив символов expression 
    int length = strlen(expression); // переменная для хранения длины строки 
    int value = 0; // переменная для хранения результата выражение (будущий ответ)
    int sign = 1; // переменная знака числа
    int num = 0; // переменная числа
    int index = 0; // переменная для отслеживания текущей позиции в строке

    while (index < length) { // идем по массиву
        if (expression[index] == '+' || expression[index] == '-') { // если индекс + или - 
            if (expression[index] == '+'){
                sign = 1;
            }
            else{
                sign = -1;
            }
            index++;
        }

        if (! isDigit(expression[index])) { // если следующий символ не число
            return -1;
        }

        num = 0; // для накопления числа
        while (index < length && isDigit(expression[index])) {
            num = num * 10 + (expression[index] - '0' /*из символа в число*/);
            index++;
        }

        value += (sign * num);
    }

    return value;
}
