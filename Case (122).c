#include <stdio.h>

int main(){
    int P;
    int Q; 

    int tc; 
    scanf("%d", &tc);

    int N;
    for(int i = 1; i <= tc; i++){
        scanf("%d", &N);
        int angka[N];
        
        for(int j = 0; j < N; j++){
            scanf("%d", &angka[j]);
        }

        scanf("%d %d", &P, &Q);

        printf("Case #%d : ", i);
        if(angka[P-1] > angka[Q-1]){
            printf("Bibi");
        }
        else if(angka[P-1] < angka[Q-1]){
            printf("Lili");
        }
        else{
            printf("Draw");
        }
        printf("\n");
    }

    return 0;
}