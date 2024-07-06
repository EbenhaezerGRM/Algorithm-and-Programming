#include <stdio.h>

int main() {
    double N;
    double hit = 0;
    double previousHit = 0;

    scanf("%lf", &N);

    for (int i = 1; i <= N; i++) {
        hit = previousHit + 100 + 50 * (i - 1);
        previousHit = hit;
    }
    printf("%.0lf\n", hit);

    return 0;
}