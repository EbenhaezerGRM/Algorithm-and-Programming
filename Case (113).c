#include <stdio.h>

int main(){
    long long int T; //sample test
    long long int N; //banyaknya rumah

    scanf("%lld", &T);

    for(int i = 0; i < T; i++){
        scanf("%lld", &N);
        long long int R[N]; //rumah ke-i

        long long int diff = 0;
        for(int j = 0; j < N; j++){
            scanf("%lld", &R[j]);
        }

        for(int k = 0; k < N; k++){
            diff = R[k] - R[k+1];
            printf("%lld\n", diff);
        }
    }
    return 0;
}