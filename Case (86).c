#include <stdio.h>

int main(){
    int T;
    int N;

    scanf("%d", &T);
    for(int i = 1; i <= T; i++){
        scanf("%d", &N);

        for(int a = 1; a <= N; a++){

            for(int b = 1; b <= N - a; b++){
                printf(" ");
            }

            for(int c = 0; c < a; c++){
                if(((a + d) % 2) == 1){
                    printf("#");
                }
                else{
                    printf("*");
                }
            }

        printf("\n");
        }
    }
    return 0;
}