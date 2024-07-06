#include <stdio.h>

int main(){
    int tc; //test case
    int N;  //besaran array/ matriks
    
    scanf("%d", &tc);

    for(int i = 1; i <= tc; i++){
        
        scanf("%d", &N);

        int arr[N][N]; 
        int sum = 0;

        for(int j = 0; j < N; j++){
            for(int k = 0; k < N; k++){
                scanf("%d", &arr[j][k]);
            }
        }
        
        printf("Case #%d:", i);
        for(int j = 0; j < N; j++){
            int sum = 0;
            for(int k = 0; k < N; k++){
                sum += arr[k][j];
            }
            printf(" %d", sum);
        }
        printf("\n");

    }
    return 0;
}