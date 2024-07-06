#include <stdio.h>

int main() {
    double A, B, percentage;

    scanf("%lf %lf", &A, &B);

    percentage = B/A*100;

    printf("%.4lf%%\n", percentage); 
    
    return 0;
}
