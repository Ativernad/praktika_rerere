#include <stdio.h>

int main() {
    int t1, t2, t3;
    double speed, time;

    // Ввід даних
    printf("Введіть три числа (t1 t2 t3): ");
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислення сумарної швидкості
    speed = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;

    // Обчислення часу
    time = 1.0 / speed;

    // Виведення результату з округленням до 2 знаків після коми
    printf("Час: %.2f годин\n", time);

    return 0;
}