//OK

#include <stdio.h>

int main(){
    int T;
    
    scanf("%d", &T);
    int X;
    for(int i = 0; i < T; i++){
        scanf("%d", &X);
        long long int arr[X][X];

        for(int j = 0; j < X; j++){
            for(int k = 0; k < X; k++){
                scanf("%lld", &arr[j][k]);
            }
        }

        printf("Case #%d:", i + 1);
        for(int j = 0; j < X; j++){
            int sum = 0;
            for(int k = 0; k < X; k++){
                sum += arr[k][j];
            }
            printf(" %d", sum);
        }
        printf("\n");
    }


    return 0;
}