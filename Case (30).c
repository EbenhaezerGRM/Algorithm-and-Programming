#include <stdio.h>

int main(){
    int T;
    double K, N, M;
    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%lf %lf %lf", &K, &N, &M);
        printf("Case #%d: ", i);
        if(K <= (N + M)){
            printf("yes\n");
        }
        else{
            printf("no\n");
        }
    }

    return 0;
}