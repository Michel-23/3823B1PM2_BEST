#include <math.h>

void get_max_min(int* array, int size, int* pMax, int* pMin){
    if (size <= 0) {
        return; // Ошибка: размер массива должен быть положительным числом
    }

    *pMax = *pMin = array[0]; // Инициализируем максимум и минимум первым элементом массива

    for (int i = 1; i < size; i++) {
        if (array[i] > *pMax) {
            *pMax = array[i]; // Обновляем максимум
        }
        if (array[i] < *pMin) {
            *pMin = array[i]; // Обновляем минимум
        }
    }
}
