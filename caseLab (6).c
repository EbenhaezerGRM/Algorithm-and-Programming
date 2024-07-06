#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    int hargaAwal[N];

    for(int i = 0; i < N; i++){
        scanf("%d", &hargaAwal[i]);
    }

    int Q;
    scanf("%d", &Q);

    int index[Q];
    int harga[Q];

    for(int i = 0; i < Q; i++){
        scanf("%d %d", &index[i], &harga[i]);
        
        printf("Case #%d:", i + 1);
        for(int j = 0; j < N; j++){
            hargaAwal[index[i] - 1] = harga[i];
            printf(" %d", hargaAwal[j]);
        }
        printf("\n");
    }

    return 0;
}