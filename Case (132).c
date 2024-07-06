#include <stdio.h>

int main(){
    int T;
    double A[2], B[4], C[4], D[2];

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%lf %lf %lf %lf", &A[i], &B[i], &C[i], &D[i]);
        printf("%.2lf\n", ((A[i]/1)*2) + ((B[i]/2)*4) + ((C[i]/3)*4) + ((D[i]/4)*2));
    }  
    return 0;
}