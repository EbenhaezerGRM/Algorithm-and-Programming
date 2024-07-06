#include <stdio.h>

int main(){
    int N;
    int R, H;

    scanf("%d", &N);

    for(int i = 0; i < N; i++){
        scanf("%d %d", &R, &H);
        double total = 2 * 3.14 * R * (R + H); 
        printf("Case #%d: ", i + 1);
        printf("%.2lf\n", total);

    }
    return 0;
}