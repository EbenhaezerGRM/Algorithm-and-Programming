#include <stdio.h>

int main() {
    char N1[100], N2[100];
    double T1, T2;
    int U1, U2;

    scanf("%s %lf %d", N1, &T1, &U1);
    printf("Name 1: %s\n", N1);
    printf("Height 1: %.2lf\n", T1);
    printf("Age 1: %d\n", U1);


    scanf("%s %lf %d", N2, &T2, &U2); 
    printf("Name 2: %s\n", N2);
    printf("Height 2: %.2lf\n", T2); 
    printf("Age 2: %d\n", U2);

    return 0;
}


