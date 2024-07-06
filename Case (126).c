#include <stdio.h>

int main(){
    int T; 
    int N; 
    
    scanf("%d", &T);

    for(int i = 0 ; i < T; i++){
        scanf("%d", &N);
        
        int A[N];

        int odd = 0;
        int even = 0;
        for(int j = 0; j < N; j++){
            scanf("%d", &A[j]);
            if(A[j] % 2 == 0){
                even++;
            }
            else{
                odd++;
            }
        }
        printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n\n", even);
    }

    return 0;
}