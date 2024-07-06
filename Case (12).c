#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);

    for(int caseNum = 1; caseNum <= T; caseNum++){
        long long int N, M;
        scanf("%lld %lld", &N, &M);
        
        long long int C[N]; 

        for (int i = 0; i < N; i++) {
            scanf("%lld", &C[i]);
        }

        long long int minPrice = C[0];
        for(int i = 1; i < N; i++) {
            if(C[i] < minPrice) {
                minPrice = C[i];
            }
        }

        long long int maxCandies = M / minPrice;
        printf("Case #%d: %lld\n", caseNum, maxCandies);
    }

    return 0;
}
