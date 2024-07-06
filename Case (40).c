#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M);
    
    int tas[N];
    for (int i = 0; i < N; i++) {
        scanf("%d", &tas[i]);
    }
    
    int dikeluarkan[M];
    for (int i = 0; i < M; i++) {
        scanf("%d", &dikeluarkan[i]);
    }
    
    int maxNumber = -1;
    for (int i = 0; i < N; i++) {
        int isDikeluarkan = 0;
        for (int j = 0; j < M; j++) {
            if (tas[i] == dikeluarkan[j]) {
                isDikeluarkan = 1;
                break;
            }
        }
        if (!isDikeluarkan && tas[i] > maxNumber) {
            maxNumber = tas[i];
        }
    }
    
    printf("Maximum number is %d\n", maxNumber);
    
    return 0;
}
