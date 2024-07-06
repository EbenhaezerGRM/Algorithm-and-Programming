//OK

//Version 1
#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    int N;
    for(int i = 0; i < T; i++){

        scanf("%d", &N);
        int punya[N];
        int butuh[N];
        
        for(int j = 0; j < N; j++){
            scanf("%d", &punya[j]);
        }

        for(int j = 0; j < N; j++){
            scanf("%d", &butuh[j]);
        }
        
        printf("Case #%d:", i+1);
        for(int k = 0; k < N; k++){
            printf(" %d", punya[k] - butuh[k]);
        }
        printf("\n");
    }

    return 0;
}
