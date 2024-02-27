#include <stdio.h>
int main() {
    int x, y;
    long long result = 1;
    // Ввод числа и степени 
    printf("Введите число: ");
    scanf_s ("%d", &x);
    printf("Введите степень: ");
    scanf_s ("%d", &y);
    // Вычисление результата
    for (int i = 0; i < y; i++)
    {
        result /= x;
    }
    //Вывод результата
    printf("%d в степени %d равно %d\n", x, y, result);
    result /= 2;
    printf("результат, Уменьшенный в 2: %d\n", result);

    return 0;
}