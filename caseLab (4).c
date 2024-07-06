#include <stdio.h>

int main(){
    int T;
    long int N, M;

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        scanf("%ld %ld", &N, &M);
        printf("Case #%d: ", i);

        if((N * M) &1){
            printf("Need more frogs\n");
        }
        else{
            printf("Party time!\n");
        }
    }

    return 0;
}