#include <stdio.h>

int main(){
    int T;        
    long long int N; 
    long long int M; 
    long long int A; 

    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%lld %lld %lld", &N, &M, &A);
        
        long long int P[N];

        for(int j = 0; j < N; j++){
            
            scanf("%lld", &P[j]);

            if(P[j] > A && P[j] <= M){
                A = P[j];
            }
        }
        printf("Case #%d: ", i);
        printf("%lld\n", A);
    }
    return 0;
}