//RAGU

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    long long int A[N];

    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%lld", &A[i]);
        if(A[i] == 1 || A[i] == 2 || A[i] == 3 || A[i] == 5 || A[i] == 7){
            sum++;
        }
        else{
            continue;
        }
    }
    printf("%d\n", sum);

    return 0;
}