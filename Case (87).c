#include <stdio.h>

int main(){
    int N; 

    scanf("%d", &N);
    int A[N];  
    int B[N];  
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    for(int i = 0; i < N; i++){
        scanf("%d", &B[i]);
    }

    int result[N]; 
    for (int i = 0; i < N; i++) {
        result[A[i]] = B[i]; 
    }

    for(int i = 0; i < N; i++){
        if(i > 0){
            printf(" ");
        }
        printf("%d", result[i]);
    }
    printf("\n");
    return 0;
}