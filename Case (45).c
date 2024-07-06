#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);

    while (0 <= M) {
        printf("%d\n", N++);
        M--;
    }

    return 0;
}