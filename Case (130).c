#include <stdio.h>

int main(){
    int T;
    int N, M;

    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d %d", &N, &M);
        printf("Case #%d:\n", i);

        for (int a = 0; a < N; a++){
            for (int b = 0; b < M; b++){
                if (a == 0 || a == N - 1 || b == 0 || b == M - 1){
                    printf("#");
                } 
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
    return 0;
}