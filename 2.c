#include <stdio.h>

// Функція для обчислення НСД (Найбільшого спільного дільника)
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Функція для обчислення НСК двох чисел
int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int main() {
    int p;
    printf("Введіть кількість чисел: ");
    scanf("%d", &p);

    int nums[20];
    printf("Введіть %d натуральних чисел: ", p);
    for (int i = 0; i < p; i++) {
        scanf("%d", &nums[i]);
    }

    int result = nums[0];
    for (int i = 1; i < p; i++) {
        result = lcm(result, nums[i]);
    }

    printf("Найменше спільне кратне: %d\n", result);
    return 0;
}