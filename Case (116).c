#include <stdio.h>

int main(){
    long long int N; 
    long long int P; 

    scanf("%lld %lld", &N, &P);
    long long int balon[N]; 

    long long int stop = 0;
    for(int i = 0; i < N; i++){
        scanf("%lld", &balon[i]);

        if(balon[i] < P){
            stop++;
        }
    }

    printf("%lld\n", stop);
    return 0;
}