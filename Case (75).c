#include <stdio.h>

int main(){
    int T;
    double A, B, C;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%lf %lf %lf", &A, &B, &C);
        printf("Case #%d: ", i);

        if((A * B/100) >= C){
            printf("%.0lf\n", C);
        }
        else{
            printf("%.0lf\n", A * B/100);
        }
    }

    return 0;
}