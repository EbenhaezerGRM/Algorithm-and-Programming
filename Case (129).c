#include <stdio.h>

int main(){
    int T;
    double P[3], N[3];

    scanf("%d", &T);

    for (int i = 0; i < T; i++){
        scanf("%lf %lf", &P[i], &N[i]);
        printf("%.2lf\n", P[i]/100 * N[i]);
    }
    
    return 0;
}