#include <stdio.h>

int main(){
    double X;
    double Y, saving;
    scanf("%lf %lf", &X, &Y);
    
    for(int i = 0; i < 3; i++){
        X = X + X * Y/100;
        saving = X;
    }
    printf("%.2lf\n", saving);

    return 0;
}