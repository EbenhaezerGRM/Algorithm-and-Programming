#include <stdio.h>

int fibonacci(int f0, int f1, int k) {
    if (k == 0) {
        return f0;
    }
    if (k == 1) {
        return f1;
    }
    int prev1 = f0;
    int prev2 = f1;
    int result = 0;
    for (int i = 2; i <= k; i++) {
        result = prev1 + prev2;
        prev1 = prev2;
        prev2 = result;
    }
    return result;
}

int main() {
    int f0, f1, k;
    scanf("%d %d %d", &f0, &f1, &k);
    int result = fibonacci(f0, f1, k);
    printf("%d\n", result);
    return 0;
}
