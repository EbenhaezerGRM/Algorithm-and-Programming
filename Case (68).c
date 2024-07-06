//Daging    = 1
//Sayur     = 2
//Telur     = 3

#include <stdio.h>

int main(){
    char d, s, t;
    scanf("%c %c %c", &d, &s, &t);

    if(d <= s && d <= t){
        printf("1 ");
        if(s <= t){
            printf("2 3\n");
        }
        else{
            printf("3 2\n");
        }
    }

    else if(s <= d && s <= t){
        printf("2 ");
        if (d <= t){
            printf("1 3\n");
        }
        else{
            printf("3 1\n");
        }
    }

    else{
        printf("3 ");
        if(d <= s){
            printf("1 2\n");
        }
        else{
            printf("2 1\n");
        }
    }

    return 0;
}