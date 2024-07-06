#include <stdio.h>

int main() {
    int T; 
    
    scanf("%d", &T);
    
    for (int i = 1; i <= T; i++) {
        int N;
        scanf("%d", &N);
        long long int arr[N][N];

        for (int j = 0; j < N; j++) {
            for (int k = 0; k < N; k++) {
                scanf("%lld", &arr[j][k]);
            }
        }

        printf("Case #%d:", i);
        for (int j = 0; j < N; j++) {
            long long int sum = 0;
            for (int k = 0; k < N; k++) {
                sum += arr[k][j];
            }
            printf(" %lld", sum);
        }
        printf("\n");
    }

    return 0;
}

// #include <stdio.h>

// int main(){
//     int T;
    
//     scanf("%d", &T);
//     int X;
//     for(int i = 0; i < T; i++){
//         scanf("%d", &X);
//         long long int arr[X][X];

//         for(int j = 0; j < X; j++){
//             for(int k = 0; k < X; k++){
//                 scanf("%lld", &arr[j][k]);
//             }
//         }

//         printf("Case #%d:", i + 1);
//         for(int j = 0; j < X; j++){
//             int sum = 0;
//             for(int k = 0; k < X; k++){
//                 sum += arr[k][j];
//             }
//             printf(" %d", sum);
//         }
//         printf("\n");
//     }


//     return 0;
// }
