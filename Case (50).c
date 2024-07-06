#include <stdio.h>

int main(){
    int T;
    long long int X;
    long long int P;

    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%lld %lld", &X, &P);
        
        if((X >> P) % 2 == 1){
            printf("1\n");
        }
        else{
            printf("0\n");
        }
    }
    return 0;
}