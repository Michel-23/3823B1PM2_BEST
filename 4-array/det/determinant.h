/* Дана квадратная матрица и она задана в виде одномерного массива. 
Необходимо расчитать определитель для такой матрицы. 
Если вычислить определить нельзя, верните -404 */

#include <math.h>

int f(int matrix[] /*массив, представляющий матрицу*/, int size /*размер матрицы*/, int coif /*коэффициент*/){
    int opred = 0;
    int coif1 = 1;
    int count = 0;
    int cons = sqrt(size); // квадратный корень из резмера (определение длиты стороны квадратной матрицы)
    if ((sqrt(size) - (double)cons) > 0.000000000001) //???
        return -404;
    if (cons == 2){ // если матрица 2*2
        opred = matrix[0] * matrix[3] - matrix[1] * matrix[2];
        return opred * coif; // возвращение определителя, умноженного на коэффициент
        }
    
    if (cons > 2){ // если матрица больше, чем 2*2
        for (int k = 0; k < cons; k++){ // цикл, который выполняет итерацию по столбцам
            int raz = (cons - 1) * (cons - 1); // размер подматрицы
            int now[raz]; // массив для хранения подматрицы
            int w = 0; // счетчик
            for (int i = 0; i < cons; i ++){ // цикл, который выполняет итерацию по столбцам
                for (int j = 0; j < cons; j ++){
                    if ((j != k) && ((i * cons + j) >= cons)){ // ???
                        now[w] = matrix[i * cons + j];
                        w ++;
                        }
                }      
            }
            if (k % 2 == 0)
                coif1 = matrix[k];
            else 
                coif1 = (-1) * matrix[k];
            coif1 *= coif;
            count += f(now, raz, coif1);
        }
    }

    return count;
}

int determinant(int matrix[], int size){
    int rez = 0;
    int coif = 1;
    rez = f(matrix, size, coif);
    return rez;
}