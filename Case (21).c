#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    double A[N];

    double sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%lf", &A[i]);
        sum += A[i];
    }
        printf("%.0lf\n", sum);
    return 0;
}