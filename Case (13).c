#include <stdio.h>
#include <math.h>

int main(){
    double N; 
    double pos;

    scanf("%lf",&N);
    getchar();

    pos = pow(2, N);

    printf("%.0lf\n", pos - 1);

    return 0;
}