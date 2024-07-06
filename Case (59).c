#include <stdio.h>

int main(){
    double d, s, t;
    scanf("%lf %lf %lf", &d, &s, &t);

    if(d >= s && d >= t){
        printf("Daging\n");
        if(s >= t){
            printf("Sayur\n");
            printf("Telur\n");
        }
        else{
            printf("Telur\n");
            printf("Sayur\n");
        }
    }

    else if(s >= d && s >= t){
        printf("Sayur\n");
        if(d >= t){
            printf("Daging\n");
            printf("Telur\n");
        }
        else{
            printf("Telur\n");
            printf("Daging\n");
        }
    }

    else{
        printf("Telur\n");
        if(d >= s){
            printf("Daging\n");
            printf("Sayur\n");
        }
        else{
            printf("Sayur\n");
            printf("Daging\n");
        }
    }

    return 0;
}