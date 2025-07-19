#include <stdio.h>

int minSteps(int x, int y) {
    long long d = (long long)y - x; // Використовуємо long long для уникнення переповнення
    if (d == 0) return 0;
    if (d == 1) return 1;
    
    // Знаходимо мінімальне n, для якого ceil(n^2/4) >= d
    int n = 0;
    while ((n * n + 3) / 4 < d) {
        n++;
    }
    return n;
}

int main() {
    // Тестові приклади
    int test_cases[][2] = {{45, 48}, {45, 49}, {45, 50}, {45, 51}};
    int num_tests = sizeof(test_cases) / sizeof(test_cases[0]);
    
    for (int i = 0; i < num_tests; i++) {
        int x = test_cases[i][0];
        int y = test_cases[i][1];
        printf("x=%d, y=%d: %d\n", x, y, minSteps(x, y));
    }
    
    return 0;
}