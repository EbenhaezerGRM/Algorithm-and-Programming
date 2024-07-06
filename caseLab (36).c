#include <stdio.h>

int main() {
    int N1, P1, N2, P2, N3, P3, N4, P4;

    scanf("%d %d", &N1, &P1);
    scanf("%d %d", &N2, &P2);
    scanf("%d %d", &N3, &P3);
    scanf("%d %d", &N4, &P4);

    printf("$%.2f\n", P1 / (1 - N1 / 100.0));
    printf("$%.2f\n", P2 / (1 - N2 / 100.0));
    printf("$%.2f\n", P3 / (1 - N3 / 100.0));
    printf("$%.2f\n", P4 / (1 - N4 / 100.0));
    
    return 0;
}
