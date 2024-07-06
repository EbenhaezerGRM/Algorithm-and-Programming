#include <stdio.h>

int main(){
    long long int T;
    long long int N;
    long long int X;

    scanf("%lld", &T);
    for(int i = 1; i <= T; i++){
        scanf("%lld %lld", &N, &X);
        
        printf("Case #%d: ", i);
        long long int depan = X / 2;
        long long int belakang = (N / 2) - (X / 2);

        if(depan > belakang){
            printf("%d\n", belakang);
        }
        else{
            printf("%d\n", depan);
        }
    }
    return 0;
}