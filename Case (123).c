#include <stdio.h>

int main(){
    int A;
    double T[3];

    scanf("%d", &A);

    for (int i = 0; i < A; i++){
        scanf("%lf", &T[i]);
        printf("%.2lf", 4.0/5.0*T[i]);
        printf(" %.2lf", 9.0/5.0*T[i]+32.0);
        printf(" %.2lf\n", T[i]+273.0); 

    }

    return 0;
}