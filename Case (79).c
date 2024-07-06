#include <stdio.h>

int main(){
    int N;
    int T;

    scanf("%d", &T);
    for(int i = 1; i <= T; i++){

        scanf("%d", &N);
        getchar();
        double A[N];

        double sum = 0;
        for(int j = 0; j < N; j++){
            scanf("%lf", &A[j]);
            getchar();
            sum += A[j];
        }
            printf("Case #%d: ", i);
            printf("%.0lf\n", sum);
    }

    return 0;
}