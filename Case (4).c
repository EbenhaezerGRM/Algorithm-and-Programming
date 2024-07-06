// #include <stdio.h>

// int main() {
//     int N, M;
//     scanf("%d %d", &N, &M);

//     while (0 < M) {
//         printf("%d\n", N++);
//         M--;
//     }

//     return 0;
// }


// #include <stdio.h>

// int main(){
//     int N, M;
//     scanf("%d %d", &N, &M);

//     for(int i = 0; i < M; i++){
//         printf("%d\n", N++);
//     }
//     return 0;
// }


#include <stdio.h>

int main(void){
    int N, M, counter;
    scanf("%d %d", &N, &M);
    counter = 0;
    for(;counter < M;){
        printf("%d\n", N);
        N = N + 1;
        counter = counter + 1;
    }
    return 0;
}