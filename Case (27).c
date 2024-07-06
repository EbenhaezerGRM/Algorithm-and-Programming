#include <stdio.h>

int main(){
    int T, X;
    scanf("%d", &T);

    for(int i = 0; i < T; i++){
        scanf("%d", &X);

        for (int a = 0; a < X; a++) {
            for (int b = 0; b < X - a - 1; b++) {
                printf(" ");
            }
            for (int c = 0; c < 2 * a + 1; c++) {
                printf("*");
            }
            printf("\n");
        }
    }
    return 0;
}