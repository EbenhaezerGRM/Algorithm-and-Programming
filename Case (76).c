#include <stdio.h>
#include <string.h>

int main(){
    int T; //test case
    char S[1001];

    scanf("%d", &T);

    for(int i = 1; i <= T; i++){
        getchar();
        scanf("%[^\n]", S);

        printf("Case %d: ", i);
        for(int j = 0; j < strlen(S); j++){
            if(j > 0){
                printf("-");
            }
            printf("%d", S[j]);
        }
        printf("\n");
    }

    return 0;
}

