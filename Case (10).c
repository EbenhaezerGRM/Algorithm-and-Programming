#include <stdio.h>

int main() {
    double N;
    double damage = 0;
    double previousDamage = 0;

    scanf("%lf", &N);

    for (int i = 1; i <= N; i++) {
        damage = previousDamage + 100 + 50 * (i - 1);
        previousDamage = damage;
    }
    printf("%.0lf\n", damage);

    return 0;
}