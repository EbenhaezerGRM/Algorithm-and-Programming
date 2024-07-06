#include <stdio.h>

int main(){
    int A, B, C, D;
    int A1, B1, C1, D1;
    int A2, B2, C2, D2;

    scanf("(%d+%d)x(%d-%d)\n", &A, &B, &C, &D);
    scanf("(%d+%d)x(%d-%d)\n", &A1, &B1, &C1, &D1);
    scanf("(%d+%d)x(%d-%d)", &A2, &B2, &C2, &D2);

    printf("%d", (A+B)*(C-D));
    printf(" %d", (A1+B1)*(C1-D1));
    printf(" %d\n", (A2+B2)*(C2-D2));
    

    return 0;
}