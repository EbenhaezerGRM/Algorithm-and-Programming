#include <stdio.h>

int main(){
    int P, M, U;
    double damage;
    scanf("%d %d %d", &P, &M, &U);
    damage = (P*0.2 + M*0.3 + U*0.5);
    printf("%.2lf\n", damage);
    return 0;
}