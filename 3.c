#include <stdio.h>

int main() {
    int p;
    printf("Введіть p: ");
    scanf("%d", &p);

    if (p == 0) {
        printf("0\n");
        return 0;
    }

    // dp0[i] — кількість чисел довжини i, які закінчуються 1 однаковою цифрою
    // dp1[i] — кількість чисел довжини i, які закінчуються 2 однаковими цифрами
    long long dp0[31] = {0}; // p <= 30
    long long dp1[31] = {0};

    dp0[1] = 2;  // "5", "9"
    dp1[1] = 0;

    for (int i = 2; i <= p; i++) {
        dp0[i] = dp0[i - 1] + dp1[i - 1];
        dp1[i] = dp0[i - 1];
    }

    long long result = dp0[p] + dp1[p];
    printf("%lld\n", result);

    return 0;
}