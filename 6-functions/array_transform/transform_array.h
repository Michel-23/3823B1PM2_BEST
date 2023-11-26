#include <math.h>

void transform(double* array, int size, int* comands, int comands_count){
    for (int i = 0; i < comands_count; i++) {
        if (comands[i]==1){
            for (int j = 0; j < size; j++) {
                array[j] += 1;
            }
        }
        if (comands[i]==2){
            for (int j = 0; j < size; j++) {
                array[j] = sqrt(fabs(array[j]));
            }
        }
        if (comands[i]==3){
            double sum = 0.0;
            for (int j = 0; j < size; j++) {
                sum += array[j];
            }
            double sr_arifm = sum / size;
            for (int j = 0; j < size; j++) {
                array[j] = pow(fabs(array[j]), sr_arifm);
            }
        }
        if (comands[i]==4){
            for (int j = 0; j < size; j++) {
                if ((int)array[j] % 2 == 0) {
                    array[j] = -array[j];
                } 
                else{
                    array[j] = pow(fabs((int)array[j]), -1);
                }
            }
        }
        if (comands[i]==5){
            for (int j = 0; j < size; j++) {
                if ((int)array[j] % 2 == 0 && j % 2 == 0) {
                    array[j] = 0;
                }
            }
        }
        if (comands[i]==6){
            int positive_count = 0; // переменная, отслеживающая количество положительных элементов в массиве
            for (int j = 0; j < size; j++) {
                if (array[j] > 0) {
                    positive_count++; // подсчет положительных элементов
                }
            }
            int target_count = size / 2; // сколько нам нужно положительных элементов
            int difference = target_count - positive_count; // разница между тем количеством положительных элементов, которые нужно и фактическим их количеством
            if (difference > 0) { // если фактическое количество меньше
                for (int j = 0; j < size && difference > 0; j++) { // идем по всем элементам массива, пока разница >0
                    if (array[j] <= 0) { // если элемент не положительный
                        array[j] = 1; // он становится 1
                        difference--; // разность уменьшается
                    }
                }
            } 
            else if (difference < 0) { // если фактическое количество больше
                for (int j = 0; j < size && difference < 0; j++) { // аналогично предыдущему, только наоборот
                    if (array[j] > 0) {
                        array[j] = -1;
                        difference++;
                    }
                }
            }
        }
    }
}
