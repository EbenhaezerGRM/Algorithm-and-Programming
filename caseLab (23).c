#include <stdio.h>

int main(){
    int T;
    int U;
    int A;
    double finalScore;

    scanf("%d %d %d", &T, &U, &A);
    
    finalScore = (T*0.2 + U*0.3 + A*0.5);

    printf("%.2lf\n", finalScore);

    return 0;
}