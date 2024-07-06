#include <stdio.h>

int main() {
    double A, B, persentase;
    scanf("%lf %lf", &A, &B);
    persentase = ((A - B) / A) * 100;
    printf("%.2lf%%\n", persentase);
    return 0;
}
