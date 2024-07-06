#include <stdio.h>

int main(){
    int N; //banyaknya kado
    
    scanf("%d", &N);
    int A[N]; //nomor kado
    
    for(int i = 0; i < N; i++){
        scanf("%d", &A[i]);
    }

    int min;
    for(int i = 0; i < N; i++){
        for(int j = 1 + 1; i < N; j++){
            if(A[i] > A[j]){
                min = A[i];
                A[i] = A[j];
                A[j] = min;
            }
            printf("%d\n", A[i]);
        }
    }


    return 0;
}