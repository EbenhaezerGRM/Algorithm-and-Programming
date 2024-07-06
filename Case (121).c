#include <stdio.h>

int main(){
    int T;
    int N;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        
        scanf("%d", &N);
        char S[N];

        for(int j = 0; j < N; j++){
            scanf("%s", &S[j]);
        }
        printf("%c", S[N]);

        
    }

    return 0;
}