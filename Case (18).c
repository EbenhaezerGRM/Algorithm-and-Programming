#include <stdio.h>

int bitOn(int x){
    int c = 0;
    while(0 < x){
        if(x % 2 == 1){
            c++;
        }
            x/=2;
    }
    return c;
}

int main(){
    int T;
    int N;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &N);
        long long int A[N];

        for(int j = 0; j < N; j++){
            scanf("%lld", &A[j]);
        }

        int a1 = 0;
        int b1 = 0;

        for(int j = 0; j < N; j++){
            for(int k = j + 1; k < N; k++){
                int temp = (A[j] ^ A[k]);

                if(bitOn(temp) >= 3){
                    a1++;
                }
                else{
                    b1++;
                }
            }
        }
        printf("Case #%d: %d %d\n", i + 1, a1, b1);
    }
    return 0;
}