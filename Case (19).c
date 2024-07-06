#include <stdio.h>

int main(){
    long long int T; 

    scanf("%lld", &T);
    long long int P[T];

    for(int i = 1; i <= T; i++){
        scanf("%lld", &P[i]);

        printf("Case #%d:", i);

        int slice = 0;
        for(int j = 0; j < P[i]; j++){
            slice = slice + j;
            printf("%lld", slice + 1);
        }
        printf("\n");
    }
    return 0;
}
