#include <stdio.h>

int main(){
    double A[2], B[4], C[6], D[4];

    for(int i = 0; i < 3; i++){
        scanf("%lf %lf %lf %lf", &A[i], &B[i], &C[i], &D[i]);
        printf("%.2lf\n", ((A[i]/1)*2) + ((B[i]/2)*4) + ((C[i]/3)*6) + ((D[i]/4)*4));
    }  
    return 0;
}