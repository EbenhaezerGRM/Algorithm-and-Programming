#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);
    int K[N];

    int sum = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", &K[i]);
        sum = sum + K[i];

        if(sum == 9){
            sum = 21;
        }
        else if(sum == 33){
            sum = 42;
        }
        else if(sum == 76){
            sum = 92;
        }
        else if(sum == 53){
            sum = 37;
        }
        else if(sum == 80){
            sum = 59;
        }
        else if(sum == 97){
            sum = 88;
        }
    }
    printf("%d\n", sum);
    return 0;
}