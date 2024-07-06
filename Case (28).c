#include <stdio.h>

int main(){
    int T;
    int opt;
    char N[26];

    scanf("%d", &T);
    for(int i = 1; i <= T; i++){

        scanf("%d", &opt);

        printf("Case #%d: ", i);
        for(int j = 0; j < opt; j++){
            N[j] = 'a' + j;
            printf("%c", N[j]);
        }
        printf("\n");

    }
    return 0;
}