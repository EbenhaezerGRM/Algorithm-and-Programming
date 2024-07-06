#include <stdio.h>

int main(){
    int tc;
    scanf("%d", &tc);

    for(int i = 0; i < tc; i++){
        int N;
        scanf("%d", &N);

        printf("Case %d: ", i + 1);
        for(int j = 0; j < N; j++){
            int hasil = (j * j + j + 2) / 2;
            if(j == N - 1){
                printf("%d", hasil);
            }else{
                printf("%d ", hasil);
            }
        }
        printf("\n");
    }
    return 0;
}