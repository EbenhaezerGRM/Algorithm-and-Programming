#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);

    int N;
    for(int i = 0; i < T; i++){
        scanf("%d", &N);
        long long int score[N];
        long long int min[N];
        
        for(int j = 0; j < N; j++){
            scanf("%lld", &score[j]);
        }

        for(int j = 0; j < N; j++){
            scanf("%lld", &min[j]);
        }

        int total = 0;
        for(int j = 0; j < N; j++){
            if(score[j] < min[j]){
                total++;
            }
        }

        printf("Case #%d: ", i + 1);
        printf("%d\n", total);
    }
    return 0;
}

// #include <stdio.h>

// int main(){
//     int T;
//     scanf("%d", &T);

//     int N;
//     for(int i = 0; i < T; i++){
//         scanf("%d", &N);
//         long long int arr[2][N];

//         for(int j = 0; j < 2; j++){
//             for(int k = 0; k < N; k++){
//                 scanf("%lld", &arr[j][k]);

//             }
//         }

//         int total = 0;
//         for(int k = 0; k < N; k++){
//             if(arr[0][k] != arr[1][k]){
//                 total++;
//             }
//         }
//         printf("Case #%d: ", i + 1);    
//         printf("%d\n", total);
//     }
//     return 0;
// }