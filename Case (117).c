#include <stdio.h>

int main(){
    double L, B, H, Area;
    scanf("%lf %lf %lf", &L, &B, &H);
    Area = (B*H) + (3*B*L);
    printf("%.3lf\n", Area);
    return 0;
}