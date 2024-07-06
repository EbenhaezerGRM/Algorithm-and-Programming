#include <stdio.h>

int main(){
    int T;
    double A[3], B[3];

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%lf %lf", &A[i], &B[i]);
        printf("%.2lf\n", B[i]*A[i]/360);
    }

    return 0;
}